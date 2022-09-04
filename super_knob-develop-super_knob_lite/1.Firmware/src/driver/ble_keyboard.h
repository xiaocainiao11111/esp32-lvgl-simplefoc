/*
 * @Descripttion: 
 * @version: 
 * @Author: congsir
 * @Date: 2022-06-04 13:57:45
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2022-08-21 16:59:52
 */
#pragma once

void ble_keyboard_init(void);
bool check_keyboard_connected(void);
void keyboard_enable_player(void);
int keyboard_player_next(void);
int keyboard_player_volume_up(void);
int keyboard_player_volume_down(void);
int keyboard_pass_ctrl_c(void);
int keyboard_pass_ctrl_v(void);
int keyboard_windows_show(void);
