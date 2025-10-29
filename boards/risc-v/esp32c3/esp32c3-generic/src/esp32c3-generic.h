/****************************************************************************
 * boards/risc-v/esp32c3/esp32c3-generic/src/esp32c3-generic.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * ...
 ****************************************************************************/

#ifndef __BOARDS_RISCV_ESP32C3_ESP32C3_GENERIC_SRC_ESP32C3_GENERIC_H
#define __BOARDS_RISCV_ESP32C3_ESP32C3_GENERIC_SRC_ESP32C3_GENERIC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* RMT gpio */

#define RMT_RXCHANNEL       2
#define RMT_TXCHANNEL       0

#ifdef CONFIG_RMT_LOOP_TEST_MODE
#  define RMT_INPUT_PIN     0
#  define RMT_OUTPUT_PIN    0
#else
#  define RMT_INPUT_PIN     2
#  define RMT_OUTPUT_PIN    8
#endif

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

/* ... (other declarations omitted for brevity) ... */

#ifdef CONFIG_DEV_GPIO

#define GPIO_BTN_USER1    9  /* GPIO0 */
#define GPIO_BTN_USER2    1  /* GPIO1 */

#define MIN_IRQBUTTON     BUTTON_USER1
#define MAX_IRQBUTTON     BUTTON_USER2
#define NUM_IRQBUTTONS    (BUTTON_USER2 - BUTTON_USER1 + 1)

int esp_gpio_init(void);
#endif

#endif /* __ASSEMBLY__ */
#endif /* __BOARDS_RISCV_ESP32C3_ESP32C3_GENERIC_SRC_ESP32C3_GENERIC_H */
