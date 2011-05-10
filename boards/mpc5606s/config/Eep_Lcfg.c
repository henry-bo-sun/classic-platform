/* -------------------------------- Arctic Core ------------------------------
 * Arctic Core - the open source AUTOSAR platform http://arccore.com
 *
 * Copyright (C) 2009  ArcCore AB <contact@arccore.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 * -------------------------------- Arctic Core ------------------------------*/








#warning "This default file may only be used as an example!"

#include "Eep.h"
#include "Spi.h"
#include "Spi_Cfg.h"

//#define USE_LDEBUG_PRINTF	1
#undef DEBUG_LVL
#define DEBUG_LVL DEBUG_LOW
#include "debug.h"

static void _JobEndNotify(){
	DEBUG(DEBUG_LOW,"EEP JOB END NOTIFICATION\n");
}
static void _JobErrorNotify(){
	DEBUG(DEBUG_LOW,"EEP JOB ERROR NOTIFICATION\n");
}

const Eep_ConfigType EepConfigData[] = {
    {

		// READ and WRITE sequences and ID's defined in Spi_Cfg.h
		.EepCmdSequence = SPI_SEQ_EEP_CMD,
		.EepCmd2Sequence = SPI_SEQ_EEP_CMD2,
		.EepReadSequence = SPI_SEQ_EEP_READ,
		.EepWriteSequence = SPI_SEQ_EEP_WRITE,

		// Channels used
		.EepCmdChannel	= SPI_CH_EEP_CMD,
		.EepAddrChannel	= SPI_CH_EEP_ADDR,
		.EepWrenChannel	= SPI_CH_EEP_WREN,
		.EepDataChannel	= SPI_CH_EEP_DATA,

#if 0
    .EepCmdJob		= SPI_EEP_CMD_JOB,
    .EepDataJob		= SPI_EEP_DATA_JOB,

    // Channels used
    .EepCmdChannel	= SPI_EEP_CMD_CH,
    .EepAdrChannel	= SPI_EEP_ADR_CH,
    .EepDataChannel	= SPI_EEP_DATA_CH,

    // READ and WRITE sequences and ID's defined in Spi_Cfg.h
    .EepReadSequence = SPI_EEP_SEQ_READ,
    .EepWriteSequence = SPI_EEP_SEQ_WRITE,

    // number of bytes read within one job processing cycle in normal mode.
    .EepInitConfiguration = 1,
#endif

    // call cycle of the job processing function during write/erase operations. Unit: [s]
    .EepJobCallCycle = 0.2,

    // This parameter is the used size of EEPROM device in bytes.
//    .EepSize = 0x8000,
    .EepSize = 0x2000,

    // This parameter is a reference to a callback function for positive job result
    .Eep_JobEndNotification = &_JobEndNotify,

    // This parameter is the default EEPROM device mode after initialization.
    .EepDefaultMode = MEMIF_MODE_FAST,

    // Number of bytes read within one job processing cycle in normal mode.
    .EepNormalReadBlockSize = 4,

    // This parameter is the number of bytes read within one job processing cycle in fast mode
    .EepFastReadBlockSize = 64,

    // Number of bytes written within one job processing cycle in normal mode.
    .EepNormalWriteBlockSize = 1,

    // This parameter is the number of bytes written within one job processing cycle in fast mode
    .EepFastWriteBlockSize = 64,

    // This parameter is a reference to a callback function for negative job result
    .Eep_JobErrorNotification = &_JobErrorNotify,

    // This parameter is the EEPROM page size, i.e. number of bytes.
    .EepPageSize = 64,

    // This parameter is the EEPROM device base address.
    .EepBaseAddress =  0
    }
};