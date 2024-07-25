/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


#ifndef EVENTS_INIT_H_
#define EVENTS_INIT_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

void events_init(lv_ui *ui);

void events_init_screen_scan(lv_ui *ui);
void events_init_screen_first(lv_ui *ui);
void events_init_screen_information1(lv_ui *ui);
void events_init_screen_information2(lv_ui *ui);
void events_init_screen_weather1(lv_ui *ui);
void events_init_screen_weather_sunny(lv_ui *ui);
void events_init_screen_weather_cloudy(lv_ui *ui);
void events_init_screen_weather_rainy(lv_ui *ui);
void events_init_screen_remind1(lv_ui *ui);
void events_init_screen_remind2(lv_ui *ui);
void events_init_screen_ChatGPT1(lv_ui *ui);
void events_init_screen_ChatGPT2(lv_ui *ui);
void events_init_screen_medicine_id1(lv_ui *ui);
void events_init_screen_medicine_id_up(lv_ui *ui);
void events_init_screen_medicine_id_loading(lv_ui *ui);
void events_init_screen_medicine_id2(lv_ui *ui);
void events_init_screen_measure1(lv_ui *ui);
void events_init_screen_measure_up(lv_ui *ui);
void events_init_screen_measure_loading(lv_ui *ui);
void events_init_screen_measure2(lv_ui *ui);
void events_init_screen_falling(lv_ui *ui);
void events_init_screen_reminding(lv_ui *ui);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
