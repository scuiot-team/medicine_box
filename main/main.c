#include <stdio.h>
#include <math.h>
#include "esp_heap_caps.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_check.h"
#include "nvs_flash.h"
#include "nvs.h"
#include "bsp_storage.h"
#include "app_sr_tts.h"
#include "settings.h"
#include "app_sr.h"
#include "wifi.h"
#include "bsp_board.h"
#include "bsp/esp-bsp.h"
#include "app_driver.h"
#include "gui_guider.h"
#include "custom.h"
 
 
static const char *TAG = "main";

#define MEMORY_MONITOR 0

#if MEMORY_MONITOR
static void monitor_task(void *arg)
{
    (void) arg;

    while (true) {
        ESP_LOGI(TAG, "System Info Trace");
        // printf("\tDescription\tInternal\tSPIRAM\n");
        printf("Current Free Memory\t%d\t\t%d\n",
               heap_caps_get_free_size(MALLOC_CAP_8BIT | MALLOC_CAP_INTERNAL),
               heap_caps_get_free_size(MALLOC_CAP_SPIRAM));
        printf("Largest Free Block\t%d\t\t%d\n",
               heap_caps_get_largest_free_block(MALLOC_CAP_8BIT | MALLOC_CAP_INTERNAL),
               heap_caps_get_largest_free_block(MALLOC_CAP_SPIRAM));
        printf("Min. Ever Free Size\t%d\t\t%d\n",
               heap_caps_get_minimum_free_size(MALLOC_CAP_8BIT | MALLOC_CAP_INTERNAL),
               heap_caps_get_minimum_free_size(MALLOC_CAP_SPIRAM));

        // esp_intr_dump(stdout);
        vTaskDelay(pdMS_TO_TICKS(5 * 1000));
    }

    vTaskDelete(NULL);
}

static void sys_monitor_start(void)
{
    BaseType_t ret_val = xTaskCreatePinnedToCore(monitor_task, "Monitor Task", 4 * 1024, NULL, configMAX_PRIORITIES - 3, NULL, 0);
    ESP_ERROR_CHECK_WITHOUT_ABORT((pdPASS == ret_val) ? ESP_OK : ESP_FAIL);
}
#endif

void app_main(void)
{
    ESP_LOGI(TAG, "Compile time: %s %s", __DATE__, __TIME__);
    /* Initialize NVS. */
    esp_err_t err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES || err == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        err = nvs_flash_init();
    }
    ESP_ERROR_CHECK(err);
    ESP_ERROR_CHECK(settings_read_parameter_from_nvs());

#if !SR_RUN_TEST && MEMORY_MONITOR
    sys_monitor_start(); // Logs should be reduced during SR testing
#endif
    bsp_spiffs_mount();

    bsp_i2c_init();

    bsp_display_cfg_t cfg = {
        .lvgl_port_cfg = ESP_LVGL_PORT_INIT_CONFIG(),
        .buffer_size = BSP_LCD_H_RES * CONFIG_BSP_LCD_DRAW_BUF_HEIGHT,
        .double_buffer = 0,
        .flags = {
            .buff_dma = true,
        }
    };
    cfg.lvgl_port_cfg.task_affinity = 1;
    bsp_display_start_with_config(&cfg);
    bsp_board_init();

    // sensor_task_state_event_init();
    setup_ui();

    vTaskDelay(pdMS_TO_TICKS(500));
    bsp_display_backlight_on();

    ESP_LOGI(TAG, "speech recognition start");
    vTaskDelay(pdMS_TO_TICKS(2000));
    app_sr_start(false);
    vTaskDelay(pdMS_TO_TICKS(2000));
    ESP_LOGI(TAG, "driver start");
    app_driver_init();
    vTaskDelay(pdMS_TO_TICKS(2000));
    ESP_LOGI(TAG,"tts start");
    app_tts_init();
    vTaskDelay(pdMS_TO_TICKS(2000));
    ESP_LOGI(TAG, "wifi start");
    Z_WiFi_Init();
    // app_rmaker_start();
    
    // vTaskDelay(pdMS_TO_TICKS(2000));
    // send_audio();
    // while(1){
    //     char* data="90";
    //     char* topic="001";
    //     Publish(topic,data);
    //     vTaskDelay(pdMS_TO_TICKS(5000));
    // }
    
    // while(1){
    //     vTaskDelay(1000);
    // }
}