/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    lptim.h
  * @brief   This file contains all the function prototypes for
  *          the lptim.c file
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
#ifndef __LPTIM_H__
#define __LPTIM_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern LPTIM_HandleTypeDef hlptim1;

extern LPTIM_HandleTypeDef hlptim2;

/* USER CODE BEGIN Private defines */

#define PeriodValue             (uint32_t) (320 -1)

/* Set the Maximum value of the counter (Auto-Reload) that defines the Period */
#define PeriodValue_PWM             (uint32_t) (36 -1)

/* Set the Compare value that defines the duty cycle */
#define PulseValue_PWM              (uint32_t) (16 -1)

/* MCP1631 OSCin ton = 500ns, toff = 626ns, for 32MHz clock : PeriodValue = 36, PulseValue = 16*/
/* USER CODE END Private defines */

void MX_LPTIM1_Init(void);
void MX_LPTIM2_Init(void);

/* USER CODE BEGIN Prototypes */
void PWM_LPTIM1_Init(void);
void COUNT_LPTIM2_IT_Init(void);
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __LPTIM_H__ */

