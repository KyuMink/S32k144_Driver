#ifndef NVIC_H
#define NVIC_H

#include "Nvic_Registers.h"

typedef enum
{
  DMA0_IRQn                 = 0u,
  DMA1_IRQn                 = 1u,
  DMA2_IRQn                 = 2u,
  DMA3_IRQn                 = 3u, 
  DMA4_IRQn                 = 4u,  
  DMA5_IRQn                 = 5u,      
  DMA6_IRQn                 = 6u,                
  DMA7_IRQn                 = 7u,                     
  DMA8_IRQn                 = 8u,                   
  DMA9_IRQn                 = 9u,               
  DMA10_IRQn                = 10u,                 
  DMA11_IRQn                = 11u,                
  DMA12_IRQn                = 12u,            
  DMA13_IRQn                = 13u,             
  DMA14_IRQn                = 14u,              
  DMA15_IRQn                = 15u,           
  DMA_Error_IRQn            = 16u,        
  MCM_IRQn                  = 17u,         
  FTFC_IRQn                 = 18u,         
  Read_Collision_IRQn       = 19u, 
  LVD_LVW_IRQn              = 20u,    
  FTFC_Fault_IRQn           = 21u,
  WDOG_EWM_IRQn             = 22u,
  RCM_IRQn                  = 23u,        
  LPI2C0_Master_IRQn        = 24u,
  LPI2C0_Slave_IRQn         = 25u,
  LPSPI0_IRQn               = 26u,         
  LPSPI1_IRQn               = 27u,     
  LPSPI2_IRQn               = 28u,
  Reserved45_IRQn           = 29u, 
  Reserved46_IRQn           = 30u,
  LPUART0_RxTx_IRQn         = 31u,
  Reserved48_IRQn           = 32u, 
  LPUART1_RxTx_IRQn         = 33u,
  Reserved50_IRQn           = 34u,       
  LPUART2_RxTx_IRQn         = 35u,    
  Reserved52_IRQn           = 36u,     
  Reserved53_IRQn           = 37u,
  Reserved54_IRQn           = 38u,
  ADC0_IRQn                 = 39u,
  ADC1_IRQn                 = 40u,
  CMP0_IRQn                 = 41u,
  Reserved58_IRQn           = 42u,
  Reserved59_IRQn           = 43u,
  ERM_single_fault_IRQn     = 44u,
  ERM_double_fault_IRQn     = 45u,
  RTC_IRQn                  = 46u,
  RTC_Seconds_IRQn          = 47u,
  LPIT0_Ch0_IRQn            = 48u,
  LPIT0_Ch1_IRQn            = 49u,
  LPIT0_Ch2_IRQn            = 50u,
  LPIT0_Ch3_IRQn            = 51u,
  PDB0_IRQn                 = 52u,
  Reserved69_IRQn           = 53u,
  Reserved70_IRQn           = 54u,
  Reserved71_IRQn           = 55u,
  Reserved72_IRQn           = 56u,
  SCG_IRQn                  = 57u,
  LPTMR0_IRQn               = 58u,
  PORTA_IRQn                = 59u,
  PORTB_IRQn                = 60u,
  PORTC_IRQn                = 61u,
  PORTD_IRQn                = 62u,
  PORTE_IRQn                = 63u,
  SWI_IRQn                  = 64u,
  Reserved81_IRQn           = 65u,
  Reserved82_IRQn           = 66u,
  Reserved83_IRQn           = 67u,
  PDB1_IRQn                 = 68u,
  FLEXIO_IRQn               = 69u,
  Reserved86_IRQn           = 70u,
  Reserved87_IRQn           = 71u,
  Reserved88_IRQn           = 72u,
  Reserved89_IRQn           = 73u,
  Reserved90_IRQn           = 74u,
  Reserved91_IRQn           = 75u,
  Reserved92_IRQn           = 76u,
  Reserved93_IRQn           = 77u,
  CAN0_ORed_IRQn            = 78u,
  CAN0_Error_IRQn           = 79u,
  CAN0_Wake_Up_IRQn         = 80u,
  CAN0_ORed_16_31_MB_IRQn   = 81u,
  Reserved99_IRQn           = 82u,
  Reserved100_IRQn          = 83u,
  CAN1_ORed_IRQn            = 84u,
  CAN1_Error_IRQn           = 85u,
  Reserved103_IRQn          = 86u,
  CAN1_ORed_0_15_MB_IRQn    = 87u,
  Reserved105_IRQn          = 88u,
  Reserved106_IRQn          = 89u,
  Reserved107_IRQn          = 90u,
  CAN2_ORed_IRQn            = 91u,
  CAN2_Error_IRQn           = 92u,
  Reserved110_IRQn          = 93u,
  CAN2_ORed_0_15_MB_IRQn    = 94u,
  Reserved112_IRQn          = 95u,
  Reserved113_IRQn          = 96u,
  Reserved114_IRQn          = 97u,
  FTM0_Ch0_Ch1_IRQn         = 98u,
  FTM0_Ch2_Ch3_IRQn         = 99u,
  FTM0_Ch4_Ch5_IRQn         = 101u,
  FTM0_Ch6_Ch7_IRQn         = 102u,
  FTM0_Fault_IRQn           = 103u,
  FTM0_Ovf_Reload_IRQn      = 104u,
  FTM1_Ch0_Ch1_IRQn         = 105u,
  FTM1_Ch2_Ch3_IRQn         = 106u,
  FTM1_Ch4_Ch5_IRQn         = 107u,
  FTM1_Ch6_Ch7_IRQn         = 108u,
  FTM1_Fault_IRQn           = 109u,
  FTM1_Ovf_Reload_IRQn      = 110u,
  FTM2_Ch0_Ch1_IRQn         = 111u,
  FTM2_Ch2_Ch3_IRQn         = 112u,
  FTM2_Ch4_Ch5_IRQn         = 113u,
  FTM2_Ch6_Ch7_IRQn         = 114u,
  FTM2_Fault_IRQn           = 115u,
  FTM2_Ovf_Reload_IRQn      = 116u,
  FTM3_Ch0_Ch1_IRQn         = 117u,
  FTM3_Ch2_Ch3_IRQn         = 118u,
  FTM3_Ch4_Ch5_IRQn         = 119u,
  FTM3_Ch6_Ch7_IRQn         = 120u,
  FTM3_Fault_IRQn           = 121u,
  FTM3_Ovf_Reload_IRQn      = 122u,
} IRQn_Type;

void NVIC_EnableInterrupt(IRQn_Type IRQ_number);
void NVIC_DisableInterrupt(IRQn_Type IRQ_number);
void NVIC_ClearPendingFlag(IRQn_Type IRQ_number);
void NVIC_SetPriority(IRQn_Type IRQ_number, unsigned int priority);

char check_priority(unsigned int priority);
char check_IRQn(unsigned int IRQ_number);
#endif
