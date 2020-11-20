/*
 * DIO_driver.h
 *
 *  Created on: Nov 19, 2020
 *      Author: aliaa
 */

#ifndef DIO_DRIVER_H_
#define DIO_DRIVER_H_

#define myDDRA (*((volatile unsigned char*)(0x3A)))
#define myPORTA (*((volatile unsigned char*)(0x3B)))
#define myPINA (*((volatile unsigned char*)(0x39)))


#define myDDRB (*((volatile unsigned char*)(0x37)))
#define myPORTB (*((volatile unsigned char*)(0x38)))
#define myPINB (*((volatile unsigned char*)(0x36)))

#define myDDRC (*((volatile unsigned char*)(0x34)))
#define myPORTC (*((volatile unsigned char*)(0x35)))
#define myPINC (*((volatile unsigned char*)(0x33)))


void makeOutput( char* reg,unsigned char pin);
void makeInput( char* reg,unsigned char pin);
void outputLow( char* reg,unsigned char pin);
void outputHigh( char* reg,unsigned char pin);
char readInput( char* reg,unsigned char pin);
void turnOnPullUP(  char* reg,unsigned char pin);
void turnOffPullUP(  char* reg,unsigned char pin);





#endif /* DIO_DRIVER_H_ */
