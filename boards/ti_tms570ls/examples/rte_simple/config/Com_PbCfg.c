/*
* Configuration of module: Com (Com_PbCfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    TMS570
*
* Module vendor:           ArcCore
* Generator version:       2.1.1
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#include "Com.h"
#include "Com_Internal.h"
#include <stdlib.h>
#if defined(USE_PDUR)
#include "PduR.h"
#endif


/*
 * Signal init values.
 */
const uint8 Com_SignalInitValue_Arg1 = 5;
const uint8 Com_SignalInitValue_ResultSig = 0;
const uint8 Com_SignalInitValue_Arg2 = 3;
const uint32 Com_SignalInitValue_FreqIndSig = 0;
const uint32 Com_SignalInitValue_FreqReqSig = 1000;
	

/*
 * Group signal definitions
 */
const ComGroupSignal_type ComGroupSignal[] = {
	{
		.Com_Arc_EOL = 1
	}
};


/* SignalGroup GroupSignals lists. */


/* IPdu buffers and signal group buffers */
uint8 ComArcIPduBuffer_FreqInd[8]; 
	   
uint8 ComArcIPduBuffer_FreqReq[8];
uint8 ComArcIPduDeferredRxBuffer_FreqReq[8]; 
	   
uint8 ComArcIPduBuffer_RX_PDU[8];
uint8 ComArcIPduDeferredRxBuffer_RX_PDU[8]; 
	   
uint8 ComArcIPduBuffer_TX_PDU[8]; 
	   

/*
 * Signal definitions
 */
 
const ComSignal_type ComSignal[] = {
	{
		.ComHandleId = Arg1,
		.ComIPduHandleId = 2,
		.Com_Arc_ShadowBuffer = NULL,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComErrorNotification = NULL,
		.ComTransferProperty = PENDING,
		
		.ComUpdateBitPosition = 0,
		.ComSignalArcUseUpdateBit = 0,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_Arg1,
		
		.ComBitPosition = 7,
		.ComBitSize = 8,
		
		.ComSignalEndianess = COM_BIG_ENDIAN,
		.ComSignalType = UINT8,
		.Com_Arc_IsSignalGroup = 0,
		.ComGroupSignal = NULL,
		
		
		.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
		
		.Com_Arc_EOL = 0
	},
	{
		.ComHandleId = ResultSig,
		.ComIPduHandleId = 3,
		.Com_Arc_ShadowBuffer = NULL,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComErrorNotification = NULL,
		.ComTransferProperty = TRIGGERED,
		
		.ComUpdateBitPosition = 0,
		.ComSignalArcUseUpdateBit = 0,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_ResultSig,
		
		.ComBitPosition = 7,
		.ComBitSize = 8,
		
		.ComSignalEndianess = COM_BIG_ENDIAN,
		.ComSignalType = UINT8,
		.Com_Arc_IsSignalGroup = 0,
		.ComGroupSignal = NULL,
		
		
		.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
		
		.Com_Arc_EOL = 0
	},
	{
		.ComHandleId = Arg2,
		.ComIPduHandleId = 2,
		.Com_Arc_ShadowBuffer = NULL,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComErrorNotification = NULL,
		.ComTransferProperty = PENDING,
		
		.ComUpdateBitPosition = 0,
		.ComSignalArcUseUpdateBit = 0,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_Arg2,
		
		.ComBitPosition = 15,
		.ComBitSize = 8,
		
		.ComSignalEndianess = COM_BIG_ENDIAN,
		.ComSignalType = UINT8,
		.Com_Arc_IsSignalGroup = 0,
		.ComGroupSignal = NULL,
		
		
		.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
		
		.Com_Arc_EOL = 0
	},
	{
		.ComHandleId = FreqIndSig,
		.ComIPduHandleId = 0,
		.Com_Arc_ShadowBuffer = NULL,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComErrorNotification = NULL,
		.ComTransferProperty = TRIGGERED,
		
		.ComUpdateBitPosition = 0,
		.ComSignalArcUseUpdateBit = 0,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_FreqIndSig,
		
		.ComBitPosition = 7,
		.ComBitSize = 32,
		
		.ComSignalEndianess = COM_BIG_ENDIAN,
		.ComSignalType = UINT32,
		.Com_Arc_IsSignalGroup = 0,
		.ComGroupSignal = NULL,
		
		
		.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
		
		.Com_Arc_EOL = 0
	},
	{
		.ComHandleId = FreqReqSig,
		.ComIPduHandleId = 1,
		.Com_Arc_ShadowBuffer = NULL,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = Rte_COMCbk_FreqReqSig,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComErrorNotification = NULL,
		.ComTransferProperty = PENDING,
		
		.ComUpdateBitPosition = 0,
		.ComSignalArcUseUpdateBit = 0,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_FreqReqSig,
		
		.ComBitPosition = 7,
		.ComBitSize = 32,
		
		.ComSignalEndianess = COM_BIG_ENDIAN,
		.ComSignalType = UINT32,
		.Com_Arc_IsSignalGroup = 0,
		.ComGroupSignal = NULL,
		
		
		.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
		
		.Com_Arc_EOL = 0
	},
	{
		.Com_Arc_EOL = 1
	}
};


/*
 * I-PDU group definitions
 */
const ComIPduGroup_type ComIPduGroup[] = {
	{
		.ComIPduGroupHandleId = ComPduGroup,
		.Com_Arc_EOL = 0
	},
	
	{
		.Com_Arc_EOL  = 1
	}
};

/* IPdu signal lists. */
const ComSignal_type * const ComIPduSignalRefs_FreqInd[] = {
	&ComSignal[ FreqIndSig ],		
	NULL,
};
const ComSignal_type * const ComIPduSignalRefs_FreqReq[] = {
	&ComSignal[ FreqReqSig ],		
	NULL,
};
const ComSignal_type * const ComIPduSignalRefs_RX_PDU[] = {
	&ComSignal[ Arg1 ],
	&ComSignal[ Arg2 ],		
	NULL,
};
const ComSignal_type * const ComIPduSignalRefs_TX_PDU[] = {
	&ComSignal[ ResultSig ],		
	NULL,
};

/*
 * I-PDU definitions
 */
const ComIPdu_type ComIPdu[] = {	
    
	{ // FreqInd
		.ArcIPduOutgoingId = PDUR_PDU_ID_FreqInd,
		.ComIPduCallout = NULL,
		
		.ComIPduSignalProcessing =  DEFERRED,
		.ComIPduSize =  8,
		.ComIPduDirection = SEND,
		.ComIPduGroupRef = ComPduGroup,
		
		.ComIPduDeferredDataPtr = 0,		
		.ComTxIPdu = {
			.ComTxIPduMinimumDelayFactor = 0,
			.ComTxIPduUnusedAreasDefault = 0,
			.ComTxModeTrue = {
				.ComTxModeMode = DIRECT,
				.ComTxModeNumberOfRepetitions = 0,
				.ComTxModeRepetitionPeriodFactor = 0,
				.ComTxModeTimeOffsetFactor = 0,
				.ComTxModeTimePeriodFactor = 0,
			},
		},
		
		.ComIPduDataPtr = ComArcIPduBuffer_FreqInd,		
		.ComIPduSignalRef = ComIPduSignalRefs_FreqInd,
		.ComIPduDynSignalRef = 0,
		.Com_Arc_EOL = 0
	},   
	{ // FreqReq
		.ArcIPduOutgoingId = PDUR_REVERSE_PDU_ID_FreqReq,
		.ComIPduCallout = NULL,
		
		.ComIPduSignalProcessing =  DEFERRED,
		.ComIPduSize =  8,
		.ComIPduDirection = RECEIVE,
		.ComIPduGroupRef = ComPduGroup,
		
		.ComIPduDeferredDataPtr = ComArcIPduDeferredRxBuffer_FreqReq,
		.ComTxIPdu = {
			.ComTxIPduMinimumDelayFactor = 0,
			.ComTxIPduUnusedAreasDefault = 0,
			.ComTxModeTrue = {
				.ComTxModeMode = NONE,
				.ComTxModeNumberOfRepetitions = 0,
				.ComTxModeRepetitionPeriodFactor = 0,
				.ComTxModeTimeOffsetFactor = 0,
				.ComTxModeTimePeriodFactor = 0,
			},
		},
		
		.ComIPduDataPtr = ComArcIPduBuffer_FreqReq,		
		.ComIPduSignalRef = ComIPduSignalRefs_FreqReq,
		.ComIPduDynSignalRef = 0,
		.Com_Arc_EOL = 0
	},   
	{ // RX_PDU
		.ArcIPduOutgoingId = PDUR_REVERSE_PDU_ID_RX_PDU,
		.ComIPduCallout = NULL,
		
		.ComIPduSignalProcessing =  DEFERRED,
		.ComIPduSize =  8,
		.ComIPduDirection = RECEIVE,
		.ComIPduGroupRef = ComPduGroup,
		
		.ComIPduDeferredDataPtr = ComArcIPduDeferredRxBuffer_RX_PDU,
		.ComTxIPdu = {
			.ComTxIPduMinimumDelayFactor = 0,
			.ComTxIPduUnusedAreasDefault = 0,
			.ComTxModeTrue = {
				.ComTxModeMode = NONE,
				.ComTxModeNumberOfRepetitions = 0,
				.ComTxModeRepetitionPeriodFactor = 0,
				.ComTxModeTimeOffsetFactor = 0,
				.ComTxModeTimePeriodFactor = 0,
			},
		},
		
		.ComIPduDataPtr = ComArcIPduBuffer_RX_PDU,		
		.ComIPduSignalRef = ComIPduSignalRefs_RX_PDU,
		.ComIPduDynSignalRef = 0,
		.Com_Arc_EOL = 0
	},   
	{ // TX_PDU
		.ArcIPduOutgoingId = PDUR_PDU_ID_TX_PDU,
		.ComIPduCallout = NULL,
		
		.ComIPduSignalProcessing =  DEFERRED,
		.ComIPduSize =  8,
		.ComIPduDirection = SEND,
		.ComIPduGroupRef = ComPduGroup,
		
		.ComIPduDeferredDataPtr = 0,		
		.ComTxIPdu = {
			.ComTxIPduMinimumDelayFactor = 0,
			.ComTxIPduUnusedAreasDefault = 0,
			.ComTxModeTrue = {
				.ComTxModeMode = DIRECT,
				.ComTxModeNumberOfRepetitions = 0,
				.ComTxModeRepetitionPeriodFactor = 0,
				.ComTxModeTimeOffsetFactor = 0,
				.ComTxModeTimePeriodFactor = 0,
			},
		},
		
		.ComIPduDataPtr = ComArcIPduBuffer_TX_PDU,		
		.ComIPduSignalRef = ComIPduSignalRefs_TX_PDU,
		.ComIPduDynSignalRef = 0,
		.Com_Arc_EOL = 0
	},   
	{
		.Com_Arc_EOL = 1
	}
};

const Com_ConfigType ComConfiguration = {
	.ComConfigurationId = 1,
	.ComIPdu = ComIPdu,
	.ComIPduGroup = ComIPduGroup,
	.ComSignal = ComSignal,
	.ComGroupSignal = ComGroupSignal
};

Com_Arc_IPdu_type Com_Arc_IPdu[] = {
	{ // FreqInd
		.Com_Arc_TxIPduTimers = {
			.ComTxIPduNumberOfRepetitionsLeft = 0,
			.ComTxModeRepetitionPeriodTimer = 0,
			.ComTxIPduMinimumDelayTimer = 0,
			.ComTxModeTimePeriodTimer = 0
		},		
		.Com_Arc_IpduStarted = 0	
	},
	{ // FreqReq
		.Com_Arc_TxIPduTimers = {
			.ComTxIPduNumberOfRepetitionsLeft = 0,
			.ComTxModeRepetitionPeriodTimer = 0,
			.ComTxIPduMinimumDelayTimer = 0,
			.ComTxModeTimePeriodTimer = 0
		},		
		.Com_Arc_IpduStarted = 0	
	},
	{ // RX_PDU
		.Com_Arc_TxIPduTimers = {
			.ComTxIPduNumberOfRepetitionsLeft = 0,
			.ComTxModeRepetitionPeriodTimer = 0,
			.ComTxIPduMinimumDelayTimer = 0,
			.ComTxModeTimePeriodTimer = 0
		},		
		.Com_Arc_IpduStarted = 0	
	},
	{ // TX_PDU
		.Com_Arc_TxIPduTimers = {
			.ComTxIPduNumberOfRepetitionsLeft = 0,
			.ComTxModeRepetitionPeriodTimer = 0,
			.ComTxIPduMinimumDelayTimer = 0,
			.ComTxModeTimePeriodTimer = 0
		},		
		.Com_Arc_IpduStarted = 0	
	},
};

Com_Arc_Signal_type Com_Arc_Signal[] = {
	{ // Arg1
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // ResultSig
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // Arg2
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // FreqIndSig
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // FreqReqSig
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
};


Com_Arc_Config_type Com_Arc_Config = {
	.ComIPdu = Com_Arc_IPdu,
	.ComSignal = Com_Arc_Signal,
	.ComGroupSignal = NULL
};

