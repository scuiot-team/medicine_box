/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#ifndef _APP_DRIVER_H_
#define _APP_DRIVER_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief User state enumeration
 *
 * This enumeration represents the different states a user can be in during the application flow.
 *
 */
typedef enum {
    USER_DONE,                  /*!< User has completed the application flow */
    USER_HEART_RATE_TEST,       /*!< User has started the heart rate and SaO2 test */
} user_state_t;

/**
 * @brief Moter state enumeration
 *
 * This enumeration represents the different states the moter can be in during the application flow.
 *
 */
typedef enum {
    MOTER_STATE_STOP,           /*!< Stop moter */
    MOTER_STATE_CLOSE,          /*!< Close the box */
    MOTER_STATE_OPEN,           /*!< Open the box */
} moter_state_t;
/**
 * @brief Initialize the application driver
 *
 * This function initializes the application driver. It creates tasks for face checking, 
 * box application, and MAX30102 update. It also initializes the UI timer for updating 
 * the clock and calendar.
 */
void app_driver_init(void);

void app_open_box(void);
void app_close_box(void);
void app_HR_check_start(void);
void set_box_state_param(int s);

#ifdef __cplusplus
}
#endif

#endif
