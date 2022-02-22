/*****************************************************/
/* File   : SchM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "SchM_EcuM.h"
#include "SchM_SchM.h"
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
   ,  public interface_SchM_EcuM
   ,  public interface_SchM_SchM
{
   public:
      FUNC(void, SCHM_CODE) InitFunction   (void);
      FUNC(void, SCHM_CODE) DeInitFunction (void);
      FUNC(void, SCHM_CODE) MainFunction   (void);
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
module_SchM SchM;

interface_SchM_EcuM *EcuM_Client_ptr_SchM = &SchM;
interface_SchM_SchM *SchM_Client_ptr_SchM = &SchM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, SCHM_CODE) module_SchM::InitFunction(void){
}

FUNC(void, SCHM_CODE) module_SchM::DeInitFunction(void){
}

FUNC(void, SCHM_CODE) module_SchM::MainFunction(void){
//TBD
}

FUNC(void, SCHM_CODE) class_SchM_Unused::ActMainFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM_Unused::CancelMainFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM_Unused::Start(void){
}

FUNC(void, SCHM_CODE) class_SchM_Unused::StartTiming(void){
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

