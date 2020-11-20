/*
 * DIO_driver.c
 *
 *  Created on: Nov 19, 2020
 *      Author: aliaa
 */
#include <stdlib.h>
#include <stdio.h>

#define setBit(port,pin) (port|=(1<<pin))
#define clearBit(port,pin) (port&= ~(1<<pin))
#define toggleBit(port,pin) (port^=(1<<pin))
#define readBit(port,pin) (port&(1<<pin))

void makeOutput( char* reg,unsigned char pin){
	setBit(*reg,pin);
}

void makeInput( char* reg,unsigned char pin){
	clearBit(*reg,pin);
}
void outputHigh( char* reg,unsigned char pin){
	setBit(*reg,pin);
}
void outputLow( char* reg,unsigned char pin){
	clearBit(*reg,pin);
}

char readInput( char* reg, unsigned char pin){
	if (readBit(*reg,pin)>1){
		return 1;
	}
	else{
	return 0 ;
	}
}
void turnOnPullUP( char* reg,unsigned char pin){
	setBit(*reg,pin);
}
void turnOffPullUP( char* reg,unsigned char pin){
	clearBit(*reg,pin);
}
