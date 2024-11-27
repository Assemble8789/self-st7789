/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LCD_BLK_Pin GPIO_PIN_13
#define LCD_BLK_GPIO_Port GPIOE
#define LCD_RES_Pin_Pin GPIO_PIN_9
#define LCD_RES_Pin_GPIO_Port GPIOE
#define SPI_DC_Pin GPIO_PIN_11
#define SPI_DC_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */
#define SPI_DC_H()  HAL_GPIO_WritePin(SPI_DC_GPIO_Port,SPI_DC_Pin,GPIO_PIN_SET)	//数据/命令选择
#define SPI_DC_L()  HAL_GPIO_WritePin(SPI_DC_GPIO_Port,SPI_DC_Pin,GPIO_PIN_RESET);		
 
#define LCD_RES_H() HAL_GPIO_WritePin(LCD_RES_Pin_GPIO_Port,LCD_RES_Pin_Pin,GPIO_PIN_SET)				//LCD复位（PA3�???
#define LCD_RES_L() HAL_GPIO_WritePin(LCD_RES_Pin_GPIO_Port,LCD_RES_Pin_Pin,GPIO_PIN_RESET)
 
#define LCD_BLK_H()	HAL_GPIO_WritePin(LCD_BLK_GPIO_Port,LCD_BLK_Pin,GPIO_PIN_SET)				//LCD背光（PA1�???
#define LCD_BLK_L() HAL_GPIO_WritePin(LCD_BLK_GPIO_Port,LCD_BLK_Pin,GPIO_PIN_RESET)

//LCD屏幕分辨率定�??
#define LCD_Width   240
#define LCD_Height  240
//颜色定义
#define WHITE   0xFFFF    //白色
#define YELLOW  0xFFE0    //黄色
#define BRRED   0XFC07    //棕红�??
#define PINK    0XF81F    //粉色
#define RED     0xF800    //红色
#define BROWN   0XBC40    //棕色
#define GRAY    0X8430    //灰色
#define GBLUE   0X07FF    //兰色
#define GREEN   0x07E0    //绿色
#define BLUE    0x001F    //蓝色
#define BLACK   0x0000    //黑色
#define LCD_TOTAL_BUF_SIZE    (240*240*2)
#define LCD_Buf_Size 1152
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
