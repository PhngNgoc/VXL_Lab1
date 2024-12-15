/*
 * ex10.h
 *
 *  Created on: Sep 16, 2024
 *      Author: tranm
 */
#include "ex10_var.h"
#ifndef SRC_EX10_H_
#define SRC_EX10_H_



#endif /* SRC_EX10_H_ */
void turnoff (int num){
	switch (num){
		case 0 :
			HAL_GPIO_WritePin ( LED_12_GPIO_Port , LED_12_Pin, RESET ) ;
			break;
		case 1:
			HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin, RESET ) ;
			break;
		case 2:
			HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin, RESET ) ;
			break;
		case 3 :
			HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin, RESET ) ;
			break;
		case 4 :
			HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin, RESET ) ;
			break;
		case 5 :
			HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin, RESET ) ;
			break;
		case 6 :
			HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin, RESET ) ;
			break;
		case 7 :
			HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin, RESET ) ;
			break;
		case 8 :
			HAL_GPIO_WritePin ( LED_8_GPIO_Port , LED_8_Pin, RESET ) ;
			break;
		case 9 :
			HAL_GPIO_WritePin ( LED_9_GPIO_Port , LED_9_Pin, RESET ) ;
			break;
		case 10 :
			HAL_GPIO_WritePin ( LED_10_GPIO_Port , LED_10_Pin, RESET ) ;
			break;
		case 11 :
			HAL_GPIO_WritePin ( LED_11_GPIO_Port , LED_11_Pin, RESET ) ;
			break;
	}
}
void ex10(){
	  switch (sec/5){
		case 0 :
			if ( min/5 != 11 && hour != 11 ) turnoff(11);
			HAL_GPIO_WritePin ( LED_12_GPIO_Port , LED_12_Pin, SET ) ;
			break;
		case 1:
			if ( min/5 != 0 && hour != 0 ) turnoff(0);
			HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin, SET ) ;
			break;
		case 2:
			if ( min/5 != 1 && hour != 1 ) turnoff(1);
			HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin, SET ) ;
			break;
		case 3 :
			if ( min/5 != 2 && hour != 2 ) turnoff(2);
			HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin, SET ) ;
			break;
		case 4 :
			if ( min/5 != 3 && hour != 3 ) turnoff(3);
			HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin, SET ) ;
			break;
		case 5 :
			if ( min/5 != 4 && hour != 4 ) turnoff(4);
			HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin, SET ) ;
			break;
		case 6 :
			if ( min/5 != 5 && hour != 5 ) turnoff(5);
			HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin, SET ) ;
			break;
		case 7 :
			if ( min/5 != 6 && hour != 6 ) turnoff(6);
			HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin, SET ) ;
			break;
		case 8 :
			if ( min/5 != 7 && hour != 7 ) turnoff(7);
			HAL_GPIO_WritePin ( LED_8_GPIO_Port , LED_8_Pin, SET ) ;
			break;
		case 9 :
			if ( min/5 != 8 && hour != 8 ) turnoff(8);
			HAL_GPIO_WritePin ( LED_9_GPIO_Port , LED_9_Pin, SET ) ;
			break;
		case 10 :
			if ( min/5 != 9 && hour != 9 ) turnoff(9);
			HAL_GPIO_WritePin ( LED_10_GPIO_Port , LED_10_Pin, SET ) ;
			break;
		case 11 :
			if ( min/5 != 10 && hour != 10 ) turnoff(10);
			HAL_GPIO_WritePin ( LED_11_GPIO_Port , LED_11_Pin, SET ) ;
			break;
	  	}
	  switch (min/5){
		case 0 :
			if ( sec/5 != 11 && hour != 11 ) turnoff(11);
			HAL_GPIO_WritePin ( LED_12_GPIO_Port , LED_12_Pin, SET ) ;
			break;
		case 1:
			if ( sec/5 != 0 && hour != 0 ) turnoff(0);
			HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin, SET ) ;
			break;
		case 2:
			if ( sec/5 != 1 && hour != 1 ) turnoff(1);
			HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin, SET ) ;
			break;
		case 3 :
			if ( sec/5 != 2 && hour != 2 ) turnoff(2);
			HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin, SET ) ;
			break;
		case 4 :
			if ( sec/5 != 3 && hour != 3 ) turnoff(3);
			HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin, SET ) ;
			break;
		case 5 :
			if ( sec/5 != 4 && hour != 4 ) turnoff(4);
			HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin, SET ) ;
			break;
		case 6 :
			if ( sec/5 != 5 && hour != 5 ) turnoff(5);
			HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin, SET ) ;
			break;
		case 7 :
			if ( sec/5 != 6 && hour != 6 ) turnoff(6);
			HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin, SET ) ;
			break;
		case 8 :
			if ( sec/5 != 7 && hour != 7 ) turnoff(7);
			HAL_GPIO_WritePin ( LED_8_GPIO_Port , LED_8_Pin, SET ) ;
			break;
		case 9 :
			if ( sec/5 != 8 && hour != 8 ) turnoff(8);
			HAL_GPIO_WritePin ( LED_9_GPIO_Port , LED_9_Pin, SET ) ;
			break;
		case 10 :
			if ( sec/5 != 9 && hour != 9 ) turnoff(9);
			HAL_GPIO_WritePin ( LED_10_GPIO_Port , LED_10_Pin, SET ) ;
			break;
		case 11 :
			if ( sec/5 != 10 && hour != 10 ) turnoff(10);
			HAL_GPIO_WritePin ( LED_11_GPIO_Port , LED_11_Pin, SET ) ;
			break;
	  }
	  switch (hour){
		case 0 :
			if ( min/5 != 11 && sec/5 != 11 ) turnoff(11);
			HAL_GPIO_WritePin ( LED_12_GPIO_Port , LED_12_Pin, SET ) ;
			break;
		case 1:
			if ( min/5 != 0 && sec/5 != 0 ) turnoff(0);
			HAL_GPIO_WritePin ( LED_1_GPIO_Port , LED_1_Pin, SET ) ;
			break;
		case 2:
			if ( min/5 != 1 && sec/5 != 1 ) turnoff(1);
			HAL_GPIO_WritePin ( LED_2_GPIO_Port , LED_2_Pin, SET ) ;
			break;
		case 3 :
			if ( min/5 != 2 && sec/5 != 2 ) turnoff(2);
			HAL_GPIO_WritePin ( LED_3_GPIO_Port , LED_3_Pin, SET ) ;
			break;
		case 4 :
			if ( min/5 != 3 && sec/5 != 3 ) turnoff(3);
			HAL_GPIO_WritePin ( LED_4_GPIO_Port , LED_4_Pin, SET ) ;
			break;
		case 5 :
			if ( min/5 != 4 && sec/5 != 4 ) turnoff(4);
			HAL_GPIO_WritePin ( LED_5_GPIO_Port , LED_5_Pin, SET ) ;
			break;
		case 6 :
			if ( min/5 != 5 && sec/5 != 5 ) turnoff(5);
			HAL_GPIO_WritePin ( LED_6_GPIO_Port , LED_6_Pin, SET ) ;
			break;
		case 7 :
			if ( min/5 != 6 && sec/5 != 6 ) turnoff(6);
			HAL_GPIO_WritePin ( LED_7_GPIO_Port , LED_7_Pin, SET ) ;
			break;
		case 8 :
			if ( min/5 != 7 && sec/5 != 7 ) turnoff(7);
			HAL_GPIO_WritePin ( LED_8_GPIO_Port , LED_8_Pin, SET ) ;
			break;
		case 9 :
			if ( min/5 != 8 && sec/5 != 8 ) turnoff(8);
			HAL_GPIO_WritePin ( LED_9_GPIO_Port , LED_9_Pin, SET ) ;
			break;
		case 10 :
			if ( min/5 != 9 && sec/5 != 9 ) turnoff(9);
			HAL_GPIO_WritePin ( LED_10_GPIO_Port , LED_10_Pin, SET ) ;
			break;
		case 11 :
			if ( min/5 != 10 && sec/5 != 10 ) turnoff(10);
			HAL_GPIO_WritePin ( LED_11_GPIO_Port , LED_11_Pin, SET ) ;
			break;
	  }
	  sec++;
	  if ( sec == 60 ){
		  sec = 0;
		  int a = min % 12;
		  turnoff(a);
		  min++;
	  }
	  if ( min == 60 ){
		  min = 0;
		  turnoff(hour);
		  hour++;
	  }
	  if ( hour == 12 ) hour = 0;
}
