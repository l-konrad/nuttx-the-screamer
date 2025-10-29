/****************************************************************************
 * boards/risc-v/esp32c3-legacy/esp32c3-devkit/src/esp32c3-devkit.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __BOARDS_RISCV_ESP32C3_ESP32C3_DEVKIT_SRC_ESP32C3_DEVKIT_H
#define __BOARDS_RISCV_ESP32C3_ESP32C3_DEVKIT_SRC_ESP32C3_DEVKIT_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/compiler.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* TIMERS */

#define TIMER0 0
#define TIMER1 1

/* ONESHOT */

#define ONESHOT_TIMER         1
#define ONESHOT_RESOLUTION_US 1

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Public Data
 ****************************************************************************/

#ifndef __ASSEMBLY__

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

/****************************************************************************
 * Name: esp32c3_bringup
 *
 * Description:
 *   Perform architecture-specific initialization
 *
 *   CONFIG_BOARD_LATE_INITIALIZE=y :
 *     Called from board_late_initialize().
 *
 *   CONFIG_BOARD_LATE_INITIALIZE=y && CONFIG_BOARDCTL=y :
 *     Called from the NSH library via board_app_initialize()
 *
 ****************************************************************************/

int esp32c3_bringup(void);

/****************************************************************************
 * Name: esp32c3_gpio_init
 ****************************************************************************/

#ifdef CONFIG_DEV_GPIO


#define GPIO_BTN_USER1    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|\
                           GPIO_EXTI|GPIO_PORTA|GPIO_PIN0)

#define GPIO_BTN_USER2    (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|\
                           GPIO_EXTI|GPIO_PORTA|GPIO_PIN1)

#define MIN_IRQBUTTON     BUTTON_USER1
#define MAX_IRQBUTTON     BUTTON_USER2
#define NUM_IRQBUTTONS    (BUTTON_USER1 - BUTTON_USER2 + 1)

int esp32c3_gpio_init(void);
#endif

#endif /* __ASSEMBLY__ */
#endif /* __BOARDS_RISCV_ESP32C3_ESP32C3_DEVKIT_SRC_ESP32C3_DEVKIT_H */
