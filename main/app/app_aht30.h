/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#ifndef _APP_AHT30_H_
#define _APP_AHT30_H_

#include "esp_err.h"
#include "aht20.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Initialize the AHT30 sensor
 *
 * This function initializes the AHT30 sensor and returns a handle to the sensor.
 *
 * @param sensor_handle A pointer to the handle of the AHT30 sensor
 * @return ESP_OK if successful, an error code otherwise
 */
esp_err_t app_aht30_init(aht20_dev_handle_t *sensor_handle);

/**
 * @brief Read data from the AHT30 sensor
 *
 * This function reads temperature and humidity data from the AHT30 sensor.
 *
 * @param sensor_handle The handle of the AHT30 sensor
 * @param temperature A pointer to a float where the temperature data will be stored
 * @param humidity A pointer to a float where the humidity data will be stored
 * @return ESP_OK if successful, an error code otherwise
 */
esp_err_t app_aht30_read(aht20_dev_handle_t *sensor_handle, float* temperature, float* humidity);

#ifdef __cplusplus
}
#endif

#endif


