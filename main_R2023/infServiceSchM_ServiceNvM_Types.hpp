#pragma once
/******************************************************************************/
/* File   : infServiceSchM_ServiceNvM_Types.hpp                               */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ServiceSchM_SizeServiceSchMClients_1ms                                 5
#define ServiceSchM_SizeServiceSchMClients_25ms                                5

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class NvM_BlocksRom_ServiceSchM_Type:
      public ConstModule_TypeAbstract
{
/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
   public:
      uint8                 u8SizeServiceSchMClients_1ms;
      infServiceSchMClient* aptrServiceSchMClients_1ms[ServiceSchM_SizeServiceSchMClients_1ms];
      uint8                 u8SizeServiceSchMClients_25ms;
      infServiceSchMClient* aptrServiceSchMClients_25ms[ServiceSchM_SizeServiceSchMClients_25ms];
};

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

