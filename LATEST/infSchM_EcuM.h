#pragma once
/******************************************************************************/
/* File   : infSchM_EcuM.h                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Compiler_Cfg_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class infSchM_EcuM{
   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      virtual FUNC(void, SCHM_CODE) Start       (void) = 0;
      virtual FUNC(void, SCHM_CODE) StartTiming (void) = 0;
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
extern CONSTP2VAR(infEcuMClient, SCHM_VAR, SCHM_CONST) gptrinfEcuMClient_SchM;
extern CONSTP2VAR(infSchM_EcuM,  SCHM_VAR, SCHM_CONST) gptrinfSchM_EcuM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

