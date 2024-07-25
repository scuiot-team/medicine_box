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



void setup_scr_screen_remind2(lv_ui *ui)
{
	//Write codes screen_remind2
	ui->screen_remind2 = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen_remind2, 320, 240);
	lv_obj_set_scrollbar_mode(ui->screen_remind2, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_remind2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_remind2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_remind2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_remind2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_remind2_list_remind
	ui->screen_remind2_list_remind = lv_list_create(ui->screen_remind2);
	ui->screen_remind2_list_remind_item0 = lv_list_add_btn(ui->screen_remind2_list_remind, LV_SYMBOL_BELL, "8:00");
	ui->screen_remind2_list_remind_item1 = lv_list_add_btn(ui->screen_remind2_list_remind, LV_SYMBOL_BELL, "9:30");
	ui->screen_remind2_list_remind_item2 = lv_list_add_btn(ui->screen_remind2_list_remind, LV_SYMBOL_BELL, "10:00");
	ui->screen_remind2_list_remind_item3 = lv_list_add_btn(ui->screen_remind2_list_remind, LV_SYMBOL_BELL, "11:00");
	ui->screen_remind2_list_remind_item4 = lv_list_add_btn(ui->screen_remind2_list_remind, LV_SYMBOL_BELL, "14:30");
	lv_obj_set_pos(ui->screen_remind2_list_remind, 158, 0);
	lv_obj_set_size(ui->screen_remind2_list_remind, 162, 240);
	lv_obj_set_scrollbar_mode(ui->screen_remind2_list_remind, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for &style_screen_remind2_list_remind_main_main_default
	static lv_style_t style_screen_remind2_list_remind_main_main_default;
	ui_init_style(&style_screen_remind2_list_remind_main_main_default);
	
	lv_style_set_pad_top(&style_screen_remind2_list_remind_main_main_default, 5);
	lv_style_set_pad_left(&style_screen_remind2_list_remind_main_main_default, 5);
	lv_style_set_pad_right(&style_screen_remind2_list_remind_main_main_default, 5);
	lv_style_set_pad_bottom(&style_screen_remind2_list_remind_main_main_default, 5);
	lv_style_set_bg_opa(&style_screen_remind2_list_remind_main_main_default, 255);
	lv_style_set_bg_color(&style_screen_remind2_list_remind_main_main_default, lv_color_hex(0xffffff));
	lv_style_set_bg_grad_dir(&style_screen_remind2_list_remind_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_border_width(&style_screen_remind2_list_remind_main_main_default, 1);
	lv_style_set_border_opa(&style_screen_remind2_list_remind_main_main_default, 255);
	lv_style_set_border_color(&style_screen_remind2_list_remind_main_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_screen_remind2_list_remind_main_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_screen_remind2_list_remind_main_main_default, 3);
	lv_style_set_shadow_width(&style_screen_remind2_list_remind_main_main_default, 0);
	lv_obj_add_style(ui->screen_remind2_list_remind, &style_screen_remind2_list_remind_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_screen_remind2_list_remind_main_scrollbar_default
	static lv_style_t style_screen_remind2_list_remind_main_scrollbar_default;
	ui_init_style(&style_screen_remind2_list_remind_main_scrollbar_default);
	
	lv_style_set_radius(&style_screen_remind2_list_remind_main_scrollbar_default, 3);
	lv_style_set_bg_opa(&style_screen_remind2_list_remind_main_scrollbar_default, 255);
	lv_style_set_bg_color(&style_screen_remind2_list_remind_main_scrollbar_default, lv_color_hex(0xffffff));
	lv_style_set_bg_grad_dir(&style_screen_remind2_list_remind_main_scrollbar_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(ui->screen_remind2_list_remind, &style_screen_remind2_list_remind_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_screen_remind2_list_remind_extra_btns_main_default
	static lv_style_t style_screen_remind2_list_remind_extra_btns_main_default;
	ui_init_style(&style_screen_remind2_list_remind_extra_btns_main_default);
	
	lv_style_set_pad_top(&style_screen_remind2_list_remind_extra_btns_main_default, 5);
	lv_style_set_pad_left(&style_screen_remind2_list_remind_extra_btns_main_default, 5);
	lv_style_set_pad_right(&style_screen_remind2_list_remind_extra_btns_main_default, 5);
	lv_style_set_pad_bottom(&style_screen_remind2_list_remind_extra_btns_main_default, 5);
	lv_style_set_border_width(&style_screen_remind2_list_remind_extra_btns_main_default, 0);
	lv_style_set_text_color(&style_screen_remind2_list_remind_extra_btns_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_screen_remind2_list_remind_extra_btns_main_default, &lv_font_montserratMedium_12);
	lv_style_set_text_opa(&style_screen_remind2_list_remind_extra_btns_main_default, 255);
	lv_style_set_radius(&style_screen_remind2_list_remind_extra_btns_main_default, 3);
	lv_style_set_bg_opa(&style_screen_remind2_list_remind_extra_btns_main_default, 255);
	lv_style_set_bg_color(&style_screen_remind2_list_remind_extra_btns_main_default, lv_color_hex(0xffffff));
	lv_style_set_bg_grad_dir(&style_screen_remind2_list_remind_extra_btns_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(ui->screen_remind2_list_remind_item4, &style_screen_remind2_list_remind_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->screen_remind2_list_remind_item3, &style_screen_remind2_list_remind_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->screen_remind2_list_remind_item2, &style_screen_remind2_list_remind_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->screen_remind2_list_remind_item1, &style_screen_remind2_list_remind_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_style(ui->screen_remind2_list_remind_item0, &style_screen_remind2_list_remind_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_screen_remind2_list_remind_extra_texts_main_default
	static lv_style_t style_screen_remind2_list_remind_extra_texts_main_default;
	ui_init_style(&style_screen_remind2_list_remind_extra_texts_main_default);
	
	lv_style_set_pad_top(&style_screen_remind2_list_remind_extra_texts_main_default, 5);
	lv_style_set_pad_left(&style_screen_remind2_list_remind_extra_texts_main_default, 5);
	lv_style_set_pad_right(&style_screen_remind2_list_remind_extra_texts_main_default, 5);
	lv_style_set_pad_bottom(&style_screen_remind2_list_remind_extra_texts_main_default, 5);
	lv_style_set_border_width(&style_screen_remind2_list_remind_extra_texts_main_default, 0);
	lv_style_set_text_color(&style_screen_remind2_list_remind_extra_texts_main_default, lv_color_hex(0x0D3055));
	lv_style_set_text_font(&style_screen_remind2_list_remind_extra_texts_main_default, &lv_font_montserratMedium_12);
	lv_style_set_text_opa(&style_screen_remind2_list_remind_extra_texts_main_default, 255);
	lv_style_set_radius(&style_screen_remind2_list_remind_extra_texts_main_default, 3);
	lv_style_set_bg_opa(&style_screen_remind2_list_remind_extra_texts_main_default, 255);
	lv_style_set_bg_color(&style_screen_remind2_list_remind_extra_texts_main_default, lv_color_hex(0xffffff));
	lv_style_set_bg_grad_dir(&style_screen_remind2_list_remind_extra_texts_main_default, LV_GRAD_DIR_NONE);

	//Write codes screen_remind2_img_show
	ui->screen_remind2_img_show = lv_img_create(ui->screen_remind2);
	lv_obj_add_flag(ui->screen_remind2_img_show, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_remind2_img_show, &_yao_alpha_149x127);
	lv_img_set_pivot(ui->screen_remind2_img_show, 50,50);
	lv_img_set_angle(ui->screen_remind2_img_show, 0);
	lv_obj_set_pos(ui->screen_remind2_img_show, 7, 62);
	lv_obj_set_size(ui->screen_remind2_img_show, 149, 127);

	//Write style for screen_remind2_img_show, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_remind2_img_show, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_remind2_btn_back
	ui->screen_remind2_btn_back = lv_btn_create(ui->screen_remind2);
	ui->screen_remind2_btn_back_label = lv_label_create(ui->screen_remind2_btn_back);
	lv_label_set_text(ui->screen_remind2_btn_back_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->screen_remind2_btn_back_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_remind2_btn_back_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_remind2_btn_back, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_remind2_btn_back_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_remind2_btn_back, 9, 10);
	lv_obj_set_size(ui->screen_remind2_btn_back, 26, 17);

	//Write style for screen_remind2_btn_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_remind2_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_remind2_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_remind2_btn_back, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_remind2_btn_back, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_remind2_btn_back, lv_color_hex(0x0e0c0c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_remind2_btn_back, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_remind2_btn_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_remind2_btn_back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_remind2.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_remind2);

	//Init events for screen.
	events_init_screen_remind2(ui);
}
