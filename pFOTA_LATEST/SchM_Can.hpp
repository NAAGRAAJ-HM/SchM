

#ifndef SCHM_CAN_H
#define SCHM_CAN_H

#include "fbl_inc.hpp"

#define CAN_START_SEC_CODE
#include "MemMap.hpp"
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_Write(void);
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_BusOff(void);
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_Read(void);
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_Wakeup(void);
V_DEF_FUNC(V_NONE, void, CODE) Can_MainFunction_Mode(void);
#define CAN_STOP_SEC_CODE
#include "MemMap.hpp"

#if defined( FBL_ENABLE_COM_RX_INTERRUPT )
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_0()   FblInterruptDisable()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_0()    FblInterruptEnable()
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_1()   FblInterruptDisable()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_1()    FblInterruptEnable()
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_2()   FblInterruptDisable()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_2()    FblInterruptEnable()
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_3()   FblInterruptDisable()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_3()    FblInterruptEnable()
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_4()   FblInterruptDisable()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_4()    FblInterruptEnable()
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_5()   FblInterruptDisable()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_5()    FblInterruptEnable()
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_6()   FblInterruptDisable()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_6()    FblInterruptEnable()
#else
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_0()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_0()
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_1()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_1()
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_2()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_2()
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_3()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_3()
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_4()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_4()
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_5()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_5()
#define SchM_Enter_Can_CAN_EXCLUSIVE_AREA_6()
#define SchM_Exit_Can_CAN_EXCLUSIVE_AREA_6()
#endif

#endif

