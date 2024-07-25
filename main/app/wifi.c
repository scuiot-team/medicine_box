#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "mqtt_client.h"
#include "esp_event.h"
#include "esp_wifi.h"
#include "nvs_flash.h"
#include "wifi.h"
#include "custom.h"
#include "app_sr_handler.h"


void Z_Mqtt_Init();
bool Z_mqtt_connect_flag=false;             //记录是否连接上MQTT服务器的一个标志,如果连接上了才可以发布信息
esp_mqtt_client_handle_t emcht;             //MQTT客户端句柄
//WiFI事件处理函数
void  wifi_event_fun(void* handler_arg,esp_event_base_t event_base,int32_t event_id,void* event_data){
    printf("%s,%ld\r\n",event_base,event_id);
 
    if(event_id==WIFI_EVENT_STA_START){                 //如果是STA开启了,那么尝试连接
        esp_wifi_connect();                         
    }else if(event_id==WIFI_EVENT_STA_CONNECTED){       //连接上WiFI之后
        Z_Mqtt_Init();                                  //开始连接MQTT服务器
    }else if(event_id==WIFI_EVENT_STA_DISCONNECTED){    //断开WiFi之后
        esp_wifi_connect();                             //尝试重连WiFi
    }
}
 
//MQTT事件处理函数
void mqtt_event_fun(void *event_handler_arg, esp_event_base_t event_base, int32_t event_id, void *event_data){
    printf("%s,%ld\r\n",event_base,event_id);
 
    if(event_id==MQTT_EVENT_CONNECTED){                 //连接上MQTT服务器
        Z_mqtt_connect_flag=true;
        esp_mqtt_client_subscribe_single(emcht,"001",1);    //订阅一个测试主题
        printf("success connect mqtt\r\n");
    }else if(event_id==MQTT_EVENT_DISCONNECTED){        //断开MQTT服务器连接
        Z_mqtt_connect_flag=false;
        printf("lose connect mqtt\r\n");
    }else if(event_id==MQTT_EVENT_DATA){                //收到订阅信息
        esp_mqtt_event_handle_t event = (esp_mqtt_event_handle_t )event_data;   //强转获取存放订阅信息的参数
        Show_screen_falling(&guider_ui);
        for(int i=0;i<5;i++){
            sr_echo_play(1,1);
            vTaskDelay(pdMS_TO_TICKS(1000));
        }
        printf("receive data : %.*s from %.*s\r\n",event->data_len,event->data,event->topic_len,event->topic);
        printf("angle: %d\n", atoi(event->data));
        // servo_move(atoi(event->data));
    }
}
void Publish(char * topic , char * data){
    if(Z_mqtt_connect_flag) esp_mqtt_client_publish(emcht,topic,data,strlen(data),1,0);
}
 
void Z_WiFi_Init(void){
    // nvs_flash_init();                           //初始化nvs
    esp_netif_init();                           //初始化TCP/IP堆栈
    esp_event_loop_create_default();            //创建默认事件循环
    esp_event_handler_register(WIFI_EVENT,ESP_EVENT_ANY_ID,wifi_event_fun,NULL);       //绑定事件处理函数
    esp_netif_create_default_wifi_sta();        //创建STA
    wifi_init_config_t wict = WIFI_INIT_CONFIG_DEFAULT();
    esp_wifi_init(&wict);                       //初始化WiFI
    esp_wifi_set_mode(WIFI_MODE_STA);           //设为STA模式
    wifi_config_t wct = {
        .sta = {
            .ssid="sheng",
            .password="sheng666"
        }
    };
    esp_wifi_set_config(WIFI_IF_STA,&wct);      //设置WiFi
    esp_wifi_start();                           //启动WiFi
}
 
void Z_Mqtt_Init(void){
    esp_mqtt_client_config_t emcct = {
        .broker.address.uri="mqtt://zgsdwz.top",  //MQTT服务器的uri
        .broker.address.port=1883                   //MQTT服务器的端口
    };
    emcht = esp_mqtt_client_init(&emcct);           //初始化MQTT客户端获取句柄
    if(!emcht)  printf("mqtt init error!\r\n");
    
    //注册MQTT事件处理函数
    if(esp_mqtt_client_register_event(emcht,ESP_EVENT_ANY_ID,mqtt_event_fun,NULL)!=ESP_OK)  printf("mqtt register error!\r\n");
 
    //开启MQTT客户端
    if(esp_mqtt_client_start(emcht) != ESP_OK)  printf("mqtt start errpr!\r\n");
}