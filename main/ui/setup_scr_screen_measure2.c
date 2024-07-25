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



void setup_scr_screen_measure2(lv_ui *ui)
{
	//Write codes screen_measure2
	ui->screen_measure2 = lv_obj_create(NULL);
	lv_obj_set_size(ui->screen_measure2, 320, 240);
	lv_obj_set_scrollbar_mode(ui->screen_measure2, LV_SCROLLBAR_MODE_OFF);

	//Write style for screen_measure2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_measure2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_measure2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_measure2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_measure2_img_1
	ui->screen_measure2_img_1 = lv_img_create(ui->screen_measure2);
	lv_obj_add_flag(ui->screen_measure2_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_measure2_img_1, &_xin1_alpha_62x58);
	lv_img_set_pivot(ui->screen_measure2_img_1, 50,50);
	lv_img_set_angle(ui->screen_measure2_img_1, 0);
	lv_obj_set_pos(ui->screen_measure2_img_1, 14, 45);
	lv_obj_set_size(ui->screen_measure2_img_1, 62, 58);

	//Write style for screen_measure2_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_measure2_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_measure2_img_2
	ui->screen_measure2_img_2 = lv_img_create(ui->screen_measure2);
	lv_obj_add_flag(ui->screen_measure2_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_measure2_img_2, &_xin2_alpha_66x55);
	lv_img_set_pivot(ui->screen_measure2_img_2, 50,50);
	lv_img_set_angle(ui->screen_measure2_img_2, 0);
	lv_obj_set_pos(ui->screen_measure2_img_2, 12, 132);
	lv_obj_set_size(ui->screen_measure2_img_2, 66, 55);

	//Write style for screen_measure2_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->screen_measure2_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_measure2_label_1
	ui->screen_measure2_label_1 = lv_label_create(ui->screen_measure2);
	lv_label_set_text(ui->screen_measure2_label_1, "心率值：");
	lv_label_set_long_mode(ui->screen_measure2_label_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_measure2_label_1, 87, 63);
	lv_obj_set_size(ui->screen_measure2_label_1, 86, 22);

	//Write style for screen_measure2_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_measure2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_measure2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_measure2_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_measure2_label_1, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_measure2_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_measure2_label_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_measure2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_measure2_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_measure2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_measure2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_measure2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_measure2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_measure2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_measure2_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_measure2_label_2
	ui->screen_measure2_label_2 = lv_label_create(ui->screen_measure2);
	lv_label_set_text(ui->screen_measure2_label_2, "血氧饱和度：");
	lv_label_set_long_mode(ui->screen_measure2_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_measure2_label_2, 84, 149);
	lv_obj_set_size(ui->screen_measure2_label_2, 109, 20);

	//Write style for screen_measure2_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_measure2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_measure2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_measure2_label_2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_measure2_label_2, &lv_font_SourceHanSerifSC_Regular_16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_measure2_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_measure2_label_2, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_measure2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_measure2_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_measure2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_measure2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_measure2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_measure2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_measure2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_measure2_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_measure2_label_3
	ui->screen_measure2_label_3 = lv_label_create(ui->screen_measure2);
	lv_label_set_text(ui->screen_measure2_label_3, "95");
	lv_label_set_long_mode(ui->screen_measure2_label_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_measure2_label_3, 168, 58);
	lv_obj_set_size(ui->screen_measure2_label_3, 126, 33);

	//Write style for screen_measure2_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_measure2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_measure2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_measure2_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_measure2_label_3, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_measure2_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_measure2_label_3, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_measure2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_measure2_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_measure2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_measure2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_measure2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_measure2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_measure2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_measure2_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_measure2_label_4
	ui->screen_measure2_label_4 = lv_label_create(ui->screen_measure2);
	lv_label_set_text(ui->screen_measure2_label_4, "97%");
	lv_label_set_long_mode(ui->screen_measure2_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->screen_measure2_label_4, 191, 143);
	lv_obj_set_size(ui->screen_measure2_label_4, 91, 31);

	//Write style for screen_measure2_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->screen_measure2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_measure2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_measure2_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_measure2_label_4, &lv_font_SourceHanSerifSC_Regular_22, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_measure2_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_measure2_label_4, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_measure2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_measure2_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_measure2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_measure2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_measure2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_measure2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_measure2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_measure2_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_measure2_btn_1
	ui->screen_measure2_btn_1 = lv_btn_create(ui->screen_measure2);
	ui->screen_measure2_btn_1_label = lv_label_create(ui->screen_measure2_btn_1);
	lv_label_set_text(ui->screen_measure2_btn_1_label, "" LV_SYMBOL_LEFT " ");
	lv_label_set_long_mode(ui->screen_measure2_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->screen_measure2_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->screen_measure2_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->screen_measure2_btn_1_label, LV_PCT(100));
	lv_obj_set_pos(ui->screen_measure2_btn_1, 8, 7);
	lv_obj_set_size(ui->screen_measure2_btn_1, 28, 17);

	//Write style for screen_measure2_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->screen_measure2_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_measure2_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->screen_measure2_btn_1, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_measure2_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_measure2_btn_1, lv_color_hex(0x020202), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_measure2_btn_1, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->screen_measure2_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_measure2_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of screen_measure2.
	

	//Update current screen layout.
	lv_obj_update_layout(ui->screen_measure2);

	//Init events for screen.
	events_init_screen_measure2(ui);
}
