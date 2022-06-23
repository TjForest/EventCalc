// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H
#define _CRT_SECURE_NO_WARNINGS

// add headers that you want to pre-compile here
//#include "../EventCalc/CalcProcessor.h"
#include "../EventCalc/ICommand.h"
#include "../EventCalc/AddCommand.h"
#include "../EventCalc/SubCommand.h"
#include "../EventCalc/MultCommand.h"
#include "../EventCalc/DivCommand.h"
#include "../EventCalc/ButtonFactory.h"

#endif //PCH_H
