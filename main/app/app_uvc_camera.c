/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <inttypes.h>
#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"
#include "freertos/task.h"
#include "esp_err.h"
#include "esp_log.h"
#include "esp_heap_caps.h"
#include "usb_stream.h"

#include "app_uvc_camera.h"
#include "app_sr_tts.h"

static const char *TAG = "app_uvc_camera";

#define BIT0_FRAME_START            (0x01 << 0)
#define BIT1_NEW_FRAME_START        (0x01 << 1)
#define BIT2_NEW_FRAME_END          (0x01 << 2)
#define BIT3_SPK_START              (0x01 << 3)
#define BIT4_SPK_RESET              (0x01 << 4)

// static camera_fb_t s_fb = {0};
uint8_t *frame_buffer;

static void camera_frame_cb(uvc_frame_t *frame, void *ptr)
{
    /* Uncomment the following code to check the frame data */
    // ESP_LOGI(TAG, "uvc callback! frame_format = %d, seq = %"PRIu32", width = %"PRIu32", height = %"PRIu32", length = %u, ptr = %d",
    //         frame->frame_format, frame->sequence, frame->width, frame->height, frame->data_bytes, (int) ptr);
}

void app_uvc_suspend(void)
{
    esp_err_t ret = usb_streaming_control(STREAM_UVC, CTRL_SUSPEND, 0);
    if (ret != ESP_OK) {
        ESP_LOGE(TAG, "USB streaming CTRL_SUSPEND failed");
    } else {
        ESP_LOGI(TAG, "USB streaming CTRL_SUSPEND success");
    }
}

void app_uvc_resume(void)
{
    esp_err_t ret = usb_streaming_control(STREAM_UVC, CTRL_RESUME, 0);
    if (ret != ESP_OK) {
        ESP_LOGE(TAG, "usb streaming CTRL_RESUME failed");
    } else {
        ESP_LOGI(TAG, "usb streaming CTRL_RESUME success");
    }
}

uint8_t* app_uvc_get_frame() {
    return frame_buffer;
}

void app_uvc_camera_init(void)
{
    /* Malloc double buffer for usb payload, xfer_buffer_size >= frame_buffer_size*/
    uint8_t *xfer_buffer_a = (uint8_t *)heap_caps_malloc(DEMO_UVC_XFER_BUFFER_SIZE, MALLOC_CAP_SPIRAM);
    assert(xfer_buffer_a != NULL);
    uint8_t *xfer_buffer_b = (uint8_t *)heap_caps_malloc(DEMO_UVC_XFER_BUFFER_SIZE, MALLOC_CAP_SPIRAM);
    assert(xfer_buffer_b != NULL);

    /* Malloc frame buffer for a jpeg frame*/
    frame_buffer = (uint8_t *)heap_caps_malloc(DEMO_UVC_XFER_BUFFER_SIZE, MALLOC_CAP_SPIRAM);
    assert(frame_buffer != NULL);

    /* Config to enable uvc function */
    uvc_config_t uvc_config = {
        .frame_width        = DEMO_UVC_FRAME_WIDTH,
        .frame_height       = DEMO_UVC_FRAME_HEIGHT,
        .frame_interval     = FPS2INTERVAL(15),
        .xfer_buffer_size   = DEMO_UVC_XFER_BUFFER_SIZE,
        .xfer_buffer_a      = xfer_buffer_a,
        .xfer_buffer_b      = xfer_buffer_b,
        .frame_buffer_size  = DEMO_UVC_XFER_BUFFER_SIZE,
        .frame_buffer       = frame_buffer,
        .frame_cb           = &camera_frame_cb,
        .frame_cb_arg       = NULL,
    };

    esp_err_t ret = uvc_streaming_config(&uvc_config);
    if (ret != ESP_OK) {
        ESP_LOGE(TAG, "uvc streaming config failed");
    }

    /* Register the state callback to get connect/disconnect event
    * in the callback, we can get the frame list of current device
    */
    // ESP_ERROR_CHECK(usb_streaming_state_register(&stream_state_changed_cb, NULL));

    /* Start usb streaming, UVC and UAC MIC will start streaming because SUSPEND_AFTER_START flags not set */
    ESP_ERROR_CHECK(usb_streaming_start());
    // ESP_ERROR_CHECK(usb_streaming_connect_wait(portMAX_DELAY));
}