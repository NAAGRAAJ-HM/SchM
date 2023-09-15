

#ifndef SCHM_MCALCRY_H
#define SCHM_MCALCRY_H

#include "SwcServiceOs.hpp"

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.hpp"

#define MCALCRY_START_SEC_CODE
#include "MemMap.hpp"

FUNC(void, MCALCRY_CODE) McalCry_MainFunction(void);

#define MCALCRY_STOP_SEC_CODE
#include "MemMap.hpp"

#ifdef __cplusplus
}
#endif

#define SchM_Enter_McalCry_MCALCRY_EXCLUSIVE_AREA_0()
#define SchM_Exit_McalCry_MCALCRY_EXCLUSIVE_AREA_0()

#define SchM_Enter_McalCry_MCALCRY_EXCLUSIVE_AREA_1()
#define SchM_Exit_McalCry_MCALCRY_EXCLUSIVE_AREA_1()

#endif
