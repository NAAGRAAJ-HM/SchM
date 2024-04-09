

#ifndef SCHM_CSM_H
#define SCHM_CSM_H

#include "SwcServiceOs.hpp"

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.hpp"

#define CSM_START_SEC_CODE
#include "MemMap.hpp"

FUNC(void, CSM_CODE) Csm_MainFunction(void);

#define CSM_STOP_SEC_CODE
#include "MemMap.hpp"

#ifdef __cplusplus
}
#endif

#define SchM_Enter_Csm_CSM_EXCLUSIVE_AREA_0()
#define SchM_Exit_Csm_CSM_EXCLUSIVE_AREA_0()

#endif
