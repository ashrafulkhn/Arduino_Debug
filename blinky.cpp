/*
 *  blinky.cpp
 *  Arduino Debug using avr8-stub
 *  Created on: 03/01/2023
 *  Author: Ashraful Khan
 */
#include "Arduino.h"
#include "avr8-stub.h"
#include "app_api.h"

void setup(void)
{
	debug_init();	// initialize the debugger
	//breakpoint();   // stop execution here
	pinMode(13, OUTPUT);
	digitalWrite(13, HIGH);
	Serial.begin(9600);
}

void loop(void)
{
	//breakpoint();		// stop execution here
	digitalWrite(13, HIGH);
	Serial.println("Hello");
	delay(500);
	digitalWrite(13, LOW);
	delay(1000);
}
