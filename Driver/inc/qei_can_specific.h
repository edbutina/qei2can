/*
 * qei_can_specific.h
 *
 *  Created on: Feb 8, 2020
 *      Author: edwar
 */

#ifndef DRIVER_INC_QEI_CAN_SPECIFIC_H_
#define DRIVER_INC_QEI_CAN_SPECIFIC_H_

// System Control Registers
//
//*****************************************************************************
#define SYSCTL_RCGCGPIO_R       (*((volatile unsigned long *)0x400FE608))
#define SYSCTL_RCGCQEI_R        (*((volatile unsigned long *)0x400FE644))
#define SYSCTL_GPIOHBCTL_R      (*((volatile unsigned long *)0x400FE06C))
#define SYSCTL_RCGC0_R          (*((volatile unsigned long *)0x400FE100))
#define SYSCTL_SRQEI_R          (*((volatile unsigned long *)0x400FE544))
#define SYSCTL_PRQEI_R          (*((volatile unsigned long *)0x400FEA44))

//*****************************************************************************
//
// GPIO registers (PORTB)
//
//*****************************************************************************
#define GPIO_PORTB_DATA_BITS_R  ((volatile unsigned long *)0x40005000)
#define GPIO_PORTB_DATA_R       (*((volatile unsigned long *)0x400053FC))
#define GPIO_PORTB_DIR_R        (*((volatile unsigned long *)0x40005400))
#define GPIO_PORTB_IS_R         (*((volatile unsigned long *)0x40005404))
#define GPIO_PORTB_IBE_R        (*((volatile unsigned long *)0x40005408))
#define GPIO_PORTB_IEV_R        (*((volatile unsigned long *)0x4000540C))
#define GPIO_PORTB_IM_R         (*((volatile unsigned long *)0x40005410))
#define GPIO_PORTB_RIS_R        (*((volatile unsigned long *)0x40005414))
#define GPIO_PORTB_MIS_R        (*((volatile unsigned long *)0x40005418))
#define GPIO_PORTB_ICR_R        (*((volatile unsigned long *)0x4000541C))
#define GPIO_PORTB_AFSEL_R      (*((volatile unsigned long *)0x40005420))
#define GPIO_PORTB_DR2R_R       (*((volatile unsigned long *)0x40005500))
#define GPIO_PORTB_DR4R_R       (*((volatile unsigned long *)0x40005504))
#define GPIO_PORTB_DR8R_R       (*((volatile unsigned long *)0x40005508))
#define GPIO_PORTB_ODR_R        (*((volatile unsigned long *)0x4000550C))
#define GPIO_PORTB_PUR_R        (*((volatile unsigned long *)0x40005510))
#define GPIO_PORTB_PDR_R        (*((volatile unsigned long *)0x40005514))
#define GPIO_PORTB_SLR_R        (*((volatile unsigned long *)0x40005518))
#define GPIO_PORTB_DEN_R        (*((volatile unsigned long *)0x4000551C))
#define GPIO_PORTB_LOCK_R       (*((volatile unsigned long *)0x40005520))
#define GPIO_PORTB_CR_R         (*((volatile unsigned long *)0x40005524))
#define GPIO_PORTB_AMSEL_R      (*((volatile unsigned long *)0x40005528))
#define GPIO_PORTB_PCTL_R       (*((volatile unsigned long *)0x4000552C))
#define GPIO_PORTB_ADCCTL_R     (*((volatile unsigned long *)0x40005530))
#define GPIO_PORTB_DMACTL_R     (*((volatile unsigned long *)0x40005534))

//*****************************************************************************
//
// GPIO registers (PORTB AHB)
//
//*****************************************************************************
#define GPIO_PORTB_AHB_DATA_BITS_R                                            \
                                ((volatile unsigned long *)0x40059000)
#define GPIO_PORTB_AHB_DATA_R   (*((volatile unsigned long *)0x400593FC))
#define GPIO_PORTB_AHB_DIR_R    (*((volatile unsigned long *)0x40059400))
#define GPIO_PORTB_AHB_IS_R     (*((volatile unsigned long *)0x40059404))
#define GPIO_PORTB_AHB_IBE_R    (*((volatile unsigned long *)0x40059408))
#define GPIO_PORTB_AHB_IEV_R    (*((volatile unsigned long *)0x4005940C))
#define GPIO_PORTB_AHB_IM_R     (*((volatile unsigned long *)0x40059410))
#define GPIO_PORTB_AHB_RIS_R    (*((volatile unsigned long *)0x40059414))
#define GPIO_PORTB_AHB_MIS_R    (*((volatile unsigned long *)0x40059418))
#define GPIO_PORTB_AHB_ICR_R    (*((volatile unsigned long *)0x4005941C))
#define GPIO_PORTB_AHB_AFSEL_R  (*((volatile unsigned long *)0x40059420))
#define GPIO_PORTB_AHB_DR2R_R   (*((volatile unsigned long *)0x40059500))
#define GPIO_PORTB_AHB_DR4R_R   (*((volatile unsigned long *)0x40059504))
#define GPIO_PORTB_AHB_DR8R_R   (*((volatile unsigned long *)0x40059508))
#define GPIO_PORTB_AHB_ODR_R    (*((volatile unsigned long *)0x4005950C))
#define GPIO_PORTB_AHB_PUR_R    (*((volatile unsigned long *)0x40059510))
#define GPIO_PORTB_AHB_PDR_R    (*((volatile unsigned long *)0x40059514))
#define GPIO_PORTB_AHB_SLR_R    (*((volatile unsigned long *)0x40059518))
#define GPIO_PORTB_AHB_DEN_R    (*((volatile unsigned long *)0x4005951C))
#define GPIO_PORTB_AHB_LOCK_R   (*((volatile unsigned long *)0x40059520))
#define GPIO_PORTB_AHB_CR_R     (*((volatile unsigned long *)0x40059524))
#define GPIO_PORTB_AHB_AMSEL_R  (*((volatile unsigned long *)0x40059528))
#define GPIO_PORTB_AHB_PCTL_R   (*((volatile unsigned long *)0x4005952C))
#define GPIO_PORTB_AHB_ADCCTL_R (*((volatile unsigned long *)0x40059530))
#define GPIO_PORTB_AHB_DMACTL_R (*((volatile unsigned long *)0x40059534))

//*****************************************************************************
//
// GPIO registers (PORTD)
//
//*****************************************************************************
#define GPIO_PORTD_DATA_BITS_R  ((volatile unsigned long *)0x40007000)
#define GPIO_PORTD_DATA_R       (*((volatile unsigned long *)0x400073FC))
#define GPIO_PORTD_DIR_R        (*((volatile unsigned long *)0x40007400))
#define GPIO_PORTD_IS_R         (*((volatile unsigned long *)0x40007404))
#define GPIO_PORTD_IBE_R        (*((volatile unsigned long *)0x40007408))
#define GPIO_PORTD_IEV_R        (*((volatile unsigned long *)0x4000740C))
#define GPIO_PORTD_IM_R         (*((volatile unsigned long *)0x40007410))
#define GPIO_PORTD_RIS_R        (*((volatile unsigned long *)0x40007414))
#define GPIO_PORTD_MIS_R        (*((volatile unsigned long *)0x40007418))
#define GPIO_PORTD_ICR_R        (*((volatile unsigned long *)0x4000741C))
#define GPIO_PORTD_AFSEL_R      (*((volatile unsigned long *)0x40007420))
#define GPIO_PORTD_DR2R_R       (*((volatile unsigned long *)0x40007500))
#define GPIO_PORTD_DR4R_R       (*((volatile unsigned long *)0x40007504))
#define GPIO_PORTD_DR8R_R       (*((volatile unsigned long *)0x40007508))
#define GPIO_PORTD_ODR_R        (*((volatile unsigned long *)0x4000750C))
#define GPIO_PORTD_PUR_R        (*((volatile unsigned long *)0x40007510))
#define GPIO_PORTD_PDR_R        (*((volatile unsigned long *)0x40007514))
#define GPIO_PORTD_SLR_R        (*((volatile unsigned long *)0x40007518))
#define GPIO_PORTD_DEN_R        (*((volatile unsigned long *)0x4000751C))
#define GPIO_PORTD_LOCK_R       (*((volatile unsigned long *)0x40007520))
#define GPIO_PORTD_CR_R         (*((volatile unsigned long *)0x40007524))
#define GPIO_PORTD_AMSEL_R      (*((volatile unsigned long *)0x40007528))
#define GPIO_PORTD_PCTL_R       (*((volatile unsigned long *)0x4000752C))
#define GPIO_PORTD_ADCCTL_R     (*((volatile unsigned long *)0x40007530))
#define GPIO_PORTD_DMACTL_R     (*((volatile unsigned long *)0x40007534))


//*****************************************************************************
//
// GPIO registers (PORTD AHB)
//
//*****************************************************************************
#define GPIO_PORTD_AHB_DATA_BITS_R                                            \
                                ((volatile unsigned long *)0x4005B000)
#define GPIO_PORTD_AHB_DATA_R   (*((volatile unsigned long *)0x4005B3FC))
#define GPIO_PORTD_AHB_DIR_R    (*((volatile unsigned long *)0x4005B400))
#define GPIO_PORTD_AHB_IS_R     (*((volatile unsigned long *)0x4005B404))
#define GPIO_PORTD_AHB_IBE_R    (*((volatile unsigned long *)0x4005B408))
#define GPIO_PORTD_AHB_IEV_R    (*((volatile unsigned long *)0x4005B40C))
#define GPIO_PORTD_AHB_IM_R     (*((volatile unsigned long *)0x4005B410))
#define GPIO_PORTD_AHB_RIS_R    (*((volatile unsigned long *)0x4005B414))
#define GPIO_PORTD_AHB_MIS_R    (*((volatile unsigned long *)0x4005B418))
#define GPIO_PORTD_AHB_ICR_R    (*((volatile unsigned long *)0x4005B41C))
#define GPIO_PORTD_AHB_AFSEL_R  (*((volatile unsigned long *)0x4005B420))
#define GPIO_PORTD_AHB_DR2R_R   (*((volatile unsigned long *)0x4005B500))
#define GPIO_PORTD_AHB_DR4R_R   (*((volatile unsigned long *)0x4005B504))
#define GPIO_PORTD_AHB_DR8R_R   (*((volatile unsigned long *)0x4005B508))
#define GPIO_PORTD_AHB_ODR_R    (*((volatile unsigned long *)0x4005B50C))
#define GPIO_PORTD_AHB_PUR_R    (*((volatile unsigned long *)0x4005B510))
#define GPIO_PORTD_AHB_PDR_R    (*((volatile unsigned long *)0x4005B514))
#define GPIO_PORTD_AHB_SLR_R    (*((volatile unsigned long *)0x4005B518))
#define GPIO_PORTD_AHB_DEN_R    (*((volatile unsigned long *)0x4005B51C))
#define GPIO_PORTD_AHB_LOCK_R   (*((volatile unsigned long *)0x4005B520))
#define GPIO_PORTD_AHB_CR_R     (*((volatile unsigned long *)0x4005B524))
#define GPIO_PORTD_AHB_AMSEL_R  (*((volatile unsigned long *)0x4005B528))
#define GPIO_PORTD_AHB_PCTL_R   (*((volatile unsigned long *)0x4005B52C))
#define GPIO_PORTD_AHB_ADCCTL_R (*((volatile unsigned long *)0x4005B530))
#define GPIO_PORTD_AHB_DMACTL_R (*((volatile unsigned long *)0x4005B534))

//*****************************************************************************
//
// GPIO registers (PORTF)
//
//*****************************************************************************
#define GPIO_PORTF_DATA_BITS_R  ((volatile unsigned long *)0x40025000)
#define GPIO_PORTF_DATA_R       (*((volatile unsigned long *)0x400253FC))
#define GPIO_PORTF_DIR_R        (*((volatile unsigned long *)0x40025400))
#define GPIO_PORTF_IS_R         (*((volatile unsigned long *)0x40025404))
#define GPIO_PORTF_IBE_R        (*((volatile unsigned long *)0x40025408))
#define GPIO_PORTF_IEV_R        (*((volatile unsigned long *)0x4002540C))
#define GPIO_PORTF_IM_R         (*((volatile unsigned long *)0x40025410))
#define GPIO_PORTF_RIS_R        (*((volatile unsigned long *)0x40025414))
#define GPIO_PORTF_MIS_R        (*((volatile unsigned long *)0x40025418))
#define GPIO_PORTF_ICR_R        (*((volatile unsigned long *)0x4002541C))
#define GPIO_PORTF_AFSEL_R      (*((volatile unsigned long *)0x40025420))
#define GPIO_PORTF_DR2R_R       (*((volatile unsigned long *)0x40025500))
#define GPIO_PORTF_DR4R_R       (*((volatile unsigned long *)0x40025504))
#define GPIO_PORTF_DR8R_R       (*((volatile unsigned long *)0x40025508))
#define GPIO_PORTF_ODR_R        (*((volatile unsigned long *)0x4002550C))
#define GPIO_PORTF_PUR_R        (*((volatile unsigned long *)0x40025510))
#define GPIO_PORTF_PDR_R        (*((volatile unsigned long *)0x40025514))
#define GPIO_PORTF_SLR_R        (*((volatile unsigned long *)0x40025518))
#define GPIO_PORTF_DEN_R        (*((volatile unsigned long *)0x4002551C))
#define GPIO_PORTF_LOCK_R       (*((volatile unsigned long *)0x40025520))
#define GPIO_PORTF_CR_R         (*((volatile unsigned long *)0x40025524))
#define GPIO_PORTF_AMSEL_R      (*((volatile unsigned long *)0x40025528))
#define GPIO_PORTF_PCTL_R       (*((volatile unsigned long *)0x4002552C))
#define GPIO_PORTF_ADCCTL_R     (*((volatile unsigned long *)0x40025530))
#define GPIO_PORTF_DMACTL_R     (*((volatile unsigned long *)0x40025534))

//*****************************************************************************
//
// GPIO registers (PORTF AHB)
//
//*****************************************************************************
#define GPIO_PORTF_AHB_DATA_BITS_R                                            \
                                ((volatile unsigned long *)0x4005D000)
#define GPIO_PORTF_AHB_DATA_R   (*((volatile unsigned long *)0x4005D3FC))
#define GPIO_PORTF_AHB_DIR_R    (*((volatile unsigned long *)0x4005D400))
#define GPIO_PORTF_AHB_IS_R     (*((volatile unsigned long *)0x4005D404))
#define GPIO_PORTF_AHB_IBE_R    (*((volatile unsigned long *)0x4005D408))
#define GPIO_PORTF_AHB_IEV_R    (*((volatile unsigned long *)0x4005D40C))
#define GPIO_PORTF_AHB_IM_R     (*((volatile unsigned long *)0x4005D410))
#define GPIO_PORTF_AHB_RIS_R    (*((volatile unsigned long *)0x4005D414))
#define GPIO_PORTF_AHB_MIS_R    (*((volatile unsigned long *)0x4005D418))
#define GPIO_PORTF_AHB_ICR_R    (*((volatile unsigned long *)0x4005D41C))
#define GPIO_PORTF_AHB_AFSEL_R  (*((volatile unsigned long *)0x4005D420))
#define GPIO_PORTF_AHB_DR2R_R   (*((volatile unsigned long *)0x4005D500))
#define GPIO_PORTF_AHB_DR4R_R   (*((volatile unsigned long *)0x4005D504))
#define GPIO_PORTF_AHB_DR8R_R   (*((volatile unsigned long *)0x4005D508))
#define GPIO_PORTF_AHB_ODR_R    (*((volatile unsigned long *)0x4005D50C))
#define GPIO_PORTF_AHB_PUR_R    (*((volatile unsigned long *)0x4005D510))
#define GPIO_PORTF_AHB_PDR_R    (*((volatile unsigned long *)0x4005D514))
#define GPIO_PORTF_AHB_SLR_R    (*((volatile unsigned long *)0x4005D518))
#define GPIO_PORTF_AHB_DEN_R    (*((volatile unsigned long *)0x4005D51C))
#define GPIO_PORTF_AHB_LOCK_R   (*((volatile unsigned long *)0x4005D520))
#define GPIO_PORTF_AHB_CR_R     (*((volatile unsigned long *)0x4005D524))
#define GPIO_PORTF_AHB_AMSEL_R  (*((volatile unsigned long *)0x4005D528))
#define GPIO_PORTF_AHB_PCTL_R   (*((volatile unsigned long *)0x4005D52C))
#define GPIO_PORTF_AHB_ADCCTL_R (*((volatile unsigned long *)0x4005D530))
#define GPIO_PORTF_AHB_DMACTL_R (*((volatile unsigned long *)0x4005D534))

//*****************************************************************************
//
// QEI registers (QEI0)
//
//*****************************************************************************
#define QEI0_CTL_R              (*((volatile unsigned long *)0x4002C000))
#define QEI0_STAT_R             (*((volatile unsigned long *)0x4002C004))
#define QEI0_POS_R              (*((volatile unsigned long *)0x4002C008))
#define QEI0_MAXPOS_R           (*((volatile unsigned long *)0x4002C00C))
#define QEI0_LOAD_R             (*((volatile unsigned long *)0x4002C010))
#define QEI0_TIME_R             (*((volatile unsigned long *)0x4002C014))
#define QEI0_COUNT_R            (*((volatile unsigned long *)0x4002C018))
#define QEI0_SPEED_R            (*((volatile unsigned long *)0x4002C01C))
#define QEI0_INTEN_R            (*((volatile unsigned long *)0x4002C020))
#define QEI0_RIS_R              (*((volatile unsigned long *)0x4002C024))
#define QEI0_ISC_R              (*((volatile unsigned long *)0x4002C028))

//*****************************************************************************
//
// QEI registers (QEI1)
//
//*****************************************************************************
#define QEI1_CTL_R              (*((volatile unsigned long *)0x4002D000))
#define QEI1_STAT_R             (*((volatile unsigned long *)0x4002D004))
#define QEI1_POS_R              (*((volatile unsigned long *)0x4002D008))
#define QEI1_MAXPOS_R           (*((volatile unsigned long *)0x4002D00C))
#define QEI1_LOAD_R             (*((volatile unsigned long *)0x4002D010))
#define QEI1_TIME_R             (*((volatile unsigned long *)0x4002D014))
#define QEI1_COUNT_R            (*((volatile unsigned long *)0x4002D018))
#define QEI1_SPEED_R            (*((volatile unsigned long *)0x4002D01C))
#define QEI1_INTEN_R            (*((volatile unsigned long *)0x4002D020))
#define QEI1_RIS_R              (*((volatile unsigned long *)0x4002D024))
#define QEI1_ISC_R              (*((volatile unsigned long *)0x4002D028))

//*****************************************************************************
//
// CAN registers (CAN0)
//
//*****************************************************************************
#define CAN0_CTL_R              (*((volatile unsigned long *)0x40040000))
#define CAN0_STS_R              (*((volatile unsigned long *)0x40040004))
#define CAN0_ERR_R              (*((volatile unsigned long *)0x40040008))
#define CAN0_BIT_R              (*((volatile unsigned long *)0x4004000C))
#define CAN0_INT_R              (*((volatile unsigned long *)0x40040010))
#define CAN0_TST_R              (*((volatile unsigned long *)0x40040014))
#define CAN0_BRPE_R             (*((volatile unsigned long *)0x40040018))
#define CAN0_IF1CRQ_R           (*((volatile unsigned long *)0x40040020))
#define CAN0_IF1CMSK_R          (*((volatile unsigned long *)0x40040024))
#define CAN0_IF1MSK1_R          (*((volatile unsigned long *)0x40040028))
#define CAN0_IF1MSK2_R          (*((volatile unsigned long *)0x4004002C))
#define CAN0_IF1ARB1_R          (*((volatile unsigned long *)0x40040030))
#define CAN0_IF1ARB2_R          (*((volatile unsigned long *)0x40040034))
#define CAN0_IF1MCTL_R          (*((volatile unsigned long *)0x40040038))
#define CAN0_IF1DA1_R           (*((volatile unsigned long *)0x4004003C))
#define CAN0_IF1DA2_R           (*((volatile unsigned long *)0x40040040))
#define CAN0_IF1DB1_R           (*((volatile unsigned long *)0x40040044))
#define CAN0_IF1DB2_R           (*((volatile unsigned long *)0x40040048))
#define CAN0_IF2CRQ_R           (*((volatile unsigned long *)0x40040080))
#define CAN0_IF2CMSK_R          (*((volatile unsigned long *)0x40040084))
#define CAN0_IF2MSK1_R          (*((volatile unsigned long *)0x40040088))
#define CAN0_IF2MSK2_R          (*((volatile unsigned long *)0x4004008C))
#define CAN0_IF2ARB1_R          (*((volatile unsigned long *)0x40040090))
#define CAN0_IF2ARB2_R          (*((volatile unsigned long *)0x40040094))
#define CAN0_IF2MCTL_R          (*((volatile unsigned long *)0x40040098))
#define CAN0_IF2DA1_R           (*((volatile unsigned long *)0x4004009C))
#define CAN0_IF2DA2_R           (*((volatile unsigned long *)0x400400A0))
#define CAN0_IF2DB1_R           (*((volatile unsigned long *)0x400400A4))
#define CAN0_IF2DB2_R           (*((volatile unsigned long *)0x400400A8))
#define CAN0_TXRQ1_R            (*((volatile unsigned long *)0x40040100))
#define CAN0_TXRQ2_R            (*((volatile unsigned long *)0x40040104))
#define CAN0_NWDA1_R            (*((volatile unsigned long *)0x40040120))
#define CAN0_NWDA2_R            (*((volatile unsigned long *)0x40040124))
#define CAN0_MSG1INT_R          (*((volatile unsigned long *)0x40040140))
#define CAN0_MSG2INT_R          (*((volatile unsigned long *)0x40040144))
#define CAN0_MSG1VAL_R          (*((volatile unsigned long *)0x40040160))
#define CAN0_MSG2VAL_R          (*((volatile unsigned long *)0x40040164))

//*****************************************************************************
//
// CAN registers (CAN1)
//
//*****************************************************************************
#define CAN1_CTL_R              (*((volatile unsigned long *)0x40041000))
#define CAN1_STS_R              (*((volatile unsigned long *)0x40041004))
#define CAN1_ERR_R              (*((volatile unsigned long *)0x40041008))
#define CAN1_BIT_R              (*((volatile unsigned long *)0x4004100C))
#define CAN1_INT_R              (*((volatile unsigned long *)0x40041010))
#define CAN1_TST_R              (*((volatile unsigned long *)0x40041014))
#define CAN1_BRPE_R             (*((volatile unsigned long *)0x40041018))
#define CAN1_IF1CRQ_R           (*((volatile unsigned long *)0x40041020))
#define CAN1_IF1CMSK_R          (*((volatile unsigned long *)0x40041024))
#define CAN1_IF1MSK1_R          (*((volatile unsigned long *)0x40041028))
#define CAN1_IF1MSK2_R          (*((volatile unsigned long *)0x4004102C))
#define CAN1_IF1ARB1_R          (*((volatile unsigned long *)0x40041030))
#define CAN1_IF1ARB2_R          (*((volatile unsigned long *)0x40041034))
#define CAN1_IF1MCTL_R          (*((volatile unsigned long *)0x40041038))
#define CAN1_IF1DA1_R           (*((volatile unsigned long *)0x4004103C))
#define CAN1_IF1DA2_R           (*((volatile unsigned long *)0x40041040))
#define CAN1_IF1DB1_R           (*((volatile unsigned long *)0x40041044))
#define CAN1_IF1DB2_R           (*((volatile unsigned long *)0x40041048))
#define CAN1_IF2CRQ_R           (*((volatile unsigned long *)0x40041080))
#define CAN1_IF2CMSK_R          (*((volatile unsigned long *)0x40041084))
#define CAN1_IF2MSK1_R          (*((volatile unsigned long *)0x40041088))
#define CAN1_IF2MSK2_R          (*((volatile unsigned long *)0x4004108C))
#define CAN1_IF2ARB1_R          (*((volatile unsigned long *)0x40041090))
#define CAN1_IF2ARB2_R          (*((volatile unsigned long *)0x40041094))
#define CAN1_IF2MCTL_R          (*((volatile unsigned long *)0x40041098))
#define CAN1_IF2DA1_R           (*((volatile unsigned long *)0x4004109C))
#define CAN1_IF2DA2_R           (*((volatile unsigned long *)0x400410A0))
#define CAN1_IF2DB1_R           (*((volatile unsigned long *)0x400410A4))
#define CAN1_IF2DB2_R           (*((volatile unsigned long *)0x400410A8))
#define CAN1_TXRQ1_R            (*((volatile unsigned long *)0x40041100))
#define CAN1_TXRQ2_R            (*((volatile unsigned long *)0x40041104))
#define CAN1_NWDA1_R            (*((volatile unsigned long *)0x40041120))
#define CAN1_NWDA2_R            (*((volatile unsigned long *)0x40041124))
#define CAN1_MSG1INT_R          (*((volatile unsigned long *)0x40041140))
#define CAN1_MSG2INT_R          (*((volatile unsigned long *)0x40041144))
#define CAN1_MSG1VAL_R          (*((volatile unsigned long *)0x40041160))
#define CAN1_MSG2VAL_R          (*((volatile unsigned long *)0x40041164))

#endif /* DRIVER_INC_QEI_CAN_SPECIFIC_H_ */
