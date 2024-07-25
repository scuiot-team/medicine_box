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



void setup_scr_screen_ChatGPT1(lv_ui *ui)
{
	//Write codes screen_ChatGPT1
	ui->screen_ChatGPT1 = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen_ChatGPT1, 320, 240);
	lv_obj_set_scrollbar_mode(ui->screen_ChatGPT1, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_ChatGPT1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_ChatGPT1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_ChatGPT1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_ChatGPT1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_ChatGPT1_img_back
	ui->screen_ChatGPT1_img_back = lv_img_create(ui->screen_ChatGPT1);
	lv_obj_add_flag(ui->screen_ChatGPT1_img_back, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_ChatGPT1_img_back, &_4_alpha_208x143);
	lv_img_set_pivot(ui->screen_ChatGPT1_img_back, 50,50);
	lv_img_set_angle(ui->screen_ChatGPT1_img_back, 0);
	lv_obj_set_pos(ui->screen_ChatGPT1_img_back, 44, 13);
	lv_obj_set_size(ui->screen_ChatGPT1_img_back, 208, 143);

	//Write style for screen_ChatGPT1_img_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_ChatGPT1_img_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_ChatGPT1_lbl_inf
	ui->screen_ChatGPT1_lbl_inf = lv_label_create(ui->screen_ChatGPT1);
	lv_label_set_text(ui->screen_ChatGPT1_lbl_inf, "ChatGPT");
	lv_label_set_long_mode(ui->screen_ChatGPT1_lbl_inf, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_ChatGPT1_lbl_inf, 100, 170);
	lv_obj_set_size(ui->screen_ChatGPT1_lbl_inf, 131, 40);

	//Write style for screen_ChatGPT1_lbl_inf, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_ChatGPT1_lbl_inf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_ChatGPT1_lbl_inf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_ChatGPT1_lbl_inf, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_ChatGPT1_lbl_inf, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_ChatGPT1_lbl_inf, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_ChatGPT1_lbl_inf, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_ChatGPT1_lbl_inf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_ChatGPT1_lbl_inf, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_ChatGPT1_lbl_inf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_ChatGPT1_lbl_inf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_ChatGPT1_lbl_inf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_ChatGPT1_lbl_inf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_ChatGPT1_lbl_inf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_ChatGPT1_lbl_inf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_ChatGPT1_btn_last
	ui->screen_ChatGPT1_btn_last = lv_btn_create(ui->screen_ChatGPT1);
	ui->screen_ChatGPT1_btn_last_label = lv_label_create(ui->screen_ChatGPT1_btn_last);
	lv_label_set_text(ui->screen_ChatGPT1_btn_last_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->screen_ChatGPT1_btn_last_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_ChatGPT1_btn_last_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_ChatGPT1_btn_last, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_ChatGPT1_btn_last_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_ChatGPT1_btn_last, 2, 111);
	lv_obj_set_size(ui->screen_ChatGPT1_btn_last, 30, 23);

	//Write style for screen_ChatGPT1_btn_last, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_ChatGPT1_btn_last, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_ChatGPT1_btn_last, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_ChatGPT1_btn_last, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_ChatGPT1_btn_last, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_ChatGPT1_btn_last, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_ChatGPT1_btn_last, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_ChatGPT1_btn_last, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_ChatGPT1_btn_last, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_ChatGPT1_btn_next
	ui->screen_ChatGPT1_btn_next = lv_btn_create(ui->screen_ChatGPT1);
	ui->screen_ChatGPT1_btn_next_label = lv_label_create(ui->screen_ChatGPT1_btn_next);
	lv_label_set_text(ui->screen_ChatGPT1_btn_next_label, "" LV_SYMBOL_RIGHT " ");
	lv_label_set_long_mode(ui->screen_ChatGPT1_btn_next_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_ChatGPT1_btn_next_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_ChatGPT1_btn_next, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_ChatGPT1_btn_next_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_ChatGPT1_btn_next, 287, 108);
	lv_obj_set_size(ui->screen_ChatGPT1_btn_next, 37, 25);

	//Write style for screen_ChatGPT1_btn_next, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_ChatGPT1_btn_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_ChatGPT1_btn_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_ChatGPT1_btn_next, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_ChatGPT1_btn_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_ChatGPT1_btn_next, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_ChatGPT1_btn_next, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_ChatGPT1_btn_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_ChatGPT1_btn_next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_ChatGPT1.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_ChatGPT1);

	//Init events for screen.
	events_init_screen_ChatGPT1(ui);
}
