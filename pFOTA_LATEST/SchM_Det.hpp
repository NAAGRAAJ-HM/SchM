

#ifndef SCHM_DET_H
#define SCHM_DET_H

#include "fbl_inc.hpp"

#if defined( FBL_ENABLE_COM_RX_INTERRUPT )
#define SchM_Enter_Det_DET_EXCLUSIVE_AREA_0()     FblInterruptDisable()
#define SchM_Exit_Det_DET_EXCLUSIVE_AREA_0()      FblInterruptEnable()
#else
#define SchM_Enter_Det_DET_EXCLUSIVE_AREA_0()
#define SchM_Exit_Det_DET_EXCLUSIVE_AREA_0()
#endif

#endif

