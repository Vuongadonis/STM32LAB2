/*
 * led_matrix.h
 *
 *  Created on: Oct 2, 2023
 *      Author: Acer
 */

#ifndef INC_LED_MATRIX_H_
#define INC_LED_MATRIX_H_

extern int matrix_count;
extern int cycle_count;

void update_buffer(int count);
void updateLEDMatrix(int index);

#endif /* INC_LED_MATRIX_H_ */
