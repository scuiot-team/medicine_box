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



void setup_scr_screen_medicine_id1(lv_ui *ui)
{
	//Write codes screen_medicine_id1
	ui->screen_medicine_id1 = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen_medicine_id1, 320, 240);
	lv_obj_set_scrollbar_mode(ui->screen_medicine_id1, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_medicine_id1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_medicine_id1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_medicine_id1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_medicine_id1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_medicine_id1_img_1
	ui->screen_medicine_id1_img_1 = lv_img_create(ui->screen_medicine_id1);
	lv_obj_add_flag(ui->screen_medicine_id1_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_medicine_id1_img_1, &_find_alpha_126x140);
	lv_img_set_pivot(ui->screen_medicine_id1_img_1, 50,50);
	lv_img_set_angle(ui->screen_medicine_id1_img_1, 0);
	lv_obj_set_pos(ui->screen_medicine_id1_img_1, 94, 26);
	lv_obj_set_size(ui->screen_medicine_id1_img_1, 126, 140);

	//Write style for screen_medicine_id1_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_medicine_id1_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_medicine_id1_label_1
	ui->screen_medicine_id1_label_1 = lv_label_create(ui->screen_medicine_id1);
	lv_label_set_text(ui->screen_medicine_id1_label_1, "药品识别");
	lv_label_set_long_mode(ui->screen_medicine_id1_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_medicine_id1_label_1, 110, 170);
	lv_obj_set_size(ui->screen_medicine_id1_label_1, 100, 32);

	//Write style for screen_medicine_id1_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_medicine_id1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_medicine_id1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_medicine_id1_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_medicine_id1_label_1, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_medicine_id1_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_medicine_id1_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_medicine_id1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_medicine_id1_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_medicine_id1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_medicine_id1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_medicine_id1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_medicine_id1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_medicine_id1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_medicine_id1_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_medicine_id1_btn_last
	ui->screen_medicine_id1_btn_last = lv_btn_create(ui->screen_medicine_id1);
	ui->screen_medicine_id1_btn_last_label = lv_label_create(ui->screen_medicine_id1_btn_last);
	lv_label_set_text(ui->screen_medicine_id1_btn_last_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->screen_medicine_id1_btn_last_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_medicine_id1_btn_last_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_medicine_id1_btn_last, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_medicine_id1_btn_last_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_medicine_id1_btn_last, 2, 111);
	lv_obj_set_size(ui->screen_medicine_id1_btn_last, 30, 23);

	//Write style for screen_medicine_id1_btn_last, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_medicine_id1_btn_last, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_medicine_id1_btn_last, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_medicine_id1_btn_last, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_medicine_id1_btn_last, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_medicine_id1_btn_last, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_medicine_id1_btn_last, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_medicine_id1_btn_last, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_medicine_id1_btn_last, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_medicine_id1_btn_next
	ui->screen_medicine_id1_btn_next = lv_btn_create(ui->screen_medicine_id1);
	ui->screen_medicine_id1_btn_next_label = lv_label_create(ui->screen_medicine_id1_btn_next);
	lv_label_set_text(ui->screen_medicine_id1_btn_next_label, "" LV_SYMBOL_RIGHT " ");
	lv_label_set_long_mode(ui->screen_medicine_id1_btn_next_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_medicine_id1_btn_next_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_medicine_id1_btn_next, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_medicine_id1_btn_next_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_medicine_id1_btn_next, 287, 108);
	lv_obj_set_size(ui->screen_medicine_id1_btn_next, 37, 25);

	//Write style for screen_medicine_id1_btn_next, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_medicine_id1_btn_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_medicine_id1_btn_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_medicine_id1_btn_next, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_medicine_id1_btn_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_medicine_id1_btn_next, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_medicine_id1_btn_next, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_medicine_id1_btn_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_medicine_id1_btn_next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_medicine_id1.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_medicine_id1);

	//Init events for screen.
	events_init_screen_medicine_id1(ui);
}
