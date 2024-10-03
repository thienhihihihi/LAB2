/*
 * Ex1_2.c
 *
 *  Created on: Oct 1, 2024
 *      Author: ADMIN
 */

#include "Ex1_2.h"
#include "main.h"
#include "software_timer.h"

void display7SEG(int num){
	if(num==0) {
		HAL_GPIO_WritePin(SEG_6_GPIO_Port,SEG_6_Pin, SET);
		HAL_GPIO_WritePin(SEG_0_GPIO_Port,SEG_0_Pin,RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port,SEG_1_Pin,RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port,SEG_2_Pin,RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port,SEG_3_Pin,RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port,SEG_4_Pin,RESET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port,SEG_5_Pin,RESET);





	}
	if(num==1){
		HAL_GPIO_WritePin(SEG_0_GPIO_Port,SEG_0_Pin, SET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port,SEG_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port,SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port,SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port,SEG_6_Pin, SET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port,SEG_1_Pin,RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port,SEG_2_Pin,RESET);


	}
	if(num==2){

		HAL_GPIO_WritePin(SEG_2_GPIO_Port,SEG_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port,SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_0_GPIO_Port,SEG_0_Pin,RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port,SEG_1_Pin,RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port,SEG_3_Pin,RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port,SEG_4_Pin,RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port,SEG_6_Pin,RESET);




	}
	if(num==3) {
		HAL_GPIO_WritePin(SEG_4_GPIO_Port,SEG_4_Pin, SET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port,SEG_5_Pin, SET);
				HAL_GPIO_WritePin(SEG_0_GPIO_Port,SEG_0_Pin,RESET);
				HAL_GPIO_WritePin(SEG_1_GPIO_Port,SEG_1_Pin,RESET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port,SEG_2_Pin,RESET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port,SEG_6_Pin,RESET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port,SEG_3_Pin,RESET);


	}

	if(num==4) {
		HAL_GPIO_WritePin(SEG_0_GPIO_Port,SEG_0_Pin, SET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port,SEG_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port,SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port,SEG_1_Pin,RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port,SEG_2_Pin,RESET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port,SEG_5_Pin,RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port,SEG_6_Pin,RESET);



	}
	if(num==5) {
		HAL_GPIO_WritePin(SEG_1_GPIO_Port,SEG_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port,SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_0_GPIO_Port,SEG_0_Pin,RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port,SEG_2_Pin,RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port,SEG_3_Pin,RESET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port,SEG_5_Pin,RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port,SEG_6_Pin,RESET);



	}
	if(num==6) {
		HAL_GPIO_WritePin(SEG_1_GPIO_Port,SEG_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_0_GPIO_Port,SEG_0_Pin,RESET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port,SEG_2_Pin,RESET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port,SEG_3_Pin,RESET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port,SEG_5_Pin,RESET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port,SEG_6_Pin,RESET);
				HAL_GPIO_WritePin(SEG_4_GPIO_Port,SEG_4_Pin,RESET);


	}
	if(num==7) {
		HAL_GPIO_WritePin(SEG_3_GPIO_Port,SEG_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port,SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port,SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port,SEG_6_Pin, SET);
		HAL_GPIO_WritePin(SEG_0_GPIO_Port,SEG_0_Pin,RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port,SEG_1_Pin,RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port,SEG_2_Pin,RESET);


	}
	if(num==8){
		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
	}
	if(num==9){
		HAL_GPIO_WritePin(SEG_4_GPIO_Port,SEG_4_Pin, SET);
		 HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);

				    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);

	}
}



void SEG_1() {

					HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
				 		  			  			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
				 		  			  			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
				 		  			  			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);



}
void SEG_2(){
	  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
				 		  			  	  	  	  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
				 		  			  	  	  	  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
				 		  			  	  	  	  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);


}
void SEG_3(){
	  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
			  		  			  			 			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			  		  			  			 			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
			  		  			  			 		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);


}
void SEG_4(){

	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		  		  		  			  			 			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
			  		  		  			  			 			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
			  		  		  			  			 		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);

}


void Intial(){

							HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
				 		  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
				 		  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
				 		  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
				 		  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				 		  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				 		  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);


}
