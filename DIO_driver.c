/*
 * DIO_driver.c
 *
 *  Created on: Nov 19, 2020
 *      Author: aliaa
 */
#include "DIO_driver.h"
#include <stdlib.h>
#include <stdio.h>

void makeOutput(unsigned char reg,char pin){
	setBit(reg,pin);
}

void makeInput(unsigned char reg,char pin){
	clearBit(reg,pin);
}
void outputHigh(unsigned char reg,char pin){
	setBit(reg,pin);
}
void outputLow( unsigned char reg,char pin){
	clearBit(reg,pin);
}

char readInput(unsigned char reg,char pin){
	if (readBit(reg,pin)>1){
		return 1;
	}
	else{
	return 0 ;
	}
}
void turnOnPullUP( unsigned char reg,char pin){
	setBit(reg,pin);
}
void turnOffPullUP( unsigned char reg,char pin){
	clearBit(reg,pin);
}
