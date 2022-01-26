#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_SchM.h"

class class_SchM{
   public:
      FUNC(void, SCHM_CODE) Start              (void);
      FUNC(void, SCHM_CODE) InitFunction       (void);
      FUNC(void, SCHM_CODE) DeInitFunction     (void);
      FUNC(void, SCHM_CODE) StartTiming        (void);
      FUNC(void, SCHM_CODE) GetVersionInfo     (void);
      FUNC(void, SCHM_CODE) Enter              (void);
      FUNC(void, SCHM_CODE) Exit               (void);
      FUNC(void, SCHM_CODE) ActMainFunction    (void);
      FUNC(void, SCHM_CODE) CancelMainFunction (void);
};

extern class_SchM SchM;

