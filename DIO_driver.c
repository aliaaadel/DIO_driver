/*
 * DIO_driver.c
 *
 *  Created on: Nov 19, 2020
 *      Author: aliaa
 */
#include<DIO_driver.h>
void makeOutput(port,pin){
	setBit(port,pin);
}

void makeInput(port,pin){
	clearBit(port,pin);
}
void outputHigh(port,pin){
	setBit(port,pin);
}
void outputLow(port,pin){
	clearBit(port,pin);
}


