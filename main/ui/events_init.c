/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void screen_scan_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_first, guider_ui.screen_first_del, &guider_ui.screen_scan_del, setup_scr_screen_first, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_scan(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_scan_btn_1, screen_scan_btn_1_event_handler, LV_EVENT_ALL, ui);
}
static void screen_first_btn_last_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_measure1, guider_ui.screen_measure1_del, &guider_ui.screen_first_del, setup_scr_screen_measure1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_first_btn_next_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_information1, guider_ui.screen_information1_del, &guider_ui.screen_first_del, setup_scr_screen_information1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_first_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_scan, guider_ui.screen_scan_del, &guider_ui.screen_first_del, setup_scr_screen_scan, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_first(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_first_btn_last, screen_first_btn_last_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_first_btn_next, screen_first_btn_next_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_first_btn_1, screen_first_btn_1_event_handler, LV_EVENT_ALL, ui);
}
static void screen_information1_img_back_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_information2, guider_ui.screen_information2_del, &guider_ui.screen_information1_del, setup_scr_screen_information2, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_information1_btn_last_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_first, guider_ui.screen_first_del, &guider_ui.screen_information1_del, setup_scr_screen_first, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_information1_btn_next_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_weather1, guider_ui.screen_weather1_del, &guider_ui.screen_information1_del, setup_scr_screen_weather1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_information1(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_information1_img_back, screen_information1_img_back_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_information1_btn_last, screen_information1_btn_last_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_information1_btn_next, screen_information1_btn_next_event_handler, LV_EVENT_ALL, ui);
}
static void screen_information2_btn_back_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_information1, guider_ui.screen_information1_del, &guider_ui.screen_information2_del, setup_scr_screen_information1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_information2(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_information2_btn_back, screen_information2_btn_back_event_handler, LV_EVENT_ALL, ui);
}
static void screen_weather1_img_back_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_weather_cloudy, guider_ui.screen_weather_cloudy_del, &guider_ui.screen_weather1_del, setup_scr_screen_weather_cloudy, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_weather1_btn_last_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_information1, guider_ui.screen_information1_del, &guider_ui.screen_weather1_del, setup_scr_screen_information1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_weather1_btn_next_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_remind1, guider_ui.screen_remind1_del, &guider_ui.screen_weather1_del, setup_scr_screen_remind1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_weather1(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_weather1_img_back, screen_weather1_img_back_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_weather1_btn_last, screen_weather1_btn_last_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_weather1_btn_next, screen_weather1_btn_next_event_handler, LV_EVENT_ALL, ui);
}
static void screen_weather_cloudy_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_weather1, guider_ui.screen_weather1_del, &guider_ui.screen_weather_cloudy_del, setup_scr_screen_weather1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_weather_cloudy(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_weather_cloudy_btn_1, screen_weather_cloudy_btn_1_event_handler, LV_EVENT_ALL, ui);
}
static void screen_remind1_img_back_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_remind2, guider_ui.screen_remind2_del, &guider_ui.screen_remind1_del, setup_scr_screen_remind2, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_remind1_btn_last_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_weather1, guider_ui.screen_weather1_del, &guider_ui.screen_remind1_del, setup_scr_screen_weather1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_remind1_btn_next_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_ChatGPT1, guider_ui.screen_ChatGPT1_del, &guider_ui.screen_remind1_del, setup_scr_screen_ChatGPT1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_remind1(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_remind1_img_back, screen_remind1_img_back_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_remind1_btn_last, screen_remind1_btn_last_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_remind1_btn_next, screen_remind1_btn_next_event_handler, LV_EVENT_ALL, ui);
}
static void screen_remind2_btn_back_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_remind1, guider_ui.screen_remind1_del, &guider_ui.screen_remind2_del, setup_scr_screen_remind1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_remind2(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_remind2_btn_back, screen_remind2_btn_back_event_handler, LV_EVENT_ALL, ui);
}
static void screen_ChatGPT1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_ChatGPT2, guider_ui.screen_ChatGPT2_del, &guider_ui.screen_ChatGPT1_del, setup_scr_screen_ChatGPT2, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_ChatGPT1_img_back_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_ChatGPT2, guider_ui.screen_ChatGPT2_del, &guider_ui.screen_ChatGPT1_del, setup_scr_screen_ChatGPT2, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_ChatGPT1_btn_last_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_remind1, guider_ui.screen_remind1_del, &guider_ui.screen_ChatGPT1_del, setup_scr_screen_remind1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_ChatGPT1_btn_next_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_medicine_id1, guider_ui.screen_medicine_id1_del, &guider_ui.screen_ChatGPT1_del, setup_scr_screen_medicine_id1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_ChatGPT1(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_ChatGPT1, screen_ChatGPT1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_ChatGPT1_img_back, screen_ChatGPT1_img_back_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_ChatGPT1_btn_last, screen_ChatGPT1_btn_last_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_ChatGPT1_btn_next, screen_ChatGPT1_btn_next_event_handler, LV_EVENT_ALL, ui);
}
static void screen_ChatGPT2_btn_back_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_ChatGPT1, guider_ui.screen_ChatGPT1_del, &guider_ui.screen_ChatGPT2_del, setup_scr_screen_ChatGPT1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_ChatGPT2(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_ChatGPT2_btn_back, screen_ChatGPT2_btn_back_event_handler, LV_EVENT_ALL, ui);
}
static void screen_medicine_id1_img_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_medicine_id_up, guider_ui.screen_medicine_id_up_del, &guider_ui.screen_medicine_id1_del, setup_scr_screen_medicine_id_up, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_medicine_id1_btn_last_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_ChatGPT1, guider_ui.screen_ChatGPT1_del, &guider_ui.screen_medicine_id1_del, setup_scr_screen_ChatGPT1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_medicine_id1_btn_next_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_measure1, guider_ui.screen_measure1_del, &guider_ui.screen_medicine_id1_del, setup_scr_screen_measure1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_medicine_id1(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_medicine_id1_img_1, screen_medicine_id1_img_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_medicine_id1_btn_last, screen_medicine_id1_btn_last_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_medicine_id1_btn_next, screen_medicine_id1_btn_next_event_handler, LV_EVENT_ALL, ui);
}
static void screen_medicine_id_up_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_medicine_id_loading, guider_ui.screen_medicine_id_loading_del, &guider_ui.screen_medicine_id_up_del, setup_scr_screen_medicine_id_loading, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_medicine_id_up_btn_back_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_medicine_id1, guider_ui.screen_medicine_id1_del, &guider_ui.screen_medicine_id_up_del, setup_scr_screen_medicine_id1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_medicine_id_up(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_medicine_id_up_btn_1, screen_medicine_id_up_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_medicine_id_up_btn_back, screen_medicine_id_up_btn_back_event_handler, LV_EVENT_ALL, ui);
}
static void screen_medicine_id_loading_btn_back_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_medicine_id_up, guider_ui.screen_medicine_id_up_del, &guider_ui.screen_medicine_id_loading_del, setup_scr_screen_medicine_id_up, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_medicine_id_loading(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_medicine_id_loading_btn_back, screen_medicine_id_loading_btn_back_event_handler, LV_EVENT_ALL, ui);
}
static void screen_medicine_id2_btn_back_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_medicine_id1, guider_ui.screen_medicine_id1_del, &guider_ui.screen_medicine_id2_del, setup_scr_screen_medicine_id1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_medicine_id2(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_medicine_id2_btn_back, screen_medicine_id2_btn_back_event_handler, LV_EVENT_ALL, ui);
}
static void screen_measure1_img_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_measure_up, guider_ui.screen_measure_up_del, &guider_ui.screen_measure1_del, setup_scr_screen_measure_up, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_measure1_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_medicine_id1, guider_ui.screen_medicine_id1_del, &guider_ui.screen_measure1_del, setup_scr_screen_medicine_id1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_measure1_btn_2_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_first, guider_ui.screen_first_del, &guider_ui.screen_measure1_del, setup_scr_screen_first, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_measure1(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_measure1_img_1, screen_measure1_img_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_measure1_btn_1, screen_measure1_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_measure1_btn_2, screen_measure1_btn_2_event_handler, LV_EVENT_ALL, ui);
}
static void screen_measure_up_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_measure_loading, guider_ui.screen_measure_loading_del, &guider_ui.screen_measure_up_del, setup_scr_screen_measure_loading, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
static void screen_measure_up_btn_back_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_measure1, guider_ui.screen_measure1_del, &guider_ui.screen_measure_up_del, setup_scr_screen_measure1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_measure_up(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_measure_up_btn_1, screen_measure_up_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_measure_up_btn_back, screen_measure_up_btn_back_event_handler, LV_EVENT_ALL, ui);
}
static void screen_measure_loading_btn_back_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_measure_up, guider_ui.screen_measure_up_del, &guider_ui.screen_measure_loading_del, setup_scr_screen_measure_up, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_measure_loading(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_measure_loading_btn_back, screen_measure_loading_btn_back_event_handler, LV_EVENT_ALL, ui);
}
static void screen_measure2_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_measure1, guider_ui.screen_measure1_del, &guider_ui.screen_measure2_del, setup_scr_screen_measure1, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_measure2(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_measure2_btn_1, screen_measure2_btn_1_event_handler, LV_EVENT_ALL, ui);
}
static void screen_falling_btn_back_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_first, guider_ui.screen_first_del, &guider_ui.screen_falling_del, setup_scr_screen_first, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_falling(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_falling_btn_back, screen_falling_btn_back_event_handler, LV_EVENT_ALL, ui);
}
static void screen_reminding_btn_1_event_handler (lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code) {
	case LV_EVENT_CLICKED:
	{
		ui_load_scr_animation(&guider_ui, &guider_ui.screen_first, guider_ui.screen_first_del, &guider_ui.screen_reminding_del, setup_scr_screen_first, LV_SCR_LOAD_ANIM_NONE, 200, 200, true, true);
		break;
	}
	default:
		break;
	}
}
void events_init_screen_reminding(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_reminding_btn_1, screen_reminding_btn_1_event_handler, LV_EVENT_ALL, ui);
}

void events_init(lv_ui *ui)
{

}
