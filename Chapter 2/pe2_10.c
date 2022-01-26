/*
 * pe2_10.c
 *
 *  Created on: 18-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>
#define PI 3.1416

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	float r, vol;
	/*
	 * r - Radius of Sphere
	 * vol - Volume of Sphere
	 */

	//Input value of radius
	printf("Enter value of Radius of Sphere: ");
	scanf("%f", &r);

	//Volume Computation & Result Print
	vol = (4 * PI * r * r * r) / 3;

	printf("\n");
	printf("Volume of Sphere = %.2f cubic units", vol);

	return 0;

	//End of Program
}
