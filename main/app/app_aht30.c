/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include "esp_log.h"
#include "app_aht30.h"

#define SENSOR_I2C_EXPAND_SCL      (GPIO_NUM_40)
#define SENSOR_I2C_EXPAND_SDA      (GPIO_NUM_41)

#define I2C_EXPAND_NUM             0
#define I2C_EXPAND_CLK_SPEED_HZ    400000

static const char *TAG = "app_aht30";

static esp_err_t i2c_expand_init(void)
{
    const i2c_config_t i2c_expand_conf = {
        .mode = I2C_MODE_MASTER,
        .sda_io_num = SENSOR_I2C_EXPAND_SDA,
        .sda_pullup_en = GPIO_PULLUP_DISABLE,
        .scl_io_num = SENSOR_I2C_EXPAND_SCL,
        .scl_pullup_en = GPIO_PULLUP_DISABLE,
        .master.clk_speed = I2C_EXPAND_CLK_SPEED_HZ
    };

    ESP_ERROR_CHECK(i2c_param_config(I2C_EXPAND_NUM, &i2c_expand_conf));
    ESP_ERROR_CHECK(i2c_driver_install(I2C_EXPAND_NUM, i2c_expand_conf.mode, 0, 0, 0));

    return ESP_OK;
}

esp_err_t app_aht30_init(aht20_dev_handle_t *sensor_handle)
{
    // Initialize I2C
    ESP_ERROR_CHECK(i2c_expand_init());

    // Initialize AHT20
    aht20_i2c_config_t i2c_conf = {
        .i2c_port = I2C_EXPAND_NUM,
        .i2c_addr = AHT20_ADDRRES_0,
    };

    esp_err_t ret = aht20_new_sensor(&i2c_conf, sensor_handle);

    if (ret == ESP_OK) {
        ESP_LOGI(TAG, "Temp & humidity init ok");
    } else {
        ESP_LOGE(TAG, "Temp & humidity init failed");
    }

    return ret;
}

esp_err_t app_aht30_read(aht20_dev_handle_t *sensor_handle, float* temperature, float* humidity)
{
    uint32_t temp_raw, RH_raw;

    esp_err_t ret = aht20_read_temperature_humidity(sensor_handle, &temp_raw, temperature, &RH_raw, humidity);

    if (ret == ESP_OK) {
        ESP_LOGI(TAG, "Temperature: %.2f, Humidity: %.2f", *temperature, *humidity);
    } else {
        ESP_LOGE(TAG, "Temp & humidity read failed");
        return ESP_FAIL;
    }

    return ESP_OK;
}
