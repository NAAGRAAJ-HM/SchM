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
#define SCHM_AR_RELEASE_VERSION_MAJOR                                          4
#define SCHM_AR_RELEASE_VERSION_MINOR                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SCHM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SCHM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SCHM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SCHM_AR_RELEASE_VERSION_MINOR!"
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
      FUNC(void, SCHM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, SCHM_CONFIG_DATA, SCHM_APPL_CONST) lptrCfgModule
      );
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
         SCHM_AR_RELEASE_VERSION_MAJOR
      ,  SCHM_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
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
   CONSTP2CONST(CfgModule_TypeAbstract, SCHM_CONFIG_DATA, SCHM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == SchM_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == SchM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == SchM_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_SchM as back-up configuration
      }
      IsInitDone = E_OK;
#if(STD_ON == SchM_InitCheck)
   }
#endif
}

FUNC(void, SCHM_CODE) module_SchM::DeInitFunction(void){
#if(STD_ON == SchM_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == SchM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == SchM_InitCheck)
   }
#endif
}

FUNC(void, SCHM_CODE) module_SchM::MainFunction(void){
#if(STD_ON == SchM_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == SchM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == SchM_InitCheck)
   }
#endif
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

