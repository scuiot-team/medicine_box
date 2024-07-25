/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *screen_scan;
	bool screen_scan_del;
	lv_obj_t *screen_scan_img_1;
	lv_obj_t *screen_scan_label_1;
	lv_obj_t *screen_scan_btn_1;
	lv_obj_t *screen_scan_btn_1_label;
	lv_obj_t *screen_first;
	bool screen_first_del;
	lv_obj_t *screen_first_img_back;
	lv_obj_t *screen_first_dt_cal;
	lv_obj_t *screen_first_btn_last;
	lv_obj_t *screen_first_btn_last_label;
	lv_obj_t *screen_first_btn_next;
	lv_obj_t *screen_first_btn_next_label;
	lv_obj_t *screen_first_lbl_alarm;
	lv_obj_t *screen_first_digital_clock_1;
	lv_obj_t *screen_first_digital_clock_2;
	lv_obj_t *screen_first_btn_1;
	lv_obj_t *screen_first_btn_1_label;
	lv_obj_t *screen_information1;
	bool screen_information1_del;
	lv_obj_t *screen_information1_img_back;
	lv_obj_t *screen_information1_lbl_inf;
	lv_obj_t *screen_information1_btn_last;
	lv_obj_t *screen_information1_btn_last_label;
	lv_obj_t *screen_information1_btn_next;
	lv_obj_t *screen_information1_btn_next_label;
	lv_obj_t *screen_information2;
	bool screen_information2_del;
	lv_obj_t *screen_information2_img_back;
	lv_obj_t *screen_information2_lbl_h;
	lv_obj_t *screen_information2_lbl_h_data;
	lv_obj_t *screen_information2_lbl_w;
	lv_obj_t *screen_information2_lbl_w_data;
	lv_obj_t *screen_information2_lbl_B;
	lv_obj_t *screen_information2_lbl_B_data;
	lv_obj_t *screen_information2_btn_back;
	lv_obj_t *screen_information2_btn_back_label;
	lv_obj_t *screen_weather1;
	bool screen_weather1_del;
	lv_obj_t *screen_weather1_img_back;
	lv_obj_t *screen_weather1_lbl_weather;
	lv_obj_t *screen_weather1_btn_last;
	lv_obj_t *screen_weather1_btn_last_label;
	lv_obj_t *screen_weather1_btn_next;
	lv_obj_t *screen_weather1_btn_next_label;
	lv_obj_t *screen_weather_sunny;
	bool screen_weather_sunny_del;
	lv_obj_t *screen_weather_sunny_img_back;
	lv_obj_t *screen_weather_sunny_tv_inf;
	lv_obj_t *screen_weather_sunny_tv_inf_tab_1;
	lv_obj_t *screen_weather_sunny_tv_inf_tab_2;
	lv_obj_t *screen_weather_sunny_tv_inf_tab_3;
	lv_obj_t *screen_weather_sunny_lbl_type;
	lv_obj_t *screen_weather_sunny_lbl_1;
	lv_obj_t *screen_weather_sunny_lbl_2;
	lv_obj_t *screen_weather_sunny_lbl_temp;
	lv_obj_t *screen_weather_sunny_lbl__wet;
	lv_obj_t *screen_weather_cloudy;
	bool screen_weather_cloudy_del;
	lv_obj_t *screen_weather_cloudy_img_back;
	lv_obj_t *screen_weather_cloudy_tv_inf;
	lv_obj_t *screen_weather_cloudy_tv_inf_tab_1;
	lv_obj_t *screen_weather_cloudy_tv_inf_tab_2;
	lv_obj_t *screen_weather_cloudy_tv_inf_tab_3;
	lv_obj_t *screen_weather_cloudy_lbl_type;
	lv_obj_t *screen_weather_cloudy_lbl_1;
	lv_obj_t *screen_weather_cloudy_lbl_temp;
	lv_obj_t *screen_weather_cloudy_lbl_2;
	lv_obj_t *screen_weather_cloudy_lbl_wet;
	lv_obj_t *screen_weather_cloudy_btn_1;
	lv_obj_t *screen_weather_cloudy_btn_1_label;
	lv_obj_t *screen_weather_rainy;
	bool screen_weather_rainy_del;
	lv_obj_t *screen_weather_rainy_tv_inf;
	lv_obj_t *screen_weather_rainy_tv_inf_tab_1;
	lv_obj_t *screen_weather_rainy_tv_inf_tab_2;
	lv_obj_t *screen_weather_rainy_tv_inf_tab_3;
	lv_obj_t *screen_weather_rainy_img_back;
	lv_obj_t *screen_weather_rainy_lbl_type;
	lv_obj_t *screen_weather_rainy_lbl_1;
	lv_obj_t *screen_weather_rainy_lbl_temp;
	lv_obj_t *screen_weather_rainy_lbl_2;
	lv_obj_t *screen_weather_rainy_lbl_wet;
	lv_obj_t *screen_remind1;
	bool screen_remind1_del;
	lv_obj_t *screen_remind1_img_back;
	lv_obj_t *screen_remind1_lbl_inf;
	lv_obj_t *screen_remind1_btn_last;
	lv_obj_t *screen_remind1_btn_last_label;
	lv_obj_t *screen_remind1_btn_next;
	lv_obj_t *screen_remind1_btn_next_label;
	lv_obj_t *screen_remind2;
	bool screen_remind2_del;
	lv_obj_t *screen_remind2_list_remind;
	lv_obj_t *screen_remind2_list_remind_item0;
	lv_obj_t *screen_remind2_list_remind_item1;
	lv_obj_t *screen_remind2_list_remind_item2;
	lv_obj_t *screen_remind2_list_remind_item3;
	lv_obj_t *screen_remind2_list_remind_item4;
	lv_obj_t *screen_remind2_img_show;
	lv_obj_t *screen_remind2_btn_back;
	lv_obj_t *screen_remind2_btn_back_label;
	lv_obj_t *screen_ChatGPT1;
	bool screen_ChatGPT1_del;
	lv_obj_t *screen_ChatGPT1_img_back;
	lv_obj_t *screen_ChatGPT1_lbl_inf;
	lv_obj_t *screen_ChatGPT1_btn_last;
	lv_obj_t *screen_ChatGPT1_btn_last_label;
	lv_obj_t *screen_ChatGPT1_btn_next;
	lv_obj_t *screen_ChatGPT1_btn_next_label;
	lv_obj_t *screen_ChatGPT2;
	bool screen_ChatGPT2_del;
	lv_obj_t *screen_ChatGPT2_img_back;
	lv_obj_t *screen_ChatGPT2_btn_back;
	lv_obj_t *screen_ChatGPT2_btn_back_label;
	lv_obj_t *screen_ChatGPT2_tileview_1;
	lv_obj_t *screen_ChatGPT2_tileview_1_tile_1;
	lv_obj_t *screen_medicine_id1;
	bool screen_medicine_id1_del;
	lv_obj_t *screen_medicine_id1_img_1;
	lv_obj_t *screen_medicine_id1_label_1;
	lv_obj_t *screen_medicine_id1_btn_last;
	lv_obj_t *screen_medicine_id1_btn_last_label;
	lv_obj_t *screen_medicine_id1_btn_next;
	lv_obj_t *screen_medicine_id1_btn_next_label;
	lv_obj_t *screen_medicine_id_up;
	bool screen_medicine_id_up_del;
	lv_obj_t *screen_medicine_id_up_spangroup_1;
	lv_obj_t *screen_medicine_id_up_btn_1;
	lv_obj_t *screen_medicine_id_up_btn_1_label;
	lv_obj_t *screen_medicine_id_up_btn_back;
	lv_obj_t *screen_medicine_id_up_btn_back_label;
	lv_obj_t *screen_medicine_id_loading;
	bool screen_medicine_id_loading_del;
	lv_obj_t *screen_medicine_id_loading_img_loading;
	lv_obj_t *screen_medicine_id_loading_lbl_loading;
	lv_obj_t *screen_medicine_id_loading_btn_back;
	lv_obj_t *screen_medicine_id_loading_btn_back_label;
	lv_obj_t *screen_medicine_id2;
	bool screen_medicine_id2_del;
	lv_obj_t *screen_medicine_id2_label_1;
	lv_obj_t *screen_medicine_id2_lbl_name;
	lv_obj_t *screen_medicine_id2_lbl_use;
	lv_obj_t *screen_medicine_id2_lbl_func;
	lv_obj_t *screen_medicine_id2_lbl_otc;
	lv_obj_t *screen_medicine_id2_text_name;
	lv_obj_t *screen_medicine_id2_text_use;
	lv_obj_t *screen_medicine_id2_text_func;
	lv_obj_t *screen_medicine_id2_text_otc;
	lv_obj_t *screen_medicine_id2_btn_back;
	lv_obj_t *screen_medicine_id2_btn_back_label;
	lv_obj_t *screen_measure1;
	bool screen_measure1_del;
	lv_obj_t *screen_measure1_img_1;
	lv_obj_t *screen_measure1_label_1;
	lv_obj_t *screen_measure1_btn_1;
	lv_obj_t *screen_measure1_btn_1_label;
	lv_obj_t *screen_measure1_btn_2;
	lv_obj_t *screen_measure1_btn_2_label;
	lv_obj_t *screen_measure_up;
	bool screen_measure_up_del;
	lv_obj_t *screen_measure_up_spangroup_1;
	lv_obj_t *screen_measure_up_btn_1;
	lv_obj_t *screen_measure_up_btn_1_label;
	lv_obj_t *screen_measure_up_btn_back;
	lv_obj_t *screen_measure_up_btn_back_label;
	lv_obj_t *screen_measure_loading;
	bool screen_measure_loading_del;
	lv_obj_t *screen_measure_loading_img_loading;
	lv_obj_t *screen_measure_loading_lbl_loading;
	lv_obj_t *screen_measure_loading_btn_back;
	lv_obj_t *screen_measure_loading_btn_back_label;
	lv_obj_t *screen_measure2;
	bool screen_measure2_del;
	lv_obj_t *screen_measure2_img_1;
	lv_obj_t *screen_measure2_img_2;
	lv_obj_t *screen_measure2_label_1;
	lv_obj_t *screen_measure2_label_2;
	lv_obj_t *screen_measure2_label_3;
	lv_obj_t *screen_measure2_label_4;
	lv_obj_t *screen_measure2_btn_1;
	lv_obj_t *screen_measure2_btn_1_label;
	lv_obj_t *screen_falling;
	bool screen_falling_del;
	lv_obj_t *screen_falling_btn_back;
	lv_obj_t *screen_falling_btn_back_label;
	lv_obj_t *screen_falling_img_1;
	lv_obj_t *screen_reminding;
	bool screen_reminding_del;
	lv_obj_t *screen_reminding_img_1;
	lv_obj_t *screen_reminding_btn_1;
	lv_obj_t *screen_reminding_btn_1_label;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_move_animation(void * var, int32_t duration, int32_t delay, int32_t x_end, int32_t y_end, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_scale_animation(void * var, int32_t duration, int32_t delay, int32_t width, int32_t height, lv_anim_path_cb_t path_cb,
                        uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                        lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_zoom_animation(void * var, int32_t duration, int32_t delay, int32_t zoom, lv_anim_path_cb_t path_cb,
                           uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                           lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void ui_img_rotate_animation(void * var, int32_t duration, int32_t delay, lv_coord_t x, lv_coord_t y, int32_t rotate,
                   lv_anim_path_cb_t path_cb, uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time,
                   uint32_t playback_delay, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);

void init_scr_del_flag(lv_ui *ui);

void setup_ui(void);


extern lv_ui guider_ui;


void setup_scr_screen_scan(lv_ui *ui);
void setup_scr_screen_first(lv_ui *ui);
void setup_scr_screen_information1(lv_ui *ui);
void setup_scr_screen_information2(lv_ui *ui);
void setup_scr_screen_weather1(lv_ui *ui);
void setup_scr_screen_weather_sunny(lv_ui *ui);
void setup_scr_screen_weather_cloudy(lv_ui *ui);
void setup_scr_screen_weather_rainy(lv_ui *ui);
void setup_scr_screen_remind1(lv_ui *ui);
void setup_scr_screen_remind2(lv_ui *ui);
void setup_scr_screen_ChatGPT1(lv_ui *ui);
void setup_scr_screen_ChatGPT2(lv_ui *ui);
void setup_scr_screen_medicine_id1(lv_ui *ui);
void setup_scr_screen_medicine_id_up(lv_ui *ui);
void setup_scr_screen_medicine_id_loading(lv_ui *ui);
void setup_scr_screen_medicine_id2(lv_ui *ui);
void setup_scr_screen_measure1(lv_ui *ui);
void setup_scr_screen_measure_up(lv_ui *ui);
void setup_scr_screen_measure_loading(lv_ui *ui);
void setup_scr_screen_measure2(lv_ui *ui);
void setup_scr_screen_falling(lv_ui *ui);
void setup_scr_screen_reminding(lv_ui *ui);
LV_IMG_DECLARE(_erweima_alpha_186x188);
LV_IMG_DECLARE(_IMG_20240709_133530_edit_570239819833146_alpha_320x240);
LV_IMG_DECLARE(_1_alpha_225x193);
LV_IMG_DECLARE(_Camera_XHS_17205038714831040g00830vi32qs75o505p4d_alpha_320x240);
LV_IMG_DECLARE(_3_alpha_229x177);
LV_IMG_DECLARE(_sunny_alpha_115x94);
LV_IMG_DECLARE(_cloudy_alpha_110x101);
LV_IMG_DECLARE(_rainy_alpha_113x98);
LV_IMG_DECLARE(_5_alpha_256x187);
LV_IMG_DECLARE(_yao_alpha_149x127);
LV_IMG_DECLARE(_4_alpha_208x143);
LV_IMG_DECLARE(_4_alpha_104x73);
LV_IMG_DECLARE(_find_alpha_126x140);
LV_IMG_DECLARE(_2_alpha_234x180);
LV_IMG_DECLARE(_xin1_alpha_62x58);
LV_IMG_DECLARE(_xin2_alpha_66x55);
LV_IMG_DECLARE(_self_alpha_233x214);
LV_IMG_DECLARE(_bell_alpha_184x171);

LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_16)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_montserratMedium_20)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_montserratMedium_35)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_20)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_12)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_25)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_15)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_22)


#ifdef __cplusplus
}
#endif
#endif
