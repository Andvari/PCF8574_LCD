/*
 * main.cpp
 *
 *  Created on: Oct 28, 2012
 *      Author: nemo
 */


#include <inttypes.h>
#include <Arduino.h>

#include "PCF8574_LCD/PCF8574_LCD.cpp"

int main(void){

	init();

	Serial.begin(9600);

	PCF8574_LCD lcd;

	lcd.begin();

	Serial.print("AAAA\n");

	lcd.print(0x23);

	while(1);

	return 0;
}

