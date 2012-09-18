/*
* Configuration of module: Rte (Rte_Tester_Internal.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    TMS570
*
* Module vendor:           ArcCore
* Generator version:       0.0.13
*
* Generated by Arctic Studio (http://arccore.com) 
*/

/* Rte_Tester.h */

#ifndef RTE_TESTER_H
#define RTE_TESTER_H

#include "Rte_Type.h"

UInt8 Rte_IRead_TesterRunnable_Arguments_arg1();

UInt8 Rte_IRead_TesterRunnable_Arguments_arg2();

void Rte_IWrite_TesterRunnable_Result_result(UInt16 Value);

Std_ReturnType Rte_Call_Tester_Calculator_Multiply(const UInt8 arg1,
		const UInt8 arg2, UInt16* result);

UInt32 Rte_IRead_FreqReqRunnable_FreqReq_freq();

void Rte_IWrite_FreqReqRunnable_FreqReqInd_freq(UInt32 Value);

void TesterRunnable();

void FreqReqRunnable();

#endif
