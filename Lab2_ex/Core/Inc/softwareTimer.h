/*
 * softwareTimer.h
 *
 *  Created on: Oct 1, 2023
 *      Author: Acer
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

#define DELAY 10

extern int flag0;
extern int flag1;
extern int flag2;
extern int flag3;
void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timerRun();


#endif /* INC_SOFTWARETIMER_H_ */
