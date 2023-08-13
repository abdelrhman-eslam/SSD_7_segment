/*
 * main.c
 *
 *  Created on: Aug 13, 2023
 *      Author: ENG.AbdelrhmanEslam
 */

#include "../HAL/7_segment/7_segment_int.h"
#include "../MCAL/DIO/DIO.h"


void main() {

	HSSD_voidInit(0);
	HSSD_voidInit(1);
	u8 LA_itiration=1;

	while(1){
		HSSD_voidCountUp(0,Zero);
		HSSD_VoidDisplayNumber(1,LA_itiration);
		LA_itiration++;
		if (LA_itiration==10) 	LA_itiration=0;
	}

}
