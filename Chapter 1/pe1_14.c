/*
 * pe1_14.c
 *
 *  Created on: 10-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	float a, b, c;
	/*
	 * a - Coordinate of x
	 * b - Coordinate of y
	 * c - Constant
	 */

	//Input Coordinates & Constant
	printf("Enter Coordinates of x & y of Given Equation: ");
	scanf("%f %f", &a, &b);
	printf("Enter value of Constant: ");
	scanf("%f", &c);

	//Result Print
	printf("\n");
	printf("Equation of Line is %.2fx + %.2fy = %.2f", a, b, c);

	return 0;
}
