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



void setup_scr_screen_falling(lv_ui *ui)
{
	//Write codes screen_falling
	ui->screen_falling = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen_falling, 320, 240);
	lv_obj_set_scrollbar_mode(ui->screen_falling, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_falling, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_falling, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_falling, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_falling, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_falling_btn_back
	ui->screen_falling_btn_back = lv_btn_create(ui->screen_falling);
	ui->screen_falling_btn_back_label = lv_label_create(ui->screen_falling_btn_back);
	lv_label_set_text(ui->screen_falling_btn_back_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->screen_falling_btn_back_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_falling_btn_back_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_falling_btn_back, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_falling_btn_back_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_falling_btn_back, 8, 7);
	lv_obj_set_size(ui->screen_falling_btn_back, 28, 17);

	//Write style for screen_falling_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_falling_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_falling_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_falling_btn_back, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_falling_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_falling_btn_back, lv_color_hex(0x020202), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_falling_btn_back, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_falling_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_falling_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_falling_img_1
	ui->screen_falling_img_1 = lv_img_create(ui->screen_falling);
	lv_obj_add_flag(ui->screen_falling_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_falling_img_1, &_self_alpha_233x214);
	lv_img_set_pivot(ui->screen_falling_img_1, 50,50);
	lv_img_set_angle(ui->screen_falling_img_1, 0);
	lv_obj_set_pos(ui->screen_falling_img_1, 50, 17);
	lv_obj_set_size(ui->screen_falling_img_1, 233, 214);

	//Write style for screen_falling_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_falling_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_falling.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_falling);

	//Init events for screen.
	events_init_screen_falling(ui);
}
