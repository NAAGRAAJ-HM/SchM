#pragma once
/******************************************************************************/
/* File   : infServiceSchM_ServiceNvM.hpp                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceSchMClient.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CONSTSERVICESCHM_AR_RELEASE_VERSION_MAJOR                              4
#define CONSTSERVICESCHM_AR_RELEASE_VERSION_MINOR                              3
#define ServiceSchM_SizeServiceSchMClients_1ms                                 5
#define ServiceSchM_SizeServiceSchMClients_25ms                                5

#define Const_DefaultInit_ConstServiceSchM                                                                                     \
   ,  {                                                                                                                        \
            {CONSTSERVICESCHM_AR_RELEASE_VERSION_MAJOR, CONSTSERVICESCHM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  ServiceSchM_SizeServiceSchMClients_1ms                                                                             \
         ,  {                                                                                                                  \
                  &ServiceEcuM                                                                                                 \
               ,  &ServiceNvM                                                                                                  \
               ,  &EcuabCanIf                                                                                                  \
               ,  &ServicePduR                                                                                                 \
               ,  &ServiceDcm                                                                                                  \
            }                                                                                                                  \
         ,  ServiceSchM_SizeServiceSchMClients_25ms                                                                            \
         ,  {                                                                                                                  \
                  &McalWdg                                                                                                     \
               ,  &McalAdc                                                                                                     \
               ,  &ServiceSwcIoHwAb                                                                                            \
               ,  &ApplSwcFoc                                                                                                  \
               ,  &McalGpt                                                                                                     \
            }                                                                                                                  \
      }                                                                                                                        \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CONSTSERVICESCHM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CONSTSERVICESCHM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CONSTSERVICESCHM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CONSTSERVICESCHM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

