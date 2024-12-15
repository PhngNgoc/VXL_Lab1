/*
 * ex8.h
 *
 *  Created on: Sep 16, 2024
 *      Author: tranm
 */

#ifndef SRC_EX8_H_
#define SRC_EX8_H_



#endif /* SRC_EX8_H_ */
void setNumberOnClock(int num) {
	clearAllClock();
	switch (num){
		case 0 :
			HAL_GPIO_WritePin ( LED_12_GPIO_Port , LED_12_Pin, SET ) ;
			break;
		case 1:
			HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin, SET ) ;
			break;
		case 2:
			HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin, SET ) ;
			break;
		case 3 :
			HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin, SET ) ;
			break;
		case 4 :
			HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin, SET ) ;
			break;
		case 5 :
			HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin, SET ) ;
			break;
		case 6 :
			HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin, SET ) ;
			break;
		case 7 :
			HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin, SET ) ;
			break;
		case 8 :
			HAL_GPIO_WritePin ( LED_8_GPIO_Port , LED_8_Pin, SET ) ;
			break;
		case 9 :
			HAL_GPIO_WritePin ( LED_9_GPIO_Port , LED_9_Pin, SET ) ;
			break;
		case 10 :
			HAL_GPIO_WritePin ( LED_10_GPIO_Port , LED_10_Pin, SET ) ;
			break;
		case 11 :
			HAL_GPIO_WritePin ( LED_11_GPIO_Port , LED_11_Pin, SET ) ;
			break;
	}
}
void ex8(int num){
	setNumberOnClock(num);
}
