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



void setup_scr_screen_ChatGPT2(lv_ui *ui)
{
	//Write codes screen_ChatGPT2
	ui->screen_ChatGPT2 = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen_ChatGPT2, 320, 240);
	lv_obj_set_scrollbar_mode(ui->screen_ChatGPT2, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_ChatGPT2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_ChatGPT2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_ChatGPT2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_ChatGPT2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_ChatGPT2_img_back
	ui->screen_ChatGPT2_img_back = lv_img_create(ui->screen_ChatGPT2);
	lv_obj_add_flag(ui->screen_ChatGPT2_img_back, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_ChatGPT2_img_back, &_4_alpha_104x73);
	lv_img_set_pivot(ui->screen_ChatGPT2_img_back, 50,50);
	lv_img_set_angle(ui->screen_ChatGPT2_img_back, 0);
	lv_obj_set_pos(ui->screen_ChatGPT2_img_back, 104, 0);
	lv_obj_set_size(ui->screen_ChatGPT2_img_back, 104, 73);

	//Write style for screen_ChatGPT2_img_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_ChatGPT2_img_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_ChatGPT2_btn_back
	ui->screen_ChatGPT2_btn_back = lv_btn_create(ui->screen_ChatGPT2);
	ui->screen_ChatGPT2_btn_back_label = lv_label_create(ui->screen_ChatGPT2_btn_back);
	lv_label_set_text(ui->screen_ChatGPT2_btn_back_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->screen_ChatGPT2_btn_back_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_ChatGPT2_btn_back_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_ChatGPT2_btn_back, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_ChatGPT2_btn_back_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_ChatGPT2_btn_back, 8, 7);
	lv_obj_set_size(ui->screen_ChatGPT2_btn_back, 28, 17);

	//Write style for screen_ChatGPT2_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_ChatGPT2_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_ChatGPT2_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_ChatGPT2_btn_back, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_ChatGPT2_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_ChatGPT2_btn_back, lv_color_hex(0x020202), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_ChatGPT2_btn_back, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_ChatGPT2_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_ChatGPT2_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_ChatGPT2_tileview_1
	ui->screen_ChatGPT2_tileview_1 = lv_tileview_create(ui->screen_ChatGPT2);
	ui->screen_ChatGPT2_tileview_1_tile_1 = lv_tileview_add_tile(ui->screen_ChatGPT2_tileview_1, 0, 0, LV_DIR_RIGHT);
	lv_obj_set_pos(ui->screen_ChatGPT2_tileview_1, 0, 70);
	lv_obj_set_size(ui->screen_ChatGPT2_tileview_1, 319, 170);
	lv_obj_set_scrollbar_mode(ui->screen_ChatGPT2_tileview_1, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_ChatGPT2_tileview_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_ChatGPT2_tileview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_ChatGPT2_tileview_1, lv_color_hex(0xf6f6f6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_ChatGPT2_tileview_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_ChatGPT2_tileview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_ChatGPT2_tileview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_ChatGPT2_tileview_1, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_ChatGPT2_tileview_1, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_ChatGPT2_tileview_1, lv_color_hex(0xeaeff3), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_ChatGPT2_tileview_1, LV_GRAD_DIR_NONE, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_ChatGPT2_tileview_1, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);



	//The custom code of screen_ChatGPT2.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_ChatGPT2);

	//Init events for screen.
	events_init_screen_ChatGPT2(ui);
}
