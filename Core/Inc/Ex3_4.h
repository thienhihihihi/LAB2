/*
 * Ex3_4.h
 *
 *  Created on: Oct 1, 2024
 *      Author: ADMIN
 */

#ifndef INC_EX3_4_H_
#define INC_EX3_4_H_


#include "main.h"
const int MAX_LED = 4;
 int index_led = 0;
  int led_buffer [4] = {1 , 2 , 3 , 4};
  int hour = 15 , minute = 8 , second = 50;
  void update7SEG(int index) {
      switch (index) {
          case 0:
              // Display the first 7SEG with led_buffer[0]
          	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
          			  			  			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
          			  			  			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
          			  			  			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
          			  			  			HAL_GPIO_WritePin(DOT_GPIO_Port,DOT_Pin, RESET);


          	display7SEG(led_buffer[0]);
              break;
          case 1:
              // Display the second 7SEG with led_buffer[1]

          	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
          			  			  			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
          			  			  			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
          			  			  			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);


          	display7SEG(led_buffer[1]);

              break;
          case 2:
          	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
          			  			  			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
          			  			  			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
          			  			  			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);


              // Display the third 7SEG with led_buffer[2]

          	display7SEG(led_buffer[2]);

              break;
          case 3:
              // Display the fourth 7SEG with led_buffer[3]
          	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
          			  			  			  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
          			  			  			  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
          			  			  			  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
          			  			  		HAL_GPIO_WritePin(DOT_GPIO_Port,DOT_Pin, SET);

          	display7SEG(led_buffer[3]);

              break;
          default:
              break;
      }
  }

  void updateClockBuffer() {
      // Hiển thị giờ trên hai đoạn đầu tiên



      led_buffer[0] = hour / 10;  // Chữ số hàng chục của giờ
      led_buffer[1] = hour % 10;  // Chữ số hàng đơn vị của giờ

      // Hiển thị phút trên hai đoạn cuối
      led_buffer[2] = minute / 10;  // Chữ số hàng chục của phút
      led_buffer[3] = minute % 10;  // Chữ số hàng đơn vị của phút
  }


#endif /* INC_EX3_4_H_ */
