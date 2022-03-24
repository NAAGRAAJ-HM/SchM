/******************************************************************************/
/* File   : SchM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "CfgSchM.h"
#include "infSchM_EcuM.h"
#include "infSchM_Dcm.h"
#include "infSchM_SchM.h"

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
      FUNC(void, SCHM_CODE) InitFunction   (void);
      FUNC(void, SCHM_CODE) DeInitFunction (void);
      FUNC(void, SCHM_CODE) GetVersionInfo (void);
      FUNC(void, SCHM_CODE) MainFunction   (void);
      FUNC(void, SCHM_CODE) Start          (void);
      FUNC(void, SCHM_CODE) StartTiming    (void);

   private:
      CONST(Std_TypeVersionInfo, SCHM_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_SchM, SCHM_VAR) SchM;
CONSTP2VAR(infEcuMClient, SCHM_VAR, SCHM_CONST) gptrinfEcuMClient_SchM = &SchM;
CONSTP2VAR(infDcmClient,  SCHM_VAR, SCHM_CONST) gptrinfDcmClient_SchM  = &SchM;
CONSTP2VAR(infSchMClient, SCHM_VAR, SCHM_CONST) gptrinfSchMClient_SchM = &SchM;
CONSTP2VAR(infSchM_EcuM,  SCHM_VAR, SCHM_CONST) gptrinfSchM_EcuM       = &SchM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SCHM_CODE) module_SchM::InitFunction(void){
   SchM.IsInitDone = E_OK;
}

FUNC(void, SCHM_CODE) module_SchM::DeInitFunction(void){
   SchM.IsInitDone = E_NOT_OK;
}

FUNC(void, SCHM_CODE) module_SchM::GetVersionInfo(void){
#if(STD_ON == SchM_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, SCHM_CODE) module_SchM::MainFunction(void){
}

FUNC(void, SCHM_CODE) module_SchM::Start(void){
}

FUNC(void, SCHM_CODE) module_SchM::StartTiming(void){
}

#include "SchM_Unused.h"

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

