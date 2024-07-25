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



void setup_scr_screen_weather_cloudy(lv_ui *ui)
{
	//Write codes screen_weather_cloudy
	ui->screen_weather_cloudy = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen_weather_cloudy, 320, 240);
	lv_obj_set_scrollbar_mode(ui->screen_weather_cloudy, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_weather_cloudy, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_weather_cloudy, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_weather_cloudy, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_weather_cloudy, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_weather_cloudy_img_back
	ui->screen_weather_cloudy_img_back = lv_img_create(ui->screen_weather_cloudy);
	lv_obj_add_flag(ui->screen_weather_cloudy_img_back, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_weather_cloudy_img_back, &_cloudy_alpha_110x101);
	lv_img_set_pivot(ui->screen_weather_cloudy_img_back, 50,50);
	lv_img_set_angle(ui->screen_weather_cloudy_img_back, 0);
	lv_obj_set_pos(ui->screen_weather_cloudy_img_back, -1, 0);
	lv_obj_set_size(ui->screen_weather_cloudy_img_back, 110, 101);

	//Write style for screen_weather_cloudy_img_back, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_weather_cloudy_img_back, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_weather_cloudy_tv_inf
	ui->screen_weather_cloudy_tv_inf = lv_tabview_create(ui->screen_weather_cloudy, LV_DIR_TOP, 50);
	lv_obj_set_pos(ui->screen_weather_cloudy_tv_inf, -1, 97);
	lv_obj_set_size(ui->screen_weather_cloudy_tv_inf, 321, 142);
	lv_obj_set_scrollbar_mode(ui->screen_weather_cloudy_tv_inf, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_weather_cloudy_tv_inf, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_weather_cloudy_tv_inf, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_weather_cloudy_tv_inf, lv_color_hex(0xeaeff3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_weather_cloudy_tv_inf, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_weather_cloudy_tv_inf, lv_color_hex(0x4d4d4d), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_weather_cloudy_tv_inf, &lv_font_SourceHanSerifSC_Regular_12, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_weather_cloudy_tv_inf, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_weather_cloudy_tv_inf, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_weather_cloudy_tv_inf, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_weather_cloudy_tv_inf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_weather_cloudy_tv_inf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_weather_cloudy_tv_inf, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_screen_weather_cloudy_tv_inf_extra_btnm_main_default
	static lv_style_t style_screen_weather_cloudy_tv_inf_extra_btnm_main_default;
	ui_init_style(&style_screen_weather_cloudy_tv_inf_extra_btnm_main_default);
	
	lv_style_set_bg_opa(&style_screen_weather_cloudy_tv_inf_extra_btnm_main_default, 255);
	lv_style_set_bg_color(&style_screen_weather_cloudy_tv_inf_extra_btnm_main_default, lv_color_hex(0xffffff));
	lv_style_set_bg_grad_dir(&style_screen_weather_cloudy_tv_inf_extra_btnm_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_border_width(&style_screen_weather_cloudy_tv_inf_extra_btnm_main_default, 0);
	lv_style_set_radius(&style_screen_weather_cloudy_tv_inf_extra_btnm_main_default, 0);
	lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_weather_cloudy_tv_inf), &style_screen_weather_cloudy_tv_inf_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_screen_weather_cloudy_tv_inf_extra_btnm_items_default
	static lv_style_t style_screen_weather_cloudy_tv_inf_extra_btnm_items_default;
	ui_init_style(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_default);
	
	lv_style_set_text_color(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_default, lv_color_hex(0x4d4d4d));
	lv_style_set_text_font(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_default, &lv_font_montserratMedium_12);
	lv_style_set_text_opa(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_default, 255);
	lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_weather_cloudy_tv_inf), &style_screen_weather_cloudy_tv_inf_extra_btnm_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_CHECKED for &style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked
	static lv_style_t style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked;
	ui_init_style(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked);
	
	lv_style_set_text_color(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked, lv_color_hex(0x2195f6));
	lv_style_set_text_font(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked, &lv_font_montserratMedium_12);
	lv_style_set_text_opa(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked, 255);
	lv_style_set_border_width(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked, 4);
	lv_style_set_border_opa(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked, 255);
	lv_style_set_border_color(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked, lv_color_hex(0x2195f6));
	lv_style_set_border_side(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
	lv_style_set_radius(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked, 0);
	lv_style_set_bg_opa(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked, 60);
	lv_style_set_bg_color(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked, lv_color_hex(0x2195f6));
	lv_style_set_bg_grad_dir(&style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_weather_cloudy_tv_inf), &style_screen_weather_cloudy_tv_inf_extra_btnm_items_checked, LV_PART_ITEMS|LV_STATE_CHECKED);

	//Write codes Clothes
	ui->screen_weather_cloudy_tv_inf_tab_1 = lv_tabview_add_tab(ui->screen_weather_cloudy_tv_inf,"Clothes");
	lv_obj_t * screen_weather_cloudy_tv_inf_tab_1_label = lv_label_create(ui->screen_weather_cloudy_tv_inf_tab_1);
	lv_label_set_text(screen_weather_cloudy_tv_inf_tab_1_label, "贴心提示：根据温度选择适当的衣物，带上一\n件轻便的外套以防气温变化。");

	//Write codes Going
	ui->screen_weather_cloudy_tv_inf_tab_2 = lv_tabview_add_tab(ui->screen_weather_cloudy_tv_inf,"Going");
	lv_obj_t * screen_weather_cloudy_tv_inf_tab_2_label = lv_label_create(ui->screen_weather_cloudy_tv_inf_tab_2);
	lv_label_set_text(screen_weather_cloudy_tv_inf_tab_2_label, "贴心提示：适合户外活动，但注意查看天气预\n报以防突然变化。");

	//Write codes Health
	ui->screen_weather_cloudy_tv_inf_tab_3 = lv_tabview_add_tab(ui->screen_weather_cloudy_tv_inf,"Health");
	lv_obj_t * screen_weather_cloudy_tv_inf_tab_3_label = lv_label_create(ui->screen_weather_cloudy_tv_inf_tab_3);
	lv_label_set_text(screen_weather_cloudy_tv_inf_tab_3_label, "贴心提示：注意气温变化，适时增减衣物，防\n止感冒。\n");

	//Write codes screen_weather_cloudy_lbl_type
	ui->screen_weather_cloudy_lbl_type = lv_label_create(ui->screen_weather_cloudy);
	lv_label_set_text(ui->screen_weather_cloudy_lbl_type, "多云");
	lv_label_set_long_mode(ui->screen_weather_cloudy_lbl_type, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_weather_cloudy_lbl_type, 125, 20);
	lv_obj_set_size(ui->screen_weather_cloudy_lbl_type, 94, 20);

	//Write style for screen_weather_cloudy_lbl_type, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_weather_cloudy_lbl_type, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_weather_cloudy_lbl_type, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_weather_cloudy_lbl_type, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_weather_cloudy_lbl_type, &lv_font_SourceHanSerifSC_Regular_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_weather_cloudy_lbl_type, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_weather_cloudy_lbl_type, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_weather_cloudy_lbl_type, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_weather_cloudy_lbl_type, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_weather_cloudy_lbl_type, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_weather_cloudy_lbl_type, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_weather_cloudy_lbl_type, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_weather_cloudy_lbl_type, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_weather_cloudy_lbl_type, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_weather_cloudy_lbl_type, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_weather_cloudy_lbl_1
	ui->screen_weather_cloudy_lbl_1 = lv_label_create(ui->screen_weather_cloudy);
	lv_label_set_text(ui->screen_weather_cloudy_lbl_1, "气温:");
	lv_label_set_long_mode(ui->screen_weather_cloudy_lbl_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_weather_cloudy_lbl_1, 124, 53);
	lv_obj_set_size(ui->screen_weather_cloudy_lbl_1, 54, 22);

	//Write style for screen_weather_cloudy_lbl_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_weather_cloudy_lbl_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_weather_cloudy_lbl_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_weather_cloudy_lbl_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_weather_cloudy_lbl_1, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_weather_cloudy_lbl_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_weather_cloudy_lbl_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_weather_cloudy_lbl_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_weather_cloudy_lbl_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_weather_cloudy_lbl_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_weather_cloudy_lbl_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_weather_cloudy_lbl_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_weather_cloudy_lbl_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_weather_cloudy_lbl_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_weather_cloudy_lbl_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_weather_cloudy_lbl_temp
	ui->screen_weather_cloudy_lbl_temp = lv_label_create(ui->screen_weather_cloudy);
	lv_label_set_text(ui->screen_weather_cloudy_lbl_temp, "26℃");
	lv_label_set_long_mode(ui->screen_weather_cloudy_lbl_temp, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_weather_cloudy_lbl_temp, 169, 53);
	lv_obj_set_size(ui->screen_weather_cloudy_lbl_temp, 54, 22);

	//Write style for screen_weather_cloudy_lbl_temp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_weather_cloudy_lbl_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_weather_cloudy_lbl_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_weather_cloudy_lbl_temp, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_weather_cloudy_lbl_temp, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_weather_cloudy_lbl_temp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_weather_cloudy_lbl_temp, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_weather_cloudy_lbl_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_weather_cloudy_lbl_temp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_weather_cloudy_lbl_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_weather_cloudy_lbl_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_weather_cloudy_lbl_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_weather_cloudy_lbl_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_weather_cloudy_lbl_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_weather_cloudy_lbl_temp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_weather_cloudy_lbl_2
	ui->screen_weather_cloudy_lbl_2 = lv_label_create(ui->screen_weather_cloudy);
	lv_label_set_text(ui->screen_weather_cloudy_lbl_2, "湿度:");
	lv_label_set_long_mode(ui->screen_weather_cloudy_lbl_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_weather_cloudy_lbl_2, 223, 53);
	lv_obj_set_size(ui->screen_weather_cloudy_lbl_2, 54, 22);

	//Write style for screen_weather_cloudy_lbl_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_weather_cloudy_lbl_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_weather_cloudy_lbl_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_weather_cloudy_lbl_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_weather_cloudy_lbl_2, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_weather_cloudy_lbl_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_weather_cloudy_lbl_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_weather_cloudy_lbl_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_weather_cloudy_lbl_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_weather_cloudy_lbl_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_weather_cloudy_lbl_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_weather_cloudy_lbl_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_weather_cloudy_lbl_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_weather_cloudy_lbl_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_weather_cloudy_lbl_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_weather_cloudy_lbl_wet
	ui->screen_weather_cloudy_lbl_wet = lv_label_create(ui->screen_weather_cloudy);
	lv_label_set_text(ui->screen_weather_cloudy_lbl_wet, "86%");
	lv_label_set_long_mode(ui->screen_weather_cloudy_lbl_wet, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_weather_cloudy_lbl_wet, 270, 53);
	lv_obj_set_size(ui->screen_weather_cloudy_lbl_wet, 54, 22);

	//Write style for screen_weather_cloudy_lbl_wet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_weather_cloudy_lbl_wet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_weather_cloudy_lbl_wet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_weather_cloudy_lbl_wet, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_weather_cloudy_lbl_wet, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_weather_cloudy_lbl_wet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_weather_cloudy_lbl_wet, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_weather_cloudy_lbl_wet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_weather_cloudy_lbl_wet, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_weather_cloudy_lbl_wet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_weather_cloudy_lbl_wet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_weather_cloudy_lbl_wet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_weather_cloudy_lbl_wet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_weather_cloudy_lbl_wet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_weather_cloudy_lbl_wet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_weather_cloudy_btn_1
	ui->screen_weather_cloudy_btn_1 = lv_btn_create(ui->screen_weather_cloudy);
	ui->screen_weather_cloudy_btn_1_label = lv_label_create(ui->screen_weather_cloudy_btn_1);
	lv_label_set_text(ui->screen_weather_cloudy_btn_1_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->screen_weather_cloudy_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_weather_cloudy_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_weather_cloudy_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_weather_cloudy_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_weather_cloudy_btn_1, 8, 7);
	lv_obj_set_size(ui->screen_weather_cloudy_btn_1, 28, 17);

	//Write style for screen_weather_cloudy_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_weather_cloudy_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_weather_cloudy_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_weather_cloudy_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_weather_cloudy_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_weather_cloudy_btn_1, lv_color_hex(0x020202), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_weather_cloudy_btn_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_weather_cloudy_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_weather_cloudy_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_weather_cloudy.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_weather_cloudy);

	//Init events for screen.
	events_init_screen_weather_cloudy(ui);
}
