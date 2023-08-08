

#ifndef SCHM_PDUR_H
#define SCHM_PDUR_H

#include "fbl_inc.hpp"

#if defined( FBL_ENABLE_COM_RX_INTERRUPT )
# define SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0()     FblInterruptDisable()
# define SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0()      FblInterruptEnable()
# define SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_1()     FblInterruptDisable()
# define SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_1()      FblInterruptEnable()
# define SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_2()     FblInterruptDisable()
# define SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_2()      FblInterruptEnable()
# define SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_3()     FblInterruptDisable()
# define SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_3()      FblInterruptEnable()
#else
# define SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0()
# define SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0()
# define SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_1()
# define SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_1()
# define SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_2()
# define SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_2()
# define SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_3()
# define SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_3()
#endif

#endif

