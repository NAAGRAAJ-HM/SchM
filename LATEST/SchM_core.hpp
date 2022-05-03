#pragma once
/******************************************************************************/
/* File   : SchM_core.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SCHM_CORE_FUNCTIONALITIES                                              \
              FUNC(void, SCHM_CODE) Enter              (void);                 \
              FUNC(void, SCHM_CODE) Exit               (void);                 \
              FUNC(void, SCHM_CODE) ActMainFunction    (void);                 \
              FUNC(void, SCHM_CODE) CancelMainFunction (void);                 \

#define SCHM_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, SCHM_CODE) Enter              (void) = 0;             \
      virtual FUNC(void, SCHM_CODE) Exit               (void) = 0;             \
      virtual FUNC(void, SCHM_CODE) ActMainFunction    (void) = 0;             \
      virtual FUNC(void, SCHM_CODE) CancelMainFunction (void) = 0;             \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_SchM_Functionality{
   public:
      SCHM_CORE_FUNCTIONALITIES_VIRTUAL
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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
