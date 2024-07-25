/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <string.h>
#include <math.h>
#include <time.h>
#include <sys/time.h>
#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"
#include "driver/i2c.h"

#include "bsp/esp-box-3.h"
#include "app_sr.h"
#include "esp_heap_caps.h"
#include "esp_log.h"
#include "esp_check.h"
#include "app_sr_handler.h"
#include "app_sr_tts.h"
#include "app_uvc_camera.h"
#include "app_servo_moter.h"
#include "app_aht30.h"
// #include "max30102.h"

#include "app_driver.h"

#define I2C_SDA_PIN                     (GPIO_NUM_40)
#define I2C_SCL_PIN                     (GPIO_NUM_41)
#define I2C_NUM                         0
#define I2C_EXPAND_CLK_SPEED_HZ         400000

/* Using 270 degree servo motor */
#define BOX_SERVO_ANGLE_CLOSE           135
#define BOX_SERVO_ANGLE_1               100
#define BOX_SERVO_ANGLE_2               66
#define BOX_SERVO_ANGLE_3               32
#define BOX_SERVO_ANGLE_4               -3
#define BOX_SERVO_ANGLE_5               -38
#define BOX_SERVO_ANGLE_6               -70
#define BOX_SERVO_ANGLE_7               -101

static const char *TAG = "app_driver";
int box_state=0;
int angle=0;
static user_state_t  g_user_state   = USER_DONE;
static moter_state_t g_moter_state  = MOTER_STATE_STOP;

void app_open_box(void)
{
    g_moter_state = MOTER_STATE_OPEN;
}

void app_close_box(void)
{
    g_moter_state = MOTER_STATE_CLOSE;
}

void set_box_state_param(int s){
    angle=(s-box_state)*13;
    box_state = s;

}

void app_HR_check_start(void)
{
    g_user_state = USER_HEART_RATE_TEST;
}


static esp_err_t i2c_init()
{
    i2c_config_t conf = {
        .mode               = I2C_MODE_MASTER,
        .sda_io_num         = I2C_SDA_PIN,
        .sda_pullup_en      = GPIO_PULLUP_ENABLE,
        .scl_io_num         = I2C_SCL_PIN,
        .scl_pullup_en      = GPIO_PULLUP_ENABLE,
        .master.clk_speed   = I2C_EXPAND_CLK_SPEED_HZ
    };
    i2c_param_config(I2C_NUM, &conf);
    i2c_driver_install(I2C_NUM, I2C_MODE_MASTER, 0, 0, 0);
    return ESP_OK;
}

static void box_app_task(void *pvParam)
{
    while (true) {
        if (g_moter_state == MOTER_STATE_OPEN) {
            ESP_LOGI(TAG, "Box state: %d", box_state);
            app_servo_move(angle);
            // switch (box_state) {
            //     case 1:
            //         app_servo_move(BOX_SERVO_ANGLE_1);
            //         break;
            //     case 2:
            //         app_servo_move(BOX_SERVO_ANGLE_2);
            //         break;
            //     case 3:
            //         app_servo_move(BOX_SERVO_ANGLE_3);
            //         break;
            //     case 4:
            //         app_servo_move(BOX_SERVO_ANGLE_4);
            //         break;
            //     case 5:
            //         app_servo_move(BOX_SERVO_ANGLE_5);
            //         break;
            //     case 6:
            //         app_servo_move(BOX_SERVO_ANGLE_6);
            //         break;
            //     case 7:
            //         app_servo_move(BOX_SERVO_ANGLE_7);
            //         break;
            //     default:
            //         break; 
            // }
            g_moter_state = MOTER_STATE_STOP;
            // g_user_state = USER_DONE;
        } else if (g_moter_state == MOTER_STATE_CLOSE) {
            // Move servo motor to close the door
            ESP_LOGI(TAG, "Close the box");
            // bsp_display_lock(0);
            // _ui_screen_change(&ui_Screen5, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0, &ui_Screen5_screen_init);
            // lv_label_set_text(ui_Labeltext, "药盒已关闭");
            // bsp_display_unlock();
            ESP_LOGI(TAG,"box close");
            app_servo_move(angle);
            // app_servo_move(BOX_SERVO_ANGLE_CLOSE);
            // app_tts_play("药盒已关闭");
            box_state=0;
            g_moter_state = MOTER_STATE_STOP;
            g_user_state = USER_DONE;
        }
        vTaskDelay(100);
    }
    vTaskDelete(NULL);
}

static float calculate_avg(float *array, int length) {
    if (length == 0) {
        return 0.0;
    }

    float sum = 0.0;

    for (int i = 1; i < length; i++) {
        sum += array[i];
    }

    return sum / (length - 1);
}

// static void max30102_update_task(void *pvParam)
// {
//     ESP_LOGI(TAG,"max30102 run");
//     i2c_init();
//     while (1) {
//         if (g_user_state == USER_HEART_RATE_TEST) {
//             /* MAX30102 init */
//             max30102_handle_t max30102_handle = NULL;
//             max30102_data_t   data            = {0};
//             max30102_create(I2C_NUM, &max30102_handle);
//             max30102_config(max30102_handle);

//             // /* Change screen */
//             // bsp_display_lock(0);
//             // _ui_screen_change(&ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0, &ui_Screen3_screen_init);
//             // bsp_display_unlock();

//             ESP_LOGI(TAG, "Start to read HR and SPO2");
//             float heart_rate_values[10] = {0};
//             float spo2_values[10] = {0};
//             float heart_rate_avg = 0.0;
//             float spo2_avg = 0.0;
//             uint32_t data_collected = 1;

//             /* Warm up the sensor*/
//             // lv_label_set_text(ui_LabelLoading, "准备开始");
//             for (int i = 0; i < 8; ) {
//                 if (g_user_state != USER_HEART_RATE_TEST) {
//                     // lv_label_set_text(ui_LabelLoading, "");
//                     break;
//                 }

//                 max30102_get_data(max30102_handle, &data);
//                 vTaskDelay(10 / portTICK_PERIOD_MS);
//                 if (data.hand_detected) {
//                     i++;
//                 }
//             }
//             // lv_label_set_text(ui_LabelLoading, "");

//             /* Collect data */
//             while (data_collected <= 10) {
//                 if (g_user_state != USER_HEART_RATE_TEST) {
//                     break;
//                 }

//                 max30102_get_data(max30102_handle, &data);

//                 if (data.hand_detected) {
//                     ESP_LOGI(TAG, "BPM: %f, SaO2: %f", data.heart_rate, data.spo2);
//                     /* Copy value to buffer */
//                     heart_rate_values[data_collected]    = data.heart_rate;
//                     spo2_values[data_collected]          = data.spo2;

//                     /* Calculate average */
//                     heart_rate_avg  = calculate_avg(heart_rate_values, data_collected);
//                     spo2_avg        = calculate_avg(spo2_values, data_collected);

//                     // /* Update chart value */
//                     // bsp_display_lock(0);
//                     // lv_chart_set_next_value(ui_ChartHR, ui_ChartHR_series_1, heart_rate_values[data_collected]);
//                     // lv_chart_refresh(ui_ChartHR);

//                     // /* Play UI loading animation */
//                     // lv_bar_set_value(ui_BarLoading, data_collected * 10, LV_ANIM_ON);
//                     // // generate a string and set it to the label
//                     // char loading_str[10];
//                     // snprintf(loading_str, sizeof(loading_str), "%ld%%", data_collected * 10);
//                     // lv_label_set_text(ui_LabelStatus, loading_str);

//                     /* Update Label value */
//                     char heart_rate_str[20];
//                     char spo2_str[20];
//                     snprintf(heart_rate_str, sizeof(heart_rate_str), "%.1f", heart_rate_avg);
//                     snprintf(spo2_str, sizeof(spo2_str), "%.1f", spo2_avg);
//                     // lv_label_set_text(ui_LabelHeartrate, heart_rate_str);
//                     // lv_label_set_text(ui_LabelSao2, spo2_str);
//                     // bsp_display_unlock();

//                     data_collected++;
//                 }
//                 vTaskDelay(10 / portTICK_PERIOD_MS);
//             }
//             // app_hr_data_update(roundf(heart_rate_avg * 100) / 100, roundf(spo2_avg * 100) / 100);
//             max30102_deinit(max30102_handle);
//             g_user_state = USER_DONE;
//         }

//         vTaskDelay(10 / portTICK_PERIOD_MS);
//     }

//     vTaskDelete(NULL);
// }


void app_driver_init(void)
{
    /* Create a task to move servo motor */
    xTaskCreate(box_app_task, "box_app_task", 3 * 1024, NULL, 5, NULL);
    /* Create a task to read heartrate and pctspo2 */
    // xTaskCreate(max30102_update_task, "max30102_update_task", 4 * 1024, NULL, 5, NULL);

}