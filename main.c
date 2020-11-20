/*
 * main.c
 *
 *  Created on: Nov 20, 2020
 *      Author: aliaa
 */

#include <stdlib.h>
#include <stdio.h>
#include "DIO_driver.h"
int main(){
	makeInput(&myDDRB,0);
	makeOutput(&myDDRB,1);
	turnOnPullUP(&myPORTB,0);

	while(1){

		if(readInput(&myPORTB,0)==0){
			outputHigh(&myPORTB,1);

		}
		else{
			outputLow(&myPORTB,1);
		}
	}

	return 0;
}
