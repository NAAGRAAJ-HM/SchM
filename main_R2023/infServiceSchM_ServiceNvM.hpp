#pragma once
/******************************************************************************/
/* File   : infServiceSchM_ServiceNvM.hpp                                     */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceSchMClient.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ServiceSchM_SizeServiceSchMClients_1ms                                 5
#define ServiceSchM_SizeServiceSchMClients_25ms                                5

#define NvM_InitBlocksRom_ServiceSchM                                                                                \
   ,  {                                                                                                              \
            {SERVICESCHM_AR_RELEASE_VERSION_MAJOR, SERVICESCHM_AR_RELEASE_VERSION_MINOR, 0x00,0xFF,0x01,'0','1','0'} \
         ,  ServiceSchM_SizeServiceSchMClients_1ms                                                                   \
         ,  {                                                                                                        \
                  &ServiceEcuM                                                                                       \
               ,  &ServiceNvM                                                                                        \
               ,  &EcuabCanIf                                                                                        \
               ,  &ServicePduR                                                                                       \
               ,  &ServiceDcm                                                                                        \
            }                                                                                                        \
         ,  ServiceSchM_SizeServiceSchMClients_25ms                                                                  \
         ,  {                                                                                                        \
                  &McalWdg                                                                                           \
               ,  &McalAdc                                                                                           \
               ,  &ServiceSwcIoHwAb                                                                                  \
               ,  &ApplSwcFoc                                                                                        \
               ,  &McalGpt                                                                                           \
            }                                                                                                        \
      }                                                                                                              \

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

