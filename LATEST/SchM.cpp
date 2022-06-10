/******************************************************************************/
/* File   : SchM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgSchM.hpp"
#include "SchM_core.hpp"
#include "infSchM_Exp.hpp"
#include "infSchM_Imp.hpp"

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
      INTERFACES_EXPORTED_SCHM
   ,  public abstract_module
   ,  public class_SchM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};

   public:
      module_SchM(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, SCHM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, SCHM_CONFIG_DATA, SCHM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SCHM_CODE) DeInitFunction (void);
      FUNC(void, SCHM_CODE) MainFunction   (void);
      SCHM_CORE_FUNCTIONALITIES

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
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgSchM;
         }
      }
      else{
#if(STD_ON == SchM_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == SchM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == SchM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SCHM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SCHM_CODE) module_SchM::DeInitFunction(void){
#if(STD_ON == SchM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == SchM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == SchM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SCHM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SCHM_CODE) module_SchM::MainFunction(void){
#if(STD_ON == SchM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == SchM_InitCheck)
   }
   else{
#if(STD_ON == SchM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SCHM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SCHM_CODE) module_SchM::Start(void){
}

FUNC(void, SCHM_CODE) module_SchM::StartTiming(void){
}

FUNC(void, SCHM_CODE) module_SchM::ActMainFunction(void){
}

FUNC(void, SCHM_CODE) module_SchM::CancelMainFunction(void){
}

FUNC(void, SCHM_CODE) module_SchM::Enter(void){
}

FUNC(void, SCHM_CODE) module_SchM::Exit(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

