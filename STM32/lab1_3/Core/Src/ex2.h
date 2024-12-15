/*
 * ex2.h
 *
 *  Created on: Sep 16, 2024
 *      Author: tranm
 */
#include "ex2_var.h"
#ifndef SRC_EX2_H_
#define SRC_EX2_H_



#endif /* SRC_EX2_H_ */
void ex2(){
	  switch (led_redl2) {
	  	  	  case 1:
	  	  		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin, RESET ) ;
	  	  		count_redl2--;
	  	  		if ( count_redl2  <= 0 ){
	  	  			led_redl2 = 0;
	  	  			count_redl2 = 5;
	  	  		}
	  	  		break;
	  	  	  case 0:
	  	  		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , SET ) ;
	  	  		count_redl2--;
	  	  		if ( count_redl2 <= 0 ){
	  	  			led_redl2 = 1;
	  	  			count_redl2 = 5;
	  	  		}
	  	  	    break;
	  	  }

	  	  switch (led_yellowl2) {
	  	 	  	  case 1:
	  	 	  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , RESET ) ;
	  	 	  		count_yellowl2--;
	  	 	  		if ( count_yellowl2  <= 0 ){
	  	 	  			led_yellowl2 = 0;
	  	 	  			count_yellowl2 = 8;
	  	 	  		}
	  	 	  		break;
	  	 	  	  case 0:
	  	 	  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , SET ) ;
	  	 	  		count_yellowl2--;
	  	 	  		if ( count_yellowl2 <= 0 ){
	  	 	  			led_yellowl2 = 1;
	  	 	  			count_yellowl2 = 2;
	  	 	  		}
	  	 	  		break;
	  	 }
	  	 switch (led_green){
	  	           case 1:
	  		  	  		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin, RESET ) ;
	  		  	  		count_green--;
	  		  	  		if ( count_green  <= 0 ){
	  		  	  			led_green = 0;
	  		  	  			count_green = 7;
	  		  	  		}
	  		  	  		break;
	  		  	  case 0:
	  		  	  		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , SET ) ;
	  		  	  		count_green--;
	  		  	  		if ( count_green <= 0 ){
	  		  	  			led_green = 1;
	  		  	  			count_green = 3;
	  		  	  		}
	  		  	  	    break;
	  	 }

}
