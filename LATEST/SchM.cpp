/*****************************************************/
/* File   : SchM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "SchM.h"

#include "SchM_EcuM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_SchM_EcuM_Init SchM_EcuM_Init;
class_SchM_EcuM_DeInit SchM_EcuM_DeInit;
class_SchM SchM;

class_EcuM_Init_Client *EcuM_Init_Client_ptr_SchM = &SchM_EcuM_Init;
class_EcuM_DeInit_Client *EcuM_DeInit_Client_ptr_SchM = &SchM_EcuM_DeInit;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, SCHM_CODE) class_SchM_EcuM_Init::InitFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM_EcuM_DeInit::DeInitFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM::ActMainFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM::CancelMainFunction(void){
}

FUNC(void, SCHM_CODE) class_SchM::Start(void){
}

FUNC(void, SCHM_CODE) class_SchM::StartTiming(void){
}

FUNC(void, SCHM_CODE) class_SchM::GetVersionInfo(void){
}

FUNC(void, SCHM_CODE) class_SchM::Enter(void){
}

FUNC(void, SCHM_CODE) class_SchM::Exit(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

