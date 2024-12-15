/*
 * ex7.h
 *
 *  Created on: Sep 16, 2024
 *      Author: tranm
 */

#ifndef SRC_EX7_H_
#define SRC_EX7_H_



#endif /* SRC_EX7_H_ */
void clearAllClock() {
	HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin, RESET ) ;
	HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin, RESET ) ;
	HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin, RESET ) ;
	HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin, RESET ) ;
	HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin, RESET ) ;
	HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin, RESET ) ;
	HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin, RESET ) ;
	HAL_GPIO_WritePin ( LED_8_GPIO_Port , LED_8_Pin, RESET ) ;
	HAL_GPIO_WritePin ( LED_9_GPIO_Port , LED_9_Pin, RESET ) ;
	HAL_GPIO_WritePin ( LED_10_GPIO_Port , LED_10_Pin, RESET ) ;
	HAL_GPIO_WritePin ( LED_11_GPIO_Port , LED_11_Pin, RESET ) ;
	HAL_GPIO_WritePin ( LED_12_GPIO_Port , LED_12_Pin, RESET ) ;
}
void ex7(){
	clearAllClock();
}
