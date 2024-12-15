/*
 * ex1.h
 *
 *  Created on: Sep 16, 2024
 *      Author: tranm
 */
#include "../../../lab1_3/Core/Src/ex1_var.h"
#ifndef SRC_EX1_H_
#define SRC_EX1_H_



#endif /* SRC_EX1_H_ */
void ex1() {
	switch (led_red) {
		  	  case 1:
		  		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin, RESET ) ;

		  		count_red--;
		  		if ( count_red  <= 0 ){
		  			led_red = 0;
		  			count_red = 2;
		  		}
		  		break;
		  	  case 0:
		  		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , SET ) ;
		  		count_red--;
		  		if ( count_red <= 0 ){
		  			led_red = 1;
		  			count_red = 2;
		  		}
		  	    break;
		  }

		switch (led_yellow) {
		 	  	  case 1:
		 	  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , RESET ) ;

		 	  		count_yellow--;
		 	  		if ( count_yellow  <= 0 ){
		 	  			led_yellow = 0;
		 	  			count_yellow = 2;
		 	  		}
		 	  		break;
		 	  	  case 0:
		 	  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , SET ) ;
		 	  		count_yellow--;
		 	  		if ( count_yellow <= 0 ){
		 	  			led_yellow = 1;
		 	  			count_yellow = 2;
		 	  		}
		 	  		break;
		}
}
