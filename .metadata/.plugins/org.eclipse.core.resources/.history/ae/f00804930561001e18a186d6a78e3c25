/*
 * softwareTimer.c
 *
 *  Created on: Oct 1, 2023
 *      Author: Acer
 */

#include "softwareTimer.h"

int timer_counter1 = 0;
int flag1 = 0;
int timer_counter2 = 0;
int flag2 = 0;

void setTimer1(int duration) {
	timer_counter1 = duration/10;
	flag1 = 0;
}

void timerRun() {
	if(timer_counter1 > 0){
		timer_counter1--;
		if(timer_counter1 <= 0){
			flag1 = 1;
		}
	}
	if(timer_counter2 > 0){
		timer_counter2--;
		if(timer_counter2 <= 0){
			flag2 = 1;
		}
	}
}

void setTimer2(int duration) {
	timer_counter2 = duration/10;
	flag2 = 0;
}

