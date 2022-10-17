/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f0xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Out0_Pin GPIO_PIN_4
#define Out0_GPIO_Port GPIOA
#define Out1_Pin GPIO_PIN_5
#define Out1_GPIO_Port GPIOA
#define PWMLedOut_Pin GPIO_PIN_6
#define PWMLedOut_GPIO_Port GPIOA
#define PWM2_Pin GPIO_PIN_7
#define PWM2_GPIO_Port GPIOA
#define PWM3_Pin GPIO_PIN_0
#define PWM3_GPIO_Port GPIOB
#define PWM4_Pin GPIO_PIN_1
#define PWM4_GPIO_Port GPIOB
#define Out2_Pin GPIO_PIN_2
#define Out2_GPIO_Port GPIOB
#define objectSensorPin_Pin GPIO_PIN_12
#define objectSensorPin_GPIO_Port GPIOB
#define In0_Pin GPIO_PIN_13
#define In0_GPIO_Port GPIOB
#define In1_Pin GPIO_PIN_14
#define In1_GPIO_Port GPIOB
#define In2_Pin GPIO_PIN_15
#define In2_GPIO_Port GPIOB
#define In3_Pin GPIO_PIN_8
#define In3_GPIO_Port GPIOA
#define RS485_Control1_Pin GPIO_PIN_15
#define RS485_Control1_GPIO_Port GPIOA
#define RS485_Control2_Pin GPIO_PIN_3
#define RS485_Control2_GPIO_Port GPIOB
#define RS485_Control3_Pin GPIO_PIN_4
#define RS485_Control3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
