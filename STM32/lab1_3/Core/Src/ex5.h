/*
 * ex3.h
 *
 *  Created on: Sep 16, 2024
 *      Author: tranm
 */
#include "ex5_var.h"
#ifndef SRC_EX3_H_
#define SRC_EX3_H_



#endif /* SRC_EX3_H_ */
void display7SEG1(int num){
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;

	}
}
void display7SEG2(int num){
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
			HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
			HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
			HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
			HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
			HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
			HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
			break;

	}
}
 void ex5(){
	  //light1
	  switch (led_red1) {
	  	  	  	  case 1:
	  	  	  		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin, RESET ) ;
	  	  	  		count_red1--;
	  	  	  		if ( count_red1  <= 0 ){
	  	  	  			led_red1 = 0;
	  	  	  			count_red1 = 5;
	  	  	  		}
	  	  	  		break;
	  	  	  	  case 0:
	  	  	  		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , SET ) ;
	  	  	  		count_red1--;
	  	  	  		if ( count_red1 <= 0 ){
	  	  	  			led_red1 = 1;
	  	  	  			count_red1 = 5;
	  	  	  		}
	  	  	  	    break;
	  	  	  }

	  	  	  switch (led_yellow1) {
	  	  	 	  	  case 1:
	  	  	 	  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , RESET ) ;
	  	  	 	  		count_yellow1--;
	  	  	 	  		if ( count_yellow1  <= 0 ){
	  	  	 	  			led_yellow1 = 0;
	  	  	 	  			count_yellow1 = 8;
	  	  	 	  		}
	  	  	 	  		break;
	  	  	 	  	  case 0:
	  	  	 	  		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , SET ) ;
	  	  	 	  		count_yellow1--;
	  	  	 	  		if ( count_yellow1 <= 0 ){
	  	  	 	  			led_yellow1 = 1;
	  	  	 	  			count_yellow1 = 2;
	  	  	 	  		}
	  	  	 	  		break;
	  	  	 }
	  	  	 switch (led_green1){
	  	  	           case 1:
	  	  		  	  		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin, RESET ) ;
	  	  		  	  		count_green1--;
	  	  		  	  		if ( count_green1  <= 0 ){
	  	  		  	  			led_green1 = 0;
	  	  		  	  			count_green1 = 7;
	  	  		  	  		}
	  	  		  	  		break;
	  	  		  	  case 0:
	  	  		  	  		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , SET ) ;
	  	  		  	  		count_green1--;
	  	  		  	  		if ( count_green1 <= 0 ){
	  	  		  	  			led_green1 = 1;
	  	  		  	  			count_green1 = 3;
	  	  		  	  		}
	  	  		  	  	    break;
	  	  	 }
	  	  //light2
	  	   switch (led_red2) {
	  	  	  	  	  case 1:
	  	  	  	  		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin, RESET ) ;
	  	  	  	  		display7SEG2( count_red2);
	  	  	  	  		count_red2--;
	  	  	  	  		if ( count_red2  <= 0 ){
	  	  	  	  			led_red2 = 0;
	  	  	  	  			count_red2 = 5;
	  	  	  	  		}
	  	  	  	  		break;
	  	  	  	  	  case 0:
	  	  	  	  		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin , SET ) ;
	  	  	  	  		count_red2--;
	  	  	  	  		if ( count_red2 <= 0 ){
	  	  	  	  			led_red2 = 1;
	  	  	  	  			count_red2 = 5;
	  	  	  	  		}
	  	  	  	  	    break;
	  	  	  	  }

	  	  	  	  switch (led_yellow2) {
	  	  	  	 	  	  case 1:
	  	  	  	 	  		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , RESET ) ;
		  	  	  	  		display7SEG2( count_yellow2);
	  	  	  	 	  		count_yellow2--;
	  	  	  	 	  		if ( count_yellow2  <= 0 ){
	  	  	  	 	  			led_yellow2 = 0;
	  	  	  	 	  			count_yellow2 = 8;
	  	  	  	 	  		}
	  	  	  	 	  		break;
	  	  	  	 	  	  case 0:
	  	  	  	 	  		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , SET ) ;
	  	  	  	 	  		count_yellow2--;
	  	  	  	 	  		if ( count_yellow2 <= 0 ){
	  	  	  	 	  			led_yellow2 = 1;
	  	  	  	 	  			count_yellow2 = 2;
	  	  	  	 	  		}
	  	  	  	 	  		break;
	  	  	  	 }
	  	  	  	 switch (led_green2){
	  	  	  	           case 1:
	  	  	  		  	  		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin, RESET ) ;
	  		  	  	  	  		display7SEG2( count_green2);
	  	  	  		  	  		count_green2--;
	  	  	  		  	  		if ( count_green2  <= 0 ){
	  	  	  		  	  			led_green2 = 0;
	  	  	  		  	  			count_green2 = 7;
	  	  	  		  	  		}
	  	  	  		  	  		break;
	  	  	  		  	  case 0:
	  	  	  		  	  		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin , SET ) ;
	  	  	  		  	  		count_green2--;
	  	  	  		  	  		if ( count_green2 <= 0 ){
	  	  	  		  	  			led_green2 = 1;
	  	  	  		  	  			count_green2 = 3;
	  	  	  		  	  		}
	  	  	  		  	  	    break;
	  	  	  	 }

	  	  	 //light3
	  	  	 switch (led_red3) {
	  	  		  	  	  case 1:
	  	  		  	  		HAL_GPIO_WritePin ( LED_RED3_GPIO_Port , LED_RED3_Pin, RESET ) ;
	  	  		  	  		display7SEG1( count_red3);
	  	  		  	  		count_red3--;
	  	  		  	  		if ( count_red3  <= 0 ){
	  	  		  	  			led_red3 = 0;
	  	  		  	  			count_red3 = 5;
	  	  		  	  		}
	  	  		  	  		break;
	  	  		  	  	  case 0:
	  	  		  	  		HAL_GPIO_WritePin ( LED_RED3_GPIO_Port , LED_RED3_Pin , SET ) ;
	  	  		  	  		count_red3--;
	  	  		  	  		if ( count_red3 <= 0 ){
	  	  		  	  			led_red3 = 1;
	  	  		  	  			count_red3 = 5;
	  	  		  	  		}
	  	  		  	  	    break;
	  	  		  	  }

	  	  		  	  switch (led_yellow3) {
	  	  		  	 	  	  case 1:
	  	  		  	 	  		HAL_GPIO_WritePin ( LED_YELLOW3_GPIO_Port , LED_YELLOW3_Pin , RESET ) ;
	  	  		  	 	  		display7SEG1( count_yellow3);
	  	  		  	 	  		count_yellow3--;
	  	  		  	 	  		if ( count_yellow3  <= 0 ){
	  	  		  	 	  			led_yellow3 = 0;
	  	  		  	 	  			count_yellow3 = 8;
	  	  		  	 	  		}
	  	  		  	 	  		break;
	  	  		  	 	  	  case 0:
	  	  		  	 	  		HAL_GPIO_WritePin ( LED_YELLOW3_GPIO_Port , LED_YELLOW3_Pin , SET ) ;
	  	  		  	 	  		count_yellow3--;
	  	  		  	 	  		if ( count_yellow3 <= 0 ){
	  	  		  	 	  			led_yellow3 = 1;
	  	  		  	 	  			count_yellow3 = 2;
	  	  		  	 	  		}
	  	  		  	 	  		break;
	  	  		  	 }
	  	  		  	 switch (led_green3){
	  	  		  	           case 1:
	  	  		  		  	  		HAL_GPIO_WritePin ( LED_GREEN3_GPIO_Port , LED_GREEN3_Pin, RESET ) ;
	  	  		  		  	  		display7SEG1( count_green3);
	  	  		  		  	  		count_green3--;
	  	  		  		  	  		if ( count_green3  <= 0 ){
	  	  		  		  	  			led_green3 = 0;
	  	  		  		  	  			count_green3 = 7;
	  	  		  		  	  		}
	  	  		  		  	  		break;
	  	  		  		  	  case 0:
	  	  		  		  	  		HAL_GPIO_WritePin ( LED_GREEN3_GPIO_Port , LED_GREEN3_Pin , SET ) ;
	  	  		  		  	  		count_green3--;
	  	  		  		  	  		if ( count_green3 <= 0 ){
	  	  		  		  	  			led_green3 = 1;
	  	  		  		  	  			count_green3 = 3;
	  	  		  		  	  		}
	  	  		  		  	  	    break;
	  	  		  	 }

	  	  		  //light4
	  	  		 switch (led_red4) {
	  	  			  	  	  case 1:
	  	  			  	  		HAL_GPIO_WritePin ( LED_RED4_GPIO_Port , LED_RED4_Pin, RESET ) ;
	  	  			  	  		count_red4--;
	  	  			  	  		if ( count_red4  <= 0 ){
	  	  			  	  			led_red4 = 0;
	  	  			  	  			count_red4 = 5;
	  	  			  	  		}
	  	  			  	  		break;
	  	  			  	  	  case 0:
	  	  			  	  		HAL_GPIO_WritePin ( LED_RED4_GPIO_Port , LED_RED4_Pin , SET ) ;
	  	  			  	  		count_red4--;
	  	  			  	  		if ( count_red4 <= 0 ){
	  	  			  	  			led_red4 = 1;
	  	  			  	  			count_red4 = 5;
	  	  			  	  		}
	  	  			  	  	    break;
	  	  			  	  }

	  	  			  	  switch (led_yellow4) {
	  	  			  	 	  	  case 1:
	  	  			  	 	  		HAL_GPIO_WritePin ( LED_YELLOW4_GPIO_Port , LED_YELLOW4_Pin , RESET ) ;
	  	  			  	 	  		count_yellow4--;
	  	  			  	 	  		if ( count_yellow4  <= 0 ){
	  	  			  	 	  			led_yellow4 = 0;
	  	  			  	 	  			count_yellow4 = 8;
	  	  			  	 	  		}
	  	  			  	 	  		break;
	  	  			  	 	  	  case 0:
	  	  			  	 	  		HAL_GPIO_WritePin ( LED_YELLOW4_GPIO_Port , LED_YELLOW4_Pin , SET ) ;
	  	  			  	 	  		count_yellow4--;
	  	  			  	 	  		if ( count_yellow4 <= 0 ){
	  	  			  	 	  			led_yellow4 = 1;
	  	  			  	 	  			count_yellow4 = 2;
	  	  			  	 	  		}
	  	  			  	 	  		break;
	  	  			  	 }
	  	  			  	 switch (led_green4){
	  	  			  	           case 1:
	  	  			  		  	  		HAL_GPIO_WritePin ( LED_GREEN4_GPIO_Port , LED_GREEN4_Pin, RESET ) ;
	  	  			  		  	  		count_green4--;
	  	  			  		  	  		if ( count_green4  <= 0 ){
	  	  			  		  	  			led_green4 = 0;
	  	  			  		  	  			count_green4 = 7;
	  	  			  		  	  		}
	  	  			  		  	  		break;
	  	  			  		  	  case 0:
	  	  			  		  	  		HAL_GPIO_WritePin ( LED_GREEN4_GPIO_Port , LED_GREEN4_Pin , SET ) ;
	  	  			  		  	  		count_green4--;
	  	  			  		  	  		if ( count_green4 <= 0 ){
	  	  			  		  	  			led_green4 = 1;
	  	  			  		  	  			count_green4   = 3;
	  	  			  		  	  		}
	  	  			  		  	  	    break;
	  	  			  	 }

 }
