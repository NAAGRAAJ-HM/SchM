/*****************************************************/
/* File   : SchM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infSchM_EcuM.h"
#include "infSchM_SchM.h"
#include "SchM_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_SchM:
      public abstract_module
   ,  public infSchM_EcuM
{
   public:
      FUNC(void, SCHM_CODE) InitFunction   (void);
      FUNC(void, SCHM_CODE) DeInitFunction (void);
      FUNC(void, SCHM_CODE) GetVersionInfo (void);
      FUNC(void, SCHM_CODE) MainFunction   (void);
      FUNC(void, SCHM_CODE) Start          (void);
      FUNC(void, SCHM_CODE) StartTiming    (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_SchM    SchM;
infEcuMClient* gptrinfEcuMClient_SchM = &SchM;
infDcmClient*  gptrinfDcmClient_SchM  = &SchM;
infSchMClient* gptrinfSchMClient_SchM = &SchM;
infSchM_EcuM*  gptrinfSchM_EcuM       = &SchM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, SCHM_CODE) module_SchM::InitFunction(void){
}

FUNC(void, SCHM_CODE) module_SchM::DeInitFunction(void){
}

FUNC(void, SCHM_CODE) module_SchM::GetVersionInfo(void){
}

FUNC(void, SCHM_CODE) module_SchM::MainFunction(void){
//TBD
}

FUNC(void, SCHM_CODE) module_SchM::Start(void){
}

FUNC(void, SCHM_CODE) module_SchM::StartTiming(void){
}

FUNC(void, SCHM_CODE) class_SchM_Unused::ActMainFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM_Unused::CancelMainFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM_Unused::GetVersionInfo(void){
}

FUNC(void, SCHM_CODE) class_SchM_Unused::Enter(void){
}

FUNC(void, SCHM_CODE) class_SchM_Unused::Exit(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

