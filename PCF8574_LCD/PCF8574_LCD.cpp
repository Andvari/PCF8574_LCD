/*
 * PCF8574_LCD.cpp
 *
 *  Created on: Oct 28, 2012
 *      Author: nemo
 */


#include "PCF8574_LCD.h"

#define PCF8574_BASE_ADDRESS	0x27


PCF8574_LCD :: PCF8574_LCD(void){

}

void PCF8574_LCD :: begin(void){
/*
	write((uint8_t)0x30);
	delayMicroseconds(40);
	write((uint8_t)0x20);
	write((uint8_t)0x80);
	delayMicroseconds(40);
	write((uint8_t)0x20);
	write((uint8_t)0x80);
	delayMicroseconds(40);
	write((uint8_t)0x0);
	write((uint8_t)0xF0);
	delayMicroseconds(40);
	write((uint8_t)0x0);
	write((uint8_t)0x10);
	delay(2);
	write((uint8_t)0x0);
	write((uint8_t)0x40);
	delayMicroseconds(40);
*/

	while(1){
		write((uint8_t)0x0);
		//delay(1);
	}
}

void PCF8574_LCD :: write(uint8_t *){

}

void PCF8574_LCD :: write(uint8_t byte){
    Wire.beginTransmission(PCF8574_BASE_ADDRESS);
    Wire.write(byte);
    Wire.endTransmission(true);
}

void PCF8574_LCD :: print(uint8_t byte){
    Wire.beginTransmission(PCF8574_BASE_ADDRESS);
    //Wire.write(((byte << 4)&0xF0) | 1);
    //Wire.write((byte&0xF0) | 1);
    Wire.write(0xF1);
    Wire.write(0xF1);
    Wire.endTransmission(true);
}
