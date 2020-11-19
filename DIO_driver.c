/*
 * DIO_driver.c
 *
 *  Created on: Nov 19, 2020
 *      Author: aliaa
 */
#include<DIO_driver.h>
void makeOutput(reg,pin){
	setBit(reg,pin);
}

void makeInput(reg,pin){
	clearBit(reg,pin);
}
void outputHigh(reg,pin){
	setBit(reg,pin);
}
void outputLow(reg,pin){
	clearBit(reg,pin);
}

char readInput(reg,pin){
	if (readBit(reg,pin)>1){
		return 1;
	}
	else{
	return 0 ;
	}
}
void turnOnPullUP(reg,pin){
	setBit(reg,pin);
}
void turnOffPullUP(reg,pin){
	clearBit(reg,pin);
}
