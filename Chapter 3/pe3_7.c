/*
 * pe3_7.c
 *
 *  Created on: 21-Jan-2022
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

	//Result Print
	printf("\n");
	printf("%d %9.2f %5d", (int)num+1, num, (int)num);

	return 0;

	//End of Program
}
