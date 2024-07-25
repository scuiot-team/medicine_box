#pragma once
/*
* Copyright 2023 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __CUSTOM_H_
#define __CUSTOM_H_
#ifdef __cplusplus
extern "C" {
#endif

#define MAX_TIME_STR_LEN 128

#include "gui_guider.h"

	void custom_init(lv_ui* ui);
	// void update_medication_times(lv_ui* ui, const char time_list[][MAX_TIME_STR_LEN], int count);// 添加时间到列表screen_remind_list_remind中
	// int time_to_minutes(const char* time_str);// 将时间字符串转换为分钟数
	// void find_next_medication_time(const char time_list[][MAX_TIME_STR_LEN], int count, char* next_time);// 计算最近的时间
	// void update_digital_clock2(lv_ui* ui, const char* next_time);// 更新数字时钟

	// void handle_weather_data(lv_ui* ui);//获取天气数据并显示对应界面

	// void setup_chat_ui(lv_ui* ui);//字体以及布局的设置
	// void add_chat_message(lv_ui* ui, char* message, bool is_user);//添加对话条目函数
	// void check_and_update_chat(lv_ui* ui);//定期检查用户是否进行了语音输入
	// void start_main_loop();//激活主循环函数

	// void update_medicine_info(lv_ui* ui);// 更新药物信息的UI（先更新标签信息再加载界面）
	void Update_measure_inf(lv_ui* ui);
	void Show_screen_falling(lv_ui* ui);
	// void Show_screen_reminding(lv_ui* ui);
	void Show_screen_weather(lv_ui* ui);
	void Show_screen_drug1(lv_ui* ui);
	void Show_screen_drug2(lv_ui* ui);
	void Show_measure1(lv_ui* guider_ui);
	void Show_measure2(lv_ui* guider_ui);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
