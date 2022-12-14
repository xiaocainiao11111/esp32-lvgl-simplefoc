/*
 * @Descripttion: 
 * @version: 
 * @Author: congsir
 * @Date: 2022-05-22 05:30:20
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2022-07-03 14:42:06
 */
#pragma once
#include <Arduino.h>

#define pi 3.1415926
#define init_smooth 1000 // 该值越大，初始化越慢。以防受到干扰。
#define volt_limit 8.0000

struct KnobConfig {
    //可以运动的个数
    int32_t num_positions;        
    //位置
    int32_t position;             
    //位置宽度弧度 或者是每一步的度数
    float position_width_radians; 
    //制动强度
    float detent_strength_unit;  
    //end stop强度 
    float endstop_strength_unit;  
    //中断点 
    float snap_point; 
    //描述符            
    char descriptor[50];          
};
extern KnobConfig motor_config;

typedef enum
{
    MOTOR_INIT,
    MOTOR_INIT_SUCCESS,
    MOTOR_INIT_END,
    DEV_WORK_MODE,
    DEV_BLE_WORK,

} MOTOR_RUNNING_MODE_E;

int get_motor_position(void);
void update_motor_config(int status);
void Task_foc(void *pvParameters);