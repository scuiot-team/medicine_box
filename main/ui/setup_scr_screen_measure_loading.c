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



void setup_scr_screen_measure_loading(lv_ui *ui)
{
	//Write codes screen_measure_loading
	ui->screen_measure_loading = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen_measure_loading, 320, 240);
	lv_obj_set_scrollbar_mode(ui->screen_measure_loading, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_measure_loading, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_measure_loading, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_measure_loading, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_measure_loading, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_measure_loading_img_loading
	ui->screen_measure_loading_img_loading = lv_spinner_create(ui->screen_measure_loading, 2000, 60);
	lv_obj_set_pos(ui->screen_measure_loading_img_loading, 124, 121);
	lv_obj_set_size(ui->screen_measure_loading_img_loading, 73, 69);

	//Write style for screen_measure_loading_img_loading, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->screen_measure_loading_img_loading, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_measure_loading_img_loading, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_measure_loading_img_loading, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_measure_loading_img_loading, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_measure_loading_img_loading, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_measure_loading_img_loading, lv_color_hex(0xeeeef6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_measure_loading_img_loading, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_width(ui->screen_measure_loading_img_loading, 12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->screen_measure_loading_img_loading, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->screen_measure_loading_img_loading, lv_color_hex(0xd5d6de), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_measure_loading_img_loading, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_measure_loading_img_loading, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->screen_measure_loading_img_loading, 12, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->screen_measure_loading_img_loading, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->screen_measure_loading_img_loading, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes screen_measure_loading_lbl_loading
	ui->screen_measure_loading_lbl_loading = lv_spangroup_create(ui->screen_measure_loading);
	lv_spangroup_set_align(ui->screen_measure_loading_lbl_loading, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_measure_loading_lbl_loading, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_measure_loading_lbl_loading, LV_SPAN_MODE_BREAK);
	//create spans
	lv_span_t *screen_measure_loading_lbl_loading_span;
	screen_measure_loading_lbl_loading_span = lv_spangroup_new_span(ui->screen_measure_loading_lbl_loading);
	lv_span_set_text(screen_measure_loading_lbl_loading_span, "正在测量请稍后……");
	lv_style_set_text_color(&screen_measure_loading_lbl_loading_span->style, lv_color_hex(0x000000));
	lv_style_set_text_decor(&screen_measure_loading_lbl_loading_span->style, LV_TEXT_DECOR_NONE);
	lv_style_set_text_font(&screen_measure_loading_lbl_loading_span->style, &lv_font_SourceHanSerifSC_Regular_25);
	lv_obj_set_pos(ui->screen_measure_loading_lbl_loading, 55, 64);
	lv_obj_set_size(ui->screen_measure_loading_lbl_loading, 228, 26);

	//Write style state: LV_STATE_DEFAULT for &style_screen_measure_loading_lbl_loading_main_main_default
	static lv_style_t style_screen_measure_loading_lbl_loading_main_main_default;
	ui_init_style(&style_screen_measure_loading_lbl_loading_main_main_default);
	
	lv_style_set_border_width(&style_screen_measure_loading_lbl_loading_main_main_default, 0);
	lv_style_set_radius(&style_screen_measure_loading_lbl_loading_main_main_default, 0);
	lv_style_set_bg_opa(&style_screen_measure_loading_lbl_loading_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_measure_loading_lbl_loading_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_measure_loading_lbl_loading_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_measure_loading_lbl_loading_main_main_default, 0);
	lv_style_set_pad_left(&style_screen_measure_loading_lbl_loading_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_measure_loading_lbl_loading_main_main_default, 0);
	lv_obj_add_style(ui->screen_measure_loading_lbl_loading, &style_screen_measure_loading_lbl_loading_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_spangroup_refr_mode(ui->screen_measure_loading_lbl_loading);

	//Write codes screen_measure_loading_btn_back
	ui->screen_measure_loading_btn_back = lv_btn_create(ui->screen_measure_loading);
	ui->screen_measure_loading_btn_back_label = lv_label_create(ui->screen_measure_loading_btn_back);
	lv_label_set_text(ui->screen_measure_loading_btn_back_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->screen_measure_loading_btn_back_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_measure_loading_btn_back_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_measure_loading_btn_back, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_measure_loading_btn_back_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_measure_loading_btn_back, 8, 7);
	lv_obj_set_size(ui->screen_measure_loading_btn_back, 28, 17);

	//Write style for screen_measure_loading_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_measure_loading_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_measure_loading_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_measure_loading_btn_back, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_measure_loading_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_measure_loading_btn_back, lv_color_hex(0x020202), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_measure_loading_btn_back, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_measure_loading_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_measure_loading_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_measure_loading.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_measure_loading);

	//Init events for screen.
	events_init_screen_measure_loading(ui);
}
