/*
 * led_matrix.c
 *
 *  Created on: Oct 2, 2023
 *      Author: Acer
 */

#include "led_matrix.h"
#include "main.h"

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0xFF, 0x07, 0x03, 0x99, 0xC99, 0x03, 0x07, 0xFF};

int matrix_count = 0;

void updateLEDMatrix(int index){

    switch (index){
        case 0:
        	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 0);
        	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
        	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
        	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
        	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
        	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
        	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
        	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);

        	GPIOB->ODR &= ~0xFF00;
        	GPIOB->ODR |= (matrix_buffer[0] << 8);
            break;
        case 1:
        	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 0);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);

			GPIOB->ODR &= ~0xFF00;
			GPIOB->ODR |= (matrix_buffer[1] << 8);
            break;
        case 2:
        	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 0);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);

			GPIOB->ODR &= ~0xFF00;
			GPIOB->ODR |= (matrix_buffer[2] << 8);
            break;
        case 3:
        	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);

			GPIOB->ODR &= ~0xFF00;
			GPIOB->ODR |= (matrix_buffer[3] << 8);
            break;
        case 4:
        	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 0);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);

			GPIOB->ODR &= ~0xFF00;
			GPIOB->ODR |= (matrix_buffer[4] << 8);
            break;
        case 5:
        	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 0);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);

			GPIOB->ODR &= ~0xFF00;
			GPIOB->ODR |= (matrix_buffer[5] << 8);
            break;
        case 6:
        	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 0);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);

			GPIOB->ODR &= ~0xFF00;
			GPIOB->ODR |= (matrix_buffer[6] << 8);
            break;
        case 7:
        	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
			HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
			HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
			HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
			HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
			HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
			HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
			HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 0);

			GPIOB->ODR &= ~0xFF00;
			GPIOB->ODR |= (matrix_buffer[7] << 8);
            break;
        default:
            break;
    }
}
