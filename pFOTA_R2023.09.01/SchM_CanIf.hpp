

#ifndef SCHM_CANIF_H
#define SCHM_CANIF_H

#include "fbl_inc.hpp"

#if defined( FBL_ENABLE_COM_RX_INTERRUPT )
#define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_0()   FblInterruptDisable()
#define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_0()    FblInterruptEnable()
#define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_1()   FblInterruptDisable()
#define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_1()    FblInterruptEnable()
#define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_2()   FblInterruptDisable()
#define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_2()    FblInterruptEnable()
#define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_3()   FblInterruptDisable()
#define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_3()    FblInterruptEnable()
#define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_4()   FblInterruptDisable()
#define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_4()    FblInterruptEnable()
#define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_5()   FblInterruptDisable()
#define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_5()    FblInterruptEnable()
#else
#define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_0()
#define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_0()
#define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_1()
#define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_1()
#define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_2()
#define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_2()
#define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_3()
#define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_3()
#define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_4()
#define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_4()
#define SchM_Enter_CanIf_CANIF_EXCLUSIVE_AREA_5()
#define SchM_Exit_CanIf_CANIF_EXCLUSIVE_AREA_5()
#endif

#endif

