#include "stepmotor.hpp"

#include "stm32l4xx_hal.h"

Move::rotLeft(uint16_t period){
	uint8_t iter = 0;
	for(uint16_t steps = 0; steps < 4096; steps++){
		iter = steps % 8;
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, seqMove[iter][0]);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, seqMove[iter][1]);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, seqMove[iter][2]);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, seqMove[iter][3]);
	}
	HAL_Delay(10);
}
