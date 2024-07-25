/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#ifndef _APP_SERVO_MOTER_H_
#define _APP_SERVO_MOTER_H_


#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Move the servo to a specific angle
 *
 * This function creates a new MCPWM timer and operator, connects them, creates a comparator and generator from the operator,
 * sets the initial compare value, sets the generator action on timer and compare event, enables and starts the timer,
 * sets the compare value to the specified angle, waits for the servo to rotate, and finally stops and disables the timer,
 * and deletes the generator, comparator, operator, and timer.
 *
 * @param angle The angle to which the servo should move. This should be a value between 0 and 180.
 */
void app_servo_move(int angle);

#ifdef __cplusplus
}
#endif

#endif