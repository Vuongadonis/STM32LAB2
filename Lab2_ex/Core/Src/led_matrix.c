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
//uint16_t matrix_buffer[8] = {0xFF, 0xFF, 0xFF, 0xFF, 0xCFF, 0xFF, 0xFF, 0xFF};
uint16_t matrix_buffer[8] = {0xFF, 0x07, 0x03, 0x99, 0xC99, 0x03, 0x07, 0xFF};

uint16_t A_buffer[9] = {0xFF, 0x07, 0x03, 0x99, 0xC99, 0x03, 0x07, 0xFF, 0xFF};
//uint16_t B_buffer[9] = {0xFF, 0x07, 0x03, 0x99, 0xC99, 0x03, 0x07, 0xFF, 0xFF};
//uint16_t C_buffer[9] = {0xFF, 0x07, 0x03, 0x99, 0xC99, 0x03, 0x07, 0xFF, 0xFF};
//uint16_t D_buffer[9] = {0xFF, 0x07, 0x03, 0x99, 0xC99, 0x03, 0x07, 0xFF, 0xFF};

//uint16_t matrix_buffer[8] = {0xFF, 0x07, 0x03, 0x99, 0xC99, 0x03, 0x07, 0xFF};

int matrix_count = 0;
int cycle_count = 0;

void update_buffer(int count) {
	matrix_buffer[0] = matrix_buffer[1];
	matrix_buffer[1] = matrix_buffer[2];
	matrix_buffer[2] = matrix_buffer[3];
	matrix_buffer[3] = matrix_buffer[4];
	matrix_buffer[4] = matrix_buffer[5];
	matrix_buffer[5] = matrix_buffer[6];
	matrix_buffer[6] = matrix_buffer[7];
	matrix_buffer[7] = A_buffer[count];
}

uint16_t mid = 0xFF;
void update_buffer_to_right(int count) {
	mid = matrix_buffer[7];
	matrix_buffer[7] = matrix_buffer[6];
	matrix_buffer[6] = matrix_buffer[5];
	matrix_buffer[5] = matrix_buffer[4];
	matrix_buffer[4] = matrix_buffer[3];
	matrix_buffer[3] = matrix_buffer[2];
	matrix_buffer[2] = matrix_buffer[1];
	matrix_buffer[1] = matrix_buffer[0];
	matrix_buffer[0] = mid;
}

void updateLEDMatrix(int index){

    switch (index){
        case 0:
//        	GPIOA->ODR &= 0x3F3;
//        	GPIOA->ODR |= 0xFC08;
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
//        	GPIOA->ODR &= 0x3F3;
//        	GPIOA->ODR |= 0xFC04;
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
//        	GPIOA->ODR &= 0x3F3;
//        	GPIOA->ODR |= 0xF80C;
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
//        	GPIOA->ODR &= 0x3F3;
//        	GPIOA->ODR |= 0xF40C;
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
//        	GPIOA->ODR &= 0x3F3;
//        	GPIOA->ODR |= 0xEC0C;
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
//        	GPIOA->ODR &= 0x3F3;
//        	GPIOA->ODR |= 0xDC0C;
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
//        	GPIOA->ODR &= 0x3F3;
//        	GPIOA->ODR |= 0xBC0C;
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
