/******************************************************************************/
/* File   : SchM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infSchM_EcuM.hpp"
#include "infSchM_Dcm.hpp"
#include "infSchM_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SCHM_AR_RELEASE_MAJOR_VERSION                                          4
#define SCHM_AR_RELEASE_MINOR_VERSION                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SCHM_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible SCHM_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(SCHM_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible SCHM_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_SchM:
      public abstract_module
   ,  public infSchM_EcuM
{
   public:
      module_SchM(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, _CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, _CONFIG_DATA, _APPL_CONST) lptrCfgModule
      );
      FUNC(void, SCHM_CODE) InitFunction   (void);
      FUNC(void, SCHM_CODE) DeInitFunction (void);
      FUNC(void, SCHM_CODE) MainFunction   (void);

      FUNC(void, SCHM_CODE) Start          (void);
      FUNC(void, SCHM_CODE) StartTiming    (void);
};

extern VAR(module_SchM, SCHM_VAR) SchM;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, SCHM_VAR, SCHM_CONST) gptrinfEcuMClient_SchM = &SchM;
CONSTP2VAR(infDcmClient,  SCHM_VAR, SCHM_CONST) gptrinfDcmClient_SchM  = &SchM;
CONSTP2VAR(infSchMClient, SCHM_VAR, SCHM_CONST) gptrinfSchMClient_SchM = &SchM;
CONSTP2VAR(infSchM_EcuM,  SCHM_VAR, SCHM_CONST) gptrinfSchM_EcuM       = &SchM;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgSchM.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_SchM, SCHM_VAR) SchM(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SCHM_CODE) module_SchM::InitFunction(
   CONSTP2CONST(CfgSchM_Type, CFGSCHM_CONFIG_DATA, CFGSCHM_APPL_CONST) lptrCfgSchM
){
   if(NULL_PTR == lptrCfgSchM){
#if(STD_ON == SchM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
// check lptrCfgSchM for memory faults
// use PBcfg_SchM as back-up configuration
   }
   SchM.IsInitDone = E_OK;
}

FUNC(void, SCHM_CODE) module_SchM::DeInitFunction(void){
   SchM.IsInitDone = E_NOT_OK;
}

FUNC(void, SCHM_CODE) module_SchM::MainFunction(void){
}

FUNC(void, SCHM_CODE) module_SchM::Start(void){
}

FUNC(void, SCHM_CODE) module_SchM::StartTiming(void){
}

class class_SchM_Unused{
   public:
      FUNC(void, SCHM_CODE) Enter              (void);
      FUNC(void, SCHM_CODE) Exit               (void);
      FUNC(void, SCHM_CODE) ActMainFunction    (void);
      FUNC(void, SCHM_CODE) CancelMainFunction (void);
};

FUNC(void, SCHM_CODE) class_SchM_Unused::ActMainFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM_Unused::CancelMainFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM_Unused::Enter(void){
}

FUNC(void, SCHM_CODE) class_SchM_Unused::Exit(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

