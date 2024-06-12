/******************************************************************************/
/* File   : ServiceSchM.cpp                                                   */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceSchM.hpp"
#include "infServiceSchM_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceSchM, SERVICESCHM_VAR) ServiceSchM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICESCHM_CONST,       SERVICESCHM_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICESCHM_CONFIG_DATA, SERVICESCHM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceSchM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceSchM_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceSchM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceSchM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICESCHM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::DeInitFunction(
   void
){
#if(STD_ON == ServiceSchM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceSchM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceSchM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICESCHM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::MainFunction(
   void
){
#if(STD_ON == ServiceSchM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceSchM_InitCheck)
   }
   else{
#if(STD_ON == ServiceSchM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICESCHM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::Start(
   void
){
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::StartTiming(
   void
){
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::ActMainFunction(
   void
){
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::McalCancelMainFunction(
   void
){
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::Enter(
   void
){
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::Exit(
   void
){
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::ServiceSchM_1ms(void){
   for(
      uint8 lu8Index = 0;
            lu8Index < ((NvM_BlocksRom_ServiceSchM_Type*)lptrNvMBlocksRom)->u8SizeServiceSchMClients_1ms;
            lu8Index ++
   ){
      ((NvM_BlocksRom_ServiceSchM_Type*)lptrNvMBlocksRom)->aptrServiceSchMClients_1ms[lu8Index]->MainFunction();
   }
}

#include "ReSimFm.hpp"
FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::ServiceSchM_25ms(void){
//   ReSim.MainFunction();
   for(
      uint8 lu8Index = 0;
            lu8Index < ((NvM_BlocksRom_ServiceSchM_Type*)lptrNvMBlocksRom)->u8SizeServiceSchMClients_25ms;
            lu8Index ++
   ){
      ((NvM_BlocksRom_ServiceSchM_Type*)lptrNvMBlocksRom)->aptrServiceSchMClients_25ms[lu8Index]->MainFunction();
   }
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

