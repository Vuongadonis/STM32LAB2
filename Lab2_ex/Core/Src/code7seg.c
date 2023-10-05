/*
 * code7seg.c
 *
 *  Created on: Oct 1, 2023
 *      Author: Acer
 */

#include "code7seg.h"
#include "main.h"

void led7seg_0(){
  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}
void led7seg_1(){
  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}
void led7seg_2(){
  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void led7seg_3(){
  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void led7seg_4(){
  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void led7seg_5(){
  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void led7seg_6(){
  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void led7seg_7(){
  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
}
void led7seg_8(){
  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}
void led7seg_9(){
  HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
  HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
  HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
  HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
  HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
  HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
  HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
}

void display7SEG(int num){
  switch(num){
  case 0:
	  led7seg_0();
	  break;
  case 1:
	  led7seg_1();
	  break;
  case 2:
	  led7seg_2();
	  break;
  case 3:
	  led7seg_3();
	  break;
  case 4:
	  led7seg_4();
	  break;
  case 5:
	  led7seg_5();
	  break;
  case 6:
	  led7seg_6();
	  break;
  case 7:
	  led7seg_7();
	  break;
  case 8:
	  led7seg_8();
	  break;
  case 9:
	  led7seg_9();
	  break;
  default:
	  break;
  }
}
