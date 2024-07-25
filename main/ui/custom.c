/*
* Copyright 2023 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"
#include "time.h" // 需要包含时间库以获取系统时间
#include "esp_http_client.h"// 包含 HTTP 请求相关的函数声明

 /*********************
  *      DEFINES
  *********************/

  /**********************
   *      TYPEDEFS
   **********************/

   /**********************
    *  STATIC PROTOTYPES
    **********************/

    /**********************
     *  STATIC VARIABLES
     **********************/

     /**
      * Create a demo application
      */
      /************************************函数初始化***********************************/
// void custom_init(lv_ui* ui)
// {
//     if (ui == NULL) return; // 确保 ui 指针有效
//     /* Add your codes here */
//      // 初始化界面元素
     
//     // 设置定时器以定期更新时钟
//     // 每秒调用一次 timer_callback_short显示时间
//     lv_timer_t* timer1 = lv_timer_create(timer_callback_short, 1000, ui);

//     //每分钟调用一次timer_callback_long显示日期
//     lv_timer_t* timer2 = lv_timer_create(timer_callback_long, 60000, ui);

//     // 将按钮点击事件绑定到处理天气数据的函数
//     lv_obj_add_event_cb(ui->screen_weather1_img_back, on_weather_img_back_click, LV_EVENT_CLICKED, ui);

//     // 绑定点击事件回调，进入主循环，定时检查用户是否进行了语音输入
//     lv_obj_set_event_cb(ui->screen_ChatGPT1_img_back, on_img_back_click);
// }
/*********************************************************************************/


// // 更新dscreen_first_digital_clock1时钟显示的函数
// static void update_clocks(lv_ui* ui) {
//     if (ui == NULL) return; // 确保 ui 指针有效

//     // 获取系统时间
//     time_t rawtime;
//     struct tm* timeinfo;
//     char time_buffer[10]; // 格式化时间字符串的缓冲区

//     time(&rawtime);
//     timeinfo = localtime(&rawtime);

//     // 格式化时间字符串
//     strftime(time_buffer, sizeof(time_buffer), "%H:%M:%S", timeinfo);

//     // 更新 digital_clock_1的显示内容
//     if (ui->screen_first_digital_clock_1 != NULL) {
//         lv_label_set_text(ui->screen_first_digital_clock_1, time_buffer);
//     }
// }
// // 更新screen_first_dt_cal日期显示
// static void update_date_display(lv_ui* ui) {
//     // 获取当前系统日期
//     time_t now;
//     struct tm* time_info;
//     char date_str[11]; // year/month/day 需要 11 个字符（包括结尾的 \0）

//     time(&now);
//     time_info = localtime(&now);

//     // 格式化日期为 year/month/day
//     strftime(date_str, sizeof(date_str), "%Y/%m/%d", time_info);

//     // 更新 ui->screen_first_dt_cal 显示的日期
//     lv_label_set_text(ui->screen_first_dt_cal, date_str);
// }

// // 添加时间到列表screen_remind_list_remind中
// void update_medication_times(lv_ui* ui, const char time_list[][MAX_TIME_STR_LEN], int count) {
//     lv_list_clean(ui->screen_remind2_list_remind); // 清空现有的列表项

//     for (int i = 0; i < count; i++) {
//         char buf[MAX_TIME_STR_LEN];
//         snprintf(buf, sizeof(buf), "%s", time_list[i]);
//         lv_list_add_btn(ui->screen_remind2_list_remind, LV_SYMBOL_BELL, buf);
//     }
// }

// // 将时间字符串转换为分钟数
// int time_to_minutes(const char* time_str) {
//     int hours, minutes;
//     sscanf(time_str, "%2d:%2d", &hours, &minutes);
//     return hours * 60 + minutes;
// }

// // 计算最近的时间
// void find_next_medication_time(const char time_list[][MAX_TIME_STR_LEN], int count, char* next_time) {
//     time_t now = time(NULL);
//     struct tm* tm_info = localtime(&now);
//     int current_minutes = tm_info->tm_hour * 60 + tm_info->tm_min;

//     int min_diff = INT_MAX;
//     int next_time_minutes = -1;

//     for (int i = 0; i < count; i++) {
//         int time_minutes = time_to_minutes(time_list[i]);
//         int diff = (time_minutes - current_minutes + 1440) % 1440; // 计算分钟差，处理跨日情况

//         if (diff < min_diff) {
//             min_diff = diff;
//             next_time_minutes = time_minutes;
//         }
//     }

//     if (next_time_minutes >= 0) {
//         snprintf(next_time, MAX_TIME_STR_LEN, "%02d:%02d:00", next_time_minutes / 60, next_time_minutes % 60);
//     }
// }

// // 更新数字时钟
// void update_digital_clock2(lv_ui* ui, const char* next_time) {
//     lv_label_set_text(ui->screen_first_digital_clock_2, next_time);
// }

// // 定时器回调函数，用于更新时钟
// static void timer_callback_short(lv_timer_t* timer) {
//     lv_ui* ui = (lv_ui*)timer->user_data; // 获取 ui 指针
//     update_clocks(ui); // 更新时钟显示
// }

// // 定时器回调函数，用于更新日期
// static void timer_callback_long(lv_timer_t* timer) {
//     lv_ui* ui = (lv_ui*)timer->user_data; // 获取 ui 指针
//     update_date_display(ui);   // 更新日期显示
// }


/*******************************************天气******************************************/

// 处理天气数据并更新函数
// void handle_weather_data(lv_ui* ui) {

//     //获取并更新界面内容
//     char temp_str[20];
//     sprintf(temp_str, "%d℃", data.temp);
//     lv_label_set_text(ui->screen_weather_cloudy_lbl_temp, temp_str);

//     lv_label_set_text(ui->screen_weather_cloudy_lbl_type, data.text);
//     char *weather_text = data.text;

//     char rh_str[20];
//     sprintf(rh_str, "%d%%", data.rh);
//     lv_label_set_text(ui->screen_weather_cloudy_lbl_wet, rh_str);

//     // 打印天气情况（用于调试）
//     printf("天气情况: %s\n", weather_text);

//     // 通过 LVGL 更新界面显示
//     if (strstr(weather_text, "雨") != NULL) {
//         // 如果天气中包含“雨”字，显示雨天页面
//         lv_scr_load(ui->screen_weather_rainy);
//     }
//     else if (strcmp(weather_text, "晴") == 0) {
//         // 显示晴天页面
//         lv_scr_load(ui->screen_weather_sunny);
//     }
//     else if (strcmp(weather_text, "多云") == 0 || strcmp(weather_text, "阴") == 0) {
//         // 显示多云或阴天页面
//         lv_scr_load(ui->screen_weather_cloudy);
//     }
//     else {
//         // 处理其他天气情况，显示默认页面（如错误页面）
//         lv_scr_load(ui->screen_weather1); 
//     }
// }

// // 按钮点击事件回调函数
// static void on_weather_img_back_click(lv_event_t* e) {
//     lv_obj_t* btn = lv_event_get_target(e);
//     lv_ui* ui = (lv_ui*)lv_event_get_user_data(e);

//     // 处理天气数据并更新界面
//     handle_weather_data(ui);
// }

/********************************************GPT对话******************************************/

// //字体以及布局的设置
// void setup_chat_ui(lv_ui* ui) {
//     // 假设 ui->screen_ChatGPT2_tileview_1 已经创建
//     lv_obj_set_size(ui->screen_ChatGPT2_tileview_1, lv_pct(100), lv_pct(100));
//     lv_obj_set_scroll_dir(ui->screen_ChatGPT2_tileview_1, LV_DIR_VER);
//     lv_obj_set_order(ui->screen_ChatGPT2_btn_back, 1);
//     lv_obj_set_order(ui->screen_ChatGPT2, 0);
// }

// //添加对话条目函数
// void add_chat_message(lv_ui* ui, char* message, bool is_user) {
//     // 创建一个容器来包含图标和文本
//     lv_obj_t* msg_container = lv_obj_create(ui->screen_ChatGPT2_tileview_1);
//     lv_obj_set_width(msg_container, lv_pct(100));
//     lv_obj_set_style_pad_all(msg_container, 5, LV_PART_MAIN);

//     // 创建图标
//     lv_obj_t* icon = lv_img_create(msg_container);
//     if (is_user) {
//         lv_img_set_src(icon, &_user_alpha_25x25);
//         lv_obj_set_size(icon, 25, 25); // 设置图标尺寸
//     }
//     else {
//         lv_img_set_src(icon, &_4_alpha_25x20);
//         lv_obj_set_size(icon, 25, 20); // 设置图标尺寸
//     }

//     // 创建文本框
//     lv_obj_t* label = lv_label_create(msg_container);
//     lv_label_set_text(label, message);
//     lv_obj_set_style_text_font(label, &lv_font_SourceHanSerifSC_Regular_12, LV_PART_MAIN);
//     lv_label_set_long_mode(label, LV_LABEL_LONG_WRAP); // 使文本自动换行
//     lv_obj_set_width(label, lv_pct(80)); // 设置文本框宽度为容器的 80%
//     lv_obj_align(label, LV_ALIGN_LEFT_MID, 10, 0); // 文本框相对图标位置

//     // 将图标和文本框添加到消息容器中
//     lv_obj_add_child(msg_container, icon);
//     lv_obj_add_child(msg_container, label);

//     // 将消息容器添加到 tileview 中
//     lv_obj_add_child(ui->screen_ChatGPT2_tileview_1, msg_container);

//     // 滚动到最新对话
//     // lv_obj_scroll_to_view(ui->screen_ChatGPT2_tileview_1, msg_container, LV_ALIGN_TOP_LEFT, LV_ANIM_OFF);
// }

/*
定期检查用户是否进行了语音输入
void check_and_update_chat(lv_ui* ui) {
    // 获取用户语音输入
    const char* user_speech = voice_to_question();//voice_to_question(）为获取用户语音文本的函数

    // 如果用户语音输入不为空，处理对话
    if (user_speech != NULL && strlen(user_speech) > 0) {
        // 添加用户消息到 tileview
        add_chat_message(ui->screen_ChatGPT2_tileview_1, user_speech, true);

        // 获取 GPT 回复
        const char* gpt_response = get_gpt_answer(user_speech);

        // 添加 GPT 消息到 tileview
        add_chat_message(ui->screen_ChatGPT2_tileview_1, gpt_response, false);

        // 清除用户语音输入
        clear_voice_input();
    }
}

// 点击事件回调函数，用于点击ui->screen_ChatGPT1_img_back
static void on_img_back_click(lv_obj_t* obj, lv_event_t event) {
    if (event == LV_EVENT_CLICKED) {
        // 启动或激活主循环功能
        start_main_loop();
    }
}

//激活主循环函数
void start_main_loop() {
    while (1) {
        // 其他任务处理代码

        // 检查并更新聊天内容
        check_and_update_chat(ui);

        // 处理 LVGL 事件
        lv_task_handler();
        usleep(5000); // 延迟 5 毫秒
    }
}
*/



/******************************************药物*********************************************/

// 更新药物信息的UI（先更新标签信息再加载界面）
// void update_medicine_info(lv_ui *ui) {
//     char *name = "半夏糖浆";
//     char *use = "口服，一日4次";
//     char *func = "止咳化痰";
//     char *otc = "处方";
//     // 更新界面上的文本
//     lv_label_set_text(ui->screen_medicine_id2_text_name, name);
//     lv_label_set_text(ui->screen_medicine_id2_text_use, use);
//     lv_label_set_text(ui->screen_medicine_id2_text_func, func);
//     lv_label_set_text(ui->screen_medicine_id2_text_otc, otc);

//     // 切换到药物展示界面
//     lv_scr_load(ui->screen_medicine_id2);

// }

/***********************************心率检测*********************************/
void Show_measure1(lv_ui* guider_ui)
{
    // 切换到心率展示界面
    ui_load_scr_animation(guider_ui, &guider_ui->screen_measure_loading, guider_ui->screen_measure_loading_del, &guider_ui->screen_first_del, setup_scr_screen_measure_loading, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
}
void Show_measure2(lv_ui* guider_ui)
{
    // 切换到心率展示界面
    ui_load_scr_animation(guider_ui, &guider_ui->screen_measure2, guider_ui->screen_measure2_del, &guider_ui->screen_measure_loading_del, setup_scr_screen_measure2, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
}

/*******************************摔倒检测************************************/

void Show_screen_falling(lv_ui* guider_ui)
{
    // 切换到摔倒警告界面
    ui_load_scr_animation(guider_ui, &guider_ui->screen_falling, guider_ui->screen_falling_del, &guider_ui->screen_first_del, setup_scr_screen_falling, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
}

/******************************提醒吃药界面*******************************/

// void Show_screen_reminding(lv_ui* ui)
// {
//     // 切换到提醒吃药界面
//     lv_scr_load(ui->screen_reminding);
// }

void Show_screen_weather(lv_ui* guider_ui)
{
    // 切换到天气界面
    // lv_scr_load(ui->screen_weather_cloudy);
    ui_load_scr_animation(guider_ui, &guider_ui->screen_weather_cloudy, guider_ui->screen_weather_cloudy_del, &guider_ui->screen_first_del, setup_scr_screen_weather_cloudy, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
}

void Show_screen_drug1(lv_ui* guider_ui)
{
    // 切换到药品识别界面
    ui_load_scr_animation(guider_ui, &guider_ui->screen_medicine_id_loading, guider_ui->screen_medicine_id_loading_del, &guider_ui->screen_first_del, setup_scr_screen_medicine_id_loading, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
}
void Show_screen_drug2(lv_ui* guider_ui)
{
    // 切换到药品识别界面
    ui_load_scr_animation(guider_ui, &guider_ui->screen_medicine_id2, guider_ui->screen_medicine_id2_del, &guider_ui->screen_medicine_id_loading_del, setup_scr_screen_medicine_id2, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
}