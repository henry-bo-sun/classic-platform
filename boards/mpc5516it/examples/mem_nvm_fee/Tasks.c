/*
* Configuration of module: Os (Tasks.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       2.0.34
*
* Generated by Arctic Studio (http://arccore.com) 
*/

#include "Os.h"
#include "NvM.h"
#include "EcuM.h"
#include "Det.h"
#include "Fee.h"

// #define USE_LDEBUG_PRINTF // Uncomment this to turn debug statements on.
#include "debug.h"


void Task_BswService( void ) {
	EcuM_MainFunction();
//	NvM_MainFunction();
	TerminateTask();
}

void Task_BswServiceMem( void ) {
	NvM_MainFunction();
	Fee_MainFunction();
	Fls_MainFunction();

	TerminateTask();
}

// Tasks
void Task_Startup( void ) {

	//.....
	/* Set events on TASK_ID_BswService_Mem */
//	SetRelAlarm(ALARM_ID_Alarm_BswServiceMem, 10, 2);

	/*
	 * Call EcuM_StartupTwo that do:
	 * - Startup RTE,
	 * - Wait for Nvm to complete
	 * - Call EcuM_AL_DriverInitThree() to initiate Nvm dependent modules.
	 */
	EcuM_StartupTwo();

	/* Start to schedule BSW parts */
	SetRelAlarm(ALARM_ID_Alarm_BswService, 10, 5);

	/* Relax scheduling on memory BSW */
//	CancelAlarm(ALARM_ID_Alarm_BswServiceMem);
//	SetRelAlarm(ALARM_ID_Alarm_BswServiceMem, 10, 20);

	//....

	EcuM_RequestRUN(ECUM_USER_User_1);

	TerminateTask();
}

void Task_Application( void ) {

}

void OsIdle( void ) {
	while(1);
}

// Hooks
#define ERROR_LOG_SIZE 20

struct LogBad_s {
	uint32_t param1;
	uint32_t param2;
	uint32_t param3;
	TaskType taskId;
	OsServiceIdType serviceId;
	StatusType error;
};

void ErrorHook ( StatusType Error ) {

	TaskType task;
	static struct LogBad_s LogBad[ERROR_LOG_SIZE];
	static uint8_t ErrorCount = 0;
	GetTaskID(&task);
	OsServiceIdType service = OSErrorGetServiceId();
	
	LDEBUG_PRINTF("## ErrorHook err=%d\n",Error);

	/* Log the errors in a buffer for later review */
	LogBad[ErrorCount].param1 = os_error.param1;
	LogBad[ErrorCount].param2 = os_error.param2;
	LogBad[ErrorCount].param3 = os_error.param3;
	LogBad[ErrorCount].serviceId = service;
	LogBad[ErrorCount].taskId = task;
	LogBad[ErrorCount].error = Error;

	ErrorCount++;

	// Stall if buffer is full.
	while(ErrorCount >= ERROR_LOG_SIZE);

}

void PostTaskHook ( void ) {
	TaskType task;
	GetTaskID(&task);
	LDEBUG_PRINTF("## PreTaskHook, taskid=%d\n",task);
}

void PreTaskHook ( void ) {
	TaskType task;
	GetTaskID(&task);
	LDEBUG_PRINTF("## PreTaskHook, taskid=%d\n",task);
}

void ShutdownHook ( StatusType Error ) {
	LDEBUG_PRINTF("## ShutdownHook\n");
	while(1);
}

void StartupHook ( void ) {
	LDEBUG_PRINTF("## StartupHook\n");
}
