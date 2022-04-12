/*
 * pe3_3.c
 *
 *  Created on: 20-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	float num;

	//Input Number
	printf("Enter a Floating Point Number: ");
	scanf("%f", &num);

	//Determining Required Digits
	num = (int)num % 100;

	//Result Print
	printf("\n");
	printf("Two Right Most Digits of the Integral Part of Given Floating Point Number is : %d", (int)num);

	return 0;

	//End of Program
}
