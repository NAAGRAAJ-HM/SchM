

#ifndef SCHM_WRAPNV_H
#define SCHM_WRAPNV_H

#include "fbl_inc.hpp"

#if defined( FBL_ENABLE_COM_RX_INTERRUPT )
#define SchM_Enter_WrapNv_WRAPNV_EXCLUSIVE_AREA_0()     FblInterruptDisable()
#define SchM_Exit_WrapNv_WRAPNV_EXCLUSIVE_AREA_0()      FblInterruptEnable()
#else
#define SchM_Enter_WrapNv_WRAPNV_EXCLUSIVE_AREA_0()
#define SchM_Exit_WrapNv_WRAPNV_EXCLUSIVE_AREA_0()
#endif

#endif

