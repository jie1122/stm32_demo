/*
 * key.h
 *
 *  Created on: Jun 15, 2025
 *      Author: jie
 */

#ifndef BSP_KEY_KEY_H_
#define BSP_KEY_KEY_H_

# include "main.h"
# include "gpio.h"

/**
 * 读取按键IO
 */
# define KEY0 HAL_GPIO_ReadPin(KEY0_GPIO_Port, KEY0_Pin)
# define KEY1 HAL_GPIO_ReadPin(KEY1_GPIO_Port, KEY1_Pin)
# define WK_UP HAL_GPIO_ReadPin(WK_UP_GPIO_Port, WK_UP_Pin)

/**
 * 按键被按下
 */
# define KEY0_PRES 1
# define KEY1_PRES 2
# define WKUP_PRES 3

#endif /* BSP_KEY_KEY_H_ */
