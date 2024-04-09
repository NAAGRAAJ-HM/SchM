//TBD: Remove duplicate headers

#ifndef SCHM_DEFAULT_H
#define SCHM_DEFAULT_H

#include "Os.hpp"
#include "Compiler.hpp"

#define SCHM_ENTER_DEFAULT()    SuspendAllInterrupts()
#define SCHM_EXIT_DEFAULT()     ResumeAllInterrupts()

#endif

