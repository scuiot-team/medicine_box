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



void setup_scr_screen_information2(lv_ui *ui)
{
	//Write codes screen_information2
	ui->screen_information2 = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen_information2, 320, 240);
	lv_obj_set_scrollbar_mode(ui->screen_information2, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_information2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_information2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_information2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_information2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_information2_img_back
	ui->screen_information2_img_back = lv_img_create(ui->screen_information2);
	lv_obj_add_flag(ui->screen_information2_img_back, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_information2_img_back, &_Camera_XHS_17205038714831040g00830vi32qs75o505p4d_alpha_320x240);
	lv_img_set_pivot(ui->screen_information2_img_back, 50,50);
	lv_img_set_angle(ui->screen_information2_img_back, 0);
	lv_obj_set_pos(ui->screen_information2_img_back, 0, 0);
	lv_obj_set_size(ui->screen_information2_img_back, 320, 240);

	//Write style for screen_information2_img_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_information2_img_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_information2_lbl_h
	ui->screen_information2_lbl_h = lv_label_create(ui->screen_information2);
	lv_label_set_text(ui->screen_information2_lbl_h, "身高（cm）：");
	lv_label_set_long_mode(ui->screen_information2_lbl_h, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_information2_lbl_h, 39, 74);
	lv_obj_set_size(ui->screen_information2_lbl_h, 132, 22);

	//Write style for screen_information2_lbl_h, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_information2_lbl_h, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_information2_lbl_h, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_information2_lbl_h, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_information2_lbl_h, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_information2_lbl_h, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_information2_lbl_h, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_information2_lbl_h, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_information2_lbl_h, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_information2_lbl_h, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_information2_lbl_h, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_information2_lbl_h, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_information2_lbl_h, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_information2_lbl_h, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_information2_lbl_h, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_information2_lbl_h_data
	ui->screen_information2_lbl_h_data = lv_label_create(ui->screen_information2);
	lv_label_set_text(ui->screen_information2_lbl_h_data, "170");
	lv_label_set_long_mode(ui->screen_information2_lbl_h_data, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_information2_lbl_h_data, 178, 74);
	lv_obj_set_size(ui->screen_information2_lbl_h_data, 100, 32);

	//Write style for screen_information2_lbl_h_data, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_information2_lbl_h_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_information2_lbl_h_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_information2_lbl_h_data, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_information2_lbl_h_data, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_information2_lbl_h_data, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_information2_lbl_h_data, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_information2_lbl_h_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_information2_lbl_h_data, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_information2_lbl_h_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_information2_lbl_h_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_information2_lbl_h_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_information2_lbl_h_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_information2_lbl_h_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_information2_lbl_h_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_information2_lbl_w
	ui->screen_information2_lbl_w = lv_label_create(ui->screen_information2);
	lv_label_set_text(ui->screen_information2_lbl_w, "体重（kg）：");
	lv_label_set_long_mode(ui->screen_information2_lbl_w, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_information2_lbl_w, 30, 118);
	lv_obj_set_size(ui->screen_information2_lbl_w, 146, 29);

	//Write style for screen_information2_lbl_w, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_information2_lbl_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_information2_lbl_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_information2_lbl_w, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_information2_lbl_w, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_information2_lbl_w, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_information2_lbl_w, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_information2_lbl_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_information2_lbl_w, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_information2_lbl_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_information2_lbl_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_information2_lbl_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_information2_lbl_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_information2_lbl_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_information2_lbl_w, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_information2_lbl_w_data
	ui->screen_information2_lbl_w_data = lv_label_create(ui->screen_information2);
	lv_label_set_text(ui->screen_information2_lbl_w_data, "60");
	lv_label_set_long_mode(ui->screen_information2_lbl_w_data, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_information2_lbl_w_data, 187, 118);
	lv_obj_set_size(ui->screen_information2_lbl_w_data, 82, 19);

	//Write style for screen_information2_lbl_w_data, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_information2_lbl_w_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_information2_lbl_w_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_information2_lbl_w_data, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_information2_lbl_w_data, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_information2_lbl_w_data, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_information2_lbl_w_data, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_information2_lbl_w_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_information2_lbl_w_data, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_information2_lbl_w_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_information2_lbl_w_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_information2_lbl_w_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_information2_lbl_w_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_information2_lbl_w_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_information2_lbl_w_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_information2_lbl_B
	ui->screen_information2_lbl_B = lv_label_create(ui->screen_information2);
	lv_label_set_text(ui->screen_information2_lbl_B, "BMI（kg/㎡)：");
	lv_label_set_long_mode(ui->screen_information2_lbl_B, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_information2_lbl_B, 35, 165);
	lv_obj_set_size(ui->screen_information2_lbl_B, 155, 21);

	//Write style for screen_information2_lbl_B, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_information2_lbl_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_information2_lbl_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_information2_lbl_B, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_information2_lbl_B, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_information2_lbl_B, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_information2_lbl_B, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_information2_lbl_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_information2_lbl_B, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_information2_lbl_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_information2_lbl_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_information2_lbl_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_information2_lbl_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_information2_lbl_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_information2_lbl_B, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_information2_lbl_B_data
	ui->screen_information2_lbl_B_data = lv_label_create(ui->screen_information2);
	lv_label_set_text(ui->screen_information2_lbl_B_data, "19");
	lv_label_set_long_mode(ui->screen_information2_lbl_B_data, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_information2_lbl_B_data, 178, 165);
	lv_obj_set_size(ui->screen_information2_lbl_B_data, 100, 32);

	//Write style for screen_information2_lbl_B_data, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_information2_lbl_B_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_information2_lbl_B_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_information2_lbl_B_data, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_information2_lbl_B_data, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_information2_lbl_B_data, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_information2_lbl_B_data, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_information2_lbl_B_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_information2_lbl_B_data, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_information2_lbl_B_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_information2_lbl_B_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_information2_lbl_B_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_information2_lbl_B_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_information2_lbl_B_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_information2_lbl_B_data, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_information2_btn_back
	ui->screen_information2_btn_back = lv_btn_create(ui->screen_information2);
	ui->screen_information2_btn_back_label = lv_label_create(ui->screen_information2_btn_back);
	lv_label_set_text(ui->screen_information2_btn_back_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->screen_information2_btn_back_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_information2_btn_back_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_information2_btn_back, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_information2_btn_back_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_information2_btn_back, 15, 18);
	lv_obj_set_size(ui->screen_information2_btn_back, 38, 23);

	//Write style for screen_information2_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_information2_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_information2_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_information2_btn_back, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_information2_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_information2_btn_back, lv_color_hex(0x090909), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_information2_btn_back, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_information2_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_information2_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_information2.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_information2);

	//Init events for screen.
	events_init_screen_information2(ui);
}
