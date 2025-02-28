/*
 * Ex9,10.h
 *
 *  Created on: Oct 1, 2024
 *      Author: ADMIN
 */

#ifndef INC_EX9_10_H_
#define INC_EX9_10_H_

#include "main.h"

int shift=0;
const int MAX_LED_MATRIX = 8;
int index_led_matrix=0;
uint8_t matrix_buffer[8] = {
	    0xFF, //
	    0x03, //
	    0x01, //
	    0xCC, //
	    0xCC, //
	    0x01, //
	    0x03, //
	    0xFF  //
	};

const int16_t row_pin[8]={
		ROW0_Pin,
		ROW1_Pin,
		ROW2_Pin,
		ROW3_Pin,
		ROW4_Pin,
		ROW5_Pin,
		ROW6_Pin,
		ROW7_Pin
};
void updaterow(uint8_t data){
    for( uint8_t i=0; i< 8; i++){
    	HAL_GPIO_WritePin(GPIOB, row_pin[i], (data>>i)&0x01);
    }
}
void init_state(){
	shift=0;
	  HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
	  HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
	  HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
	  HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
	  HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
	  HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
	  HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
	  HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
	    for( uint8_t i=0; i< 8; i++){
	    	HAL_GPIO_WritePin(GPIOB, row_pin[i], 0);
	    }

}
void updateLEDMatrix (int index){
	switch (index) {
		case 0:
            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, RESET);
            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
            updaterow(matrix_buffer[index]);
			break;
		case 1:
            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, 	SET);
            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
            updaterow(matrix_buffer[index]);
			break;
		case 2:
            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, SET);
            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
            updaterow(matrix_buffer[index]);
            break;
		case 3:
            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, SET);
            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
            updaterow(matrix_buffer[index]);
            break;
		case 4:
            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, SET);
            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
            updaterow(matrix_buffer[index]);
            break;
		case 5:
            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, SET);
            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
            updaterow(matrix_buffer[index]);
            break;
		case 6:
            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, SET);
            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
            updaterow(matrix_buffer[index]);
            break;

		case 7:
            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, SET);
            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);
            updaterow(matrix_buffer[index]);
            break;
		default:
			break;
	}
}

void updateshift(){
	shift++;
}
void updateLEDMatrix_shift (int index){
	int realshift= (index+shift)%8;
	switch (index) {
			case 0:
	            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, RESET);
	            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
	            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
	            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
	            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
	            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
	            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
	            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
	            updaterow(matrix_buffer[realshift]);
				break;
			case 1:
	            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, 	SET);
	            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
	            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
	            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
	            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
	            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
	            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
	            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
	            updaterow(matrix_buffer[realshift]);
				break;
			case 2:
	            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, SET);
	            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
	            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
	            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
	            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
	            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
	            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
	            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
	            updaterow(matrix_buffer[realshift]);
	            break;
			case 3:
	            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, SET);
	            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
	            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
	            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
	            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
	            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
	            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
	            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
	            updaterow(matrix_buffer[realshift]);
	            break;
			case 4:
	            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, SET);
	            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
	            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
	            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
	            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
	            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
	            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
	            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
	            updaterow(matrix_buffer[realshift]);
	            break;
			case 5:
	            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, SET);
	            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
	            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
	            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
	            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
	            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
	            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
	            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
	            updaterow(matrix_buffer[realshift]);
	            break;
			case 6:
	            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, SET);
	            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
	            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
	            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
	            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
	            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
	            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
	            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
	            updaterow(matrix_buffer[realshift]);
	            break;

			case 7:
	            HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, SET);
	            HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
	            HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
	            HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
	            HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
	            HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
	            HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
	            HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);
	            updaterow(matrix_buffer[realshift]);
	            break;
			default:
				break;
		}
}


#endif /* INC_EX9_10_H_ */
