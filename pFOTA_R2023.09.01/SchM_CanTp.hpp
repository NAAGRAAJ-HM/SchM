

#ifndef SCHM_CANTP_H
#define SCHM_CANTP_H

#include "fbl_inc.hpp"

#define CANTP_START_SEC_CODE
#include "MemMap.hpp"
FUNC(void, CANTP_CODE) SwcServiceCanTp_MainFunction(void);
#define CANTP_STOP_SEC_CODE
#include "MemMap.hpp"

#if defined( FBL_ENABLE_COM_RX_INTERRUPT )
#define SchM_Enter_CanTp_CANTP_EXCLUSIVE_AREA_0()   FblInterruptDisable()
#define SchM_Exit_CanTp_CANTP_EXCLUSIVE_AREA_0()    FblInterruptEnable()
#define SchM_Enter_CanTp_CANTP_EXCLUSIVE_AREA_1()   FblInterruptDisable()
#define SchM_Exit_CanTp_CANTP_EXCLUSIVE_AREA_1()    FblInterruptEnable()
#else
#define SchM_Enter_CanTp_CANTP_EXCLUSIVE_AREA_0()
#define SchM_Exit_CanTp_CANTP_EXCLUSIVE_AREA_0()
#define SchM_Enter_CanTp_CANTP_EXCLUSIVE_AREA_1()
#define SchM_Exit_CanTp_CANTP_EXCLUSIVE_AREA_1()
#endif

#endif

