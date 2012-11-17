/*
 * PCF8574_LCD.h
 *
 *  Created on: Oct 28, 2012
 *      Author: nemo
 */

#ifndef PCF8574_LCD_H_
#define PCF8574_LCD_H_

#include <Arduino.h>
#include <inttypes.h>
#include <Wire.h>

class PCF8574_LCD{
public:
	PCF8574_LCD(void);

	void begin(void);

	void write(uint8_t);
	void write(uint8_t *);

	void print(uint8_t);


private:
	TwoWire Wire;

};

#endif /* PCF8574_LCD_H_ */
