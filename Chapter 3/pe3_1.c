/*
 * pe3_1.c
 *
 *  Created on: 20-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	float x, y, z, temp;
	/*
	 * x, y, z - Given Variables
	 * temp - Temporary Variable used for Rotation
	 */

	//Reading values of Variables
	printf("Enter Values of Variables x, y & z: ");
	scanf("%f %f %f", &x, &y, &z);

	//Values Rotation
	temp = x;
	x = y;
	y = z;
	z = temp;

	//Result Print
	printf("\n");
	printf("New Values of -\n");
	printf("x = %.2f, y = %.2f, z = %.2f", x, y, z);

	return 0;

	//End of Program
}
