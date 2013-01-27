/*
 * main.cpp
 *
 *  Created on: Oct 28, 2012
 *      Author: nemo
 */


#include <inttypes.h>
#include <Arduino.h>

#include "PCF8574_LCD/PCF8574_LCD.cpp"

/*
#define	SYNC	13
#define SDA 	7
#define	SCL 	6

void sendBit(uint8_t);
void sendByte(uint8_t);
void sendSync(void);
void sendStart(void);
uint8_t test9bit(void);
*/
int main(void){

	init();

/*
	pinMode(SYNC, OUTPUT);
	pinMode(SDA, INPUT);
	pinMode(SCL, OUTPUT);
*/

	Serial.begin(9600);

	PCF8574_LCD lcd;

	//lcd.begin();

	digitalWrite(SDA, HIGH);
	digitalWrite(SCL, HIGH);
	while(1){

		sendSync();
/*
		pinMode(SDA, OUTPUT);

		sendStart();

		sendByte(0x40);

		err = test9bit();

		if(err == true){
			pinMode(SDA, OUTPUT);
			sendStart();
			sendByte(0xAA);
			err = test9bit();
		}

*/
		lcd.write((uint8_t)0xAA);
		//Serial.println("1");
		delay(20);
	}

	Serial.print("AAAA\n");

	lcd.print(0x23);

	while(1);

	return 0;
}
/*
void sendBit(uint8_t bit){
	if (bit == 0){
		digitalWrite(SDA, LOW);
		digitalWrite(SCL, HIGH);
		digitalWrite(SCL, LOW);
	}
	else{
		digitalWrite(SDA, HIGH);
		digitalWrite(SCL, HIGH);
		digitalWrite(SCL, LOW);
	}
}

void sendSync(void){
	digitalWrite(SYNC, HIGH);
	digitalWrite(SYNC, LOW);
}

void sendStart(void){
	digitalWrite(SDA, LOW);
	digitalWrite(SCL, LOW);
}


void sendByte(uint8_t byte){
	int i;

	for(i=7; i>=0; i--){
		sendBit((byte>>i)&0x1);
	}
}


uint8_t test9bit(void){

	digitalWrite(SDA, LOW);
	digitalWrite(SCL, HIGH);
	pinMode(SDA, INPUT);
	delay(1);

	if(digitalRead(SDA) == 0){
		return true;
	}
	else{
		return false;
	}
}
*/
