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








/*
 * mpc55xx.h
 *
 *  Created on: Jul 13, 2009
 *      Author: mahi
 */

#ifndef MPC55XX_H_
#define MPC55XX_H_


#if defined(CFG_MPC5554)
#include "mpc5554.h"
#elif defined(CFG_MPC5516) || defined(MPC5517)
#include "mpc5516.h"
#elif defined(CFG_MPC5567)
#include "mpc5567.h"
#else
#error NO MCU SELECTED!!!!
#endif

//#include "mpc55xx_aos.h"

#endif /* MPC55XX_H_ */