#pragma once
/******************************************************************************/
/* File   : infServiceSchM_ServiceNvM_Types.hpp                               */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
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
   public:
      uint8                 u8SizeServiceSchMClients_1ms;
      infServiceSchMClient* aptrServiceSchMClients_1ms[ServiceSchM_SizeServiceSchMClients_1ms];
      uint8                 u8SizeServiceSchMClients_25ms;
      infServiceSchMClient* aptrServiceSchMClients_25ms[ServiceSchM_SizeServiceSchMClients_25ms];
};

class NvM_BlocksNv_ServiceSchM_Type:
      public CfgModule_TypeAbstract
{
};

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

