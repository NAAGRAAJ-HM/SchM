#pragma once
/******************************************************************************/
/* File   : ServiceSchM.hpp                                                          */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceSchM.hpp"
#include "CfgServiceSchM.hpp"
#include "ServiceSchM_core.hpp"
#include "infServiceSchM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceSchM:
      INTERFACES_EXPORTED_SERVICESCHM
   ,  public abstract_module
   ,  public class_ServiceSchM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceSchM_Type* lptrConst = (ConstServiceSchM_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICESCHM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICESCHM_CONST,       SERVICESCHM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICESCHM_CONFIG_DATA, SERVICESCHM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICESCHM_CODE) DeInitFunction (void);
      FUNC(void, SERVICESCHM_CODE) MainFunction   (void);
      SERVICESCHM_CORE_FUNCTIONALITIES

      FUNC(void, SERVICESCHM_CODE) Start          (void);
      FUNC(void, SERVICESCHM_CODE) StartTiming    (void);
      FUNC(void, SERVICESCHM_CODE) ServiceSchM_1ms       (void);
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
extern VAR(module_ServiceSchM, SERVICESCHM_VAR) ServiceSchM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

