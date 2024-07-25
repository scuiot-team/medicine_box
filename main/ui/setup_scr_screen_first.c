/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen_first(lv_ui *ui)
{
	//Write codes screen_first
	ui->screen_first = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen_first, 320, 240);
	lv_obj_set_scrollbar_mode(ui->screen_first, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_first, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_first, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_first_img_back
	ui->screen_first_img_back = lv_img_create(ui->screen_first);
	lv_obj_add_flag(ui->screen_first_img_back, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_first_img_back, &_IMG_20240709_133530_edit_570239819833146_alpha_320x240);
	lv_img_set_pivot(ui->screen_first_img_back, 50,50);
	lv_img_set_angle(ui->screen_first_img_back, 0);
	lv_obj_set_pos(ui->screen_first_img_back, 0, 0);
	lv_obj_set_size(ui->screen_first_img_back, 320, 240);

	//Write style for screen_first_img_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_first_img_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_first_dt_cal
	ui->screen_first_dt_cal = lv_label_create(ui->screen_first);
	lv_label_set_text(ui->screen_first_dt_cal, "2023/07/31");
	lv_obj_set_style_text_align(ui->screen_first_dt_cal, LV_TEXT_ALIGN_CENTER, 0);
	lv_obj_add_flag(ui->screen_first_dt_cal, LV_OBJ_FLAG_CLICKABLE);
	lv_obj_add_event_cb(ui->screen_first_dt_cal, screen_first_dt_cal_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_set_pos(ui->screen_first_dt_cal, 97, 110);
	lv_obj_set_size(ui->screen_first_dt_cal, 120, 20);

	//Write style for screen_first_dt_cal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->screen_first_dt_cal, lv_color_hex(0x020202), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_first_dt_cal, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_first_dt_cal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_first_dt_cal, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_first_dt_cal, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_first_dt_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_first_dt_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_first_dt_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_first_dt_cal, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_first_dt_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_first_dt_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_first_dt_cal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_first_btn_last
	ui->screen_first_btn_last = lv_btn_create(ui->screen_first);
	ui->screen_first_btn_last_label = lv_label_create(ui->screen_first_btn_last);
	lv_label_set_text(ui->screen_first_btn_last_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->screen_first_btn_last_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_first_btn_last_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_first_btn_last, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_first_btn_last_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_first_btn_last, 4, 112);
	lv_obj_set_size(ui->screen_first_btn_last, 25, 17);

	//Write style for screen_first_btn_last, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_first_btn_last, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_first_btn_last, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_first_btn_last, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_first_btn_last, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_first_btn_last, lv_color_hex(0x111111), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_first_btn_last, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_first_btn_last, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_first_btn_last, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_first_btn_next
	ui->screen_first_btn_next = lv_btn_create(ui->screen_first);
	ui->screen_first_btn_next_label = lv_label_create(ui->screen_first_btn_next);
	lv_label_set_text(ui->screen_first_btn_next_label, "" LV_SYMBOL_RIGHT " ");
	lv_label_set_long_mode(ui->screen_first_btn_next_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_first_btn_next_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_first_btn_next, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_first_btn_next_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_first_btn_next, 290, 108);
	lv_obj_set_size(ui->screen_first_btn_next, 37, 25);

	//Write style for screen_first_btn_next, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_first_btn_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_first_btn_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_first_btn_next, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_first_btn_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_first_btn_next, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_first_btn_next, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_first_btn_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_first_btn_next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_first_lbl_alarm
	ui->screen_first_lbl_alarm = lv_label_create(ui->screen_first);
	lv_label_set_text(ui->screen_first_lbl_alarm, "下次服药时间：");
	lv_label_set_long_mode(ui->screen_first_lbl_alarm, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_first_lbl_alarm, 34, 146);
	lv_obj_set_size(ui->screen_first_lbl_alarm, 130, 19);

	//Write style for screen_first_lbl_alarm, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_first_lbl_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_first_lbl_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_first_lbl_alarm, lv_color_hex(0x0b0b0b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_first_lbl_alarm, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_first_lbl_alarm, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_first_lbl_alarm, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_first_lbl_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_first_lbl_alarm, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_first_lbl_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_first_lbl_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_first_lbl_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_first_lbl_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_first_lbl_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_first_lbl_alarm, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_first_digital_clock_1
	ui->screen_first_digital_clock_1 = lv_label_create(ui->screen_first);
	lv_label_set_text(ui->screen_first_digital_clock_1, "11:25");
	lv_label_set_long_mode(ui->screen_first_digital_clock_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_first_digital_clock_1, 80, 61);
	lv_obj_set_size(ui->screen_first_digital_clock_1, 160, 37);

	//Write style for screen_first_digital_clock_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_first_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_first_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_first_digital_clock_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_first_digital_clock_1, &lv_font_montserratMedium_35, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_first_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_first_digital_clock_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_first_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_first_digital_clock_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_first_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_first_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_first_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_first_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_first_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_first_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_first_digital_clock_2
	ui->screen_first_digital_clock_2 = lv_label_create(ui->screen_first);
	lv_label_set_text(ui->screen_first_digital_clock_2, "11:25\n");
	lv_label_set_long_mode(ui->screen_first_digital_clock_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_first_digital_clock_2, 174, 145);
	lv_obj_set_size(ui->screen_first_digital_clock_2, 116, 20);

	//Write style for screen_first_digital_clock_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_first_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_first_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_first_digital_clock_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_first_digital_clock_2, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_first_digital_clock_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_first_digital_clock_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_first_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_first_digital_clock_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_first_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_first_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_first_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_first_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_first_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_first_digital_clock_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_first_btn_1
	ui->screen_first_btn_1 = lv_btn_create(ui->screen_first);
	ui->screen_first_btn_1_label = lv_label_create(ui->screen_first_btn_1);
	lv_label_set_text(ui->screen_first_btn_1_label, "设备绑定");
	lv_label_set_long_mode(ui->screen_first_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_first_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_first_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_first_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_first_btn_1, 4, 10);
	lv_obj_set_size(ui->screen_first_btn_1, 76, 29);

	//Write style for screen_first_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_first_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_first_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_first_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_first_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_first_btn_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_first_btn_1, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_first_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_first_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_first.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_first);

	//Init events for screen.
	events_init_screen_first(ui);
}
