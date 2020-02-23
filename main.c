

/**
 * main.c
 */

/*#include "qei_can_specific.h"*/
#include "tm4c123gh6pm.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>

void QEI0_Init(void);
void CAN0_Init(void);
void UART0_Init(void);
void wait(void);
char readChar(void);
void printChar(char c);
void printString(char * string);



int main(void)
{
    volatile unsigned long HSE_POS;

    QEI0_Init(); /* initialize QEI0 for 500cpr open collector quadrature encoder */
    CAN0_Init();
    UART0_Init();

    while (1){
        printString("Hello world \n\r");
        /*wait();
        HSE_POS = QEI0_POS_R;*/
    }

	/*return 0;*/
}

void wait(){
    int clockcounter = 0;
    while(clockcounter++ < 100000);
}

void QEI0_Init(){
    SYSCTL_RCGCQEI_R = 0x01; /* clock gating enable to qei0 */
    SYSCTL_RCGCGPIO_R = 0x08; /*clock gating to enable clock to GPIO port D */
    SYSCTL_GPIOHBCTL_R = 0x08; /*use AHB port D bus */

    GPIO_PORTD_AHB_LOCK_R = 0x4C4F434B; /*unlock APB port D pins to re-commit PD7 and enable pull-up resistors */
    GPIO_PORTD_AHB_CR_R = 0xC0; /*commit register */
    GPIO_PORTD_AHB_AFSEL_R = 0xC0; /*enable alternate function for APB PD6 and PD7. */
    GPIO_PORTD_AHB_PCTL_R = 0x66000000; /*port control register 0x6 for PD6 and PD7 */
    GPIO_PORTD_AHB_PUR_R = 0xC0; /*enable pull-up resistor 20k nom. */
    GPIO_PORTD_AHB_DEN_R = 0xC0; /*digital enable register */

    QEI0_CTL_R = 0x38; /*enable velocity capture and roll over at max position */
    QEI0_MAXPOS_R = 0x7CF; /*max position = 500*4 -1 CPR = 1999 (7CFH) */

    /*next step is to set bit 0 in QEI0CTL register and read position */
    QEI0_CTL_R |= 0x01;
}

void CAN0_Init(){
    /* using pins PB4 (CAN0Rx) and PB5 (CAN0Tx) */
    SYSCTL_RCGCGPIO_R |= (1 << 1);
    SYSCTL_RCGC0_R = (1 << 24); /* clock gating enable to qei0 */

    GPIO_PORTB_AFSEL_R = 0x30;
    GPIO_PORTB_PCTL_R = 0x880000; /* pb5 (8) and pb4 (8) */

    CAN0_CTL_R = (1 << 0); /* initialize can0 module */

}

void UART0_Init(){
    /* U0Rx -> PA0, U0Tx -> PA1 */
    SYSCTL_RCGCUART_R = (1 << 0); /* run clk gating ctl to enable uart0 */
    SYSCTL_RCGCGPIO_R |= (1 << 0); /* run clk gating ctl to enable gpio port A */
    GPIO_PORTA_AFSEL_R = (1 << 1) | (1 << 0); /* allow pins to be set for alternate functionality */
    GPIO_PORTA_PCTL_R = (1 << 0) | (1 << 4); /* pin mux setting */
    GPIO_PORTA_DEN_R = (1 << 0) | (1 << 1); /* digital enable */

    UART0_CTL_R &= ~(1 << 0); /* disable UART0 module */
    UART0_IBRD_R = 104; /* baud rate setting */
    UART0_FBRD_R = 11; /* franctional setting */
    UART0_LCRH_R = (0x3 << 5); /* 8-bit, no parity, 1-stop bit */
    UART0_CC_R = 0x0; /* UART clock source */
    UART0_CTL_R = (1 << 0) | (1 << 8) | (1 << 9); /* enable UART */
}

char readChar(void){
    char c;
    while((UART0_FR_R & (1 << 4)) != 0);
    c = UART0_DR_R;
    return c;
}

void printChar(char c){
    while((UART0_FR_R & (1 << 5)) != 0);
    UART0_DR_R = c;
}

void printString(char * string){
    while(*string){
        printChar(*(string++));
    }
}
