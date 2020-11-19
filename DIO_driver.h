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



#endif /* DIO_DRIVER_H_ */
