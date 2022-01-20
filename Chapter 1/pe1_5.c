/*
 * pe1_5.c
 *
 *  Created on: 10-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>
#define PI 3.1416

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	float rad, area;

	printf("Enter the value of Radius: ");
	scanf("%f", &rad);

	area = PI * rad * rad;

	printf("\n");
	printf("Area of Given Circle with Radius %.2f units is %.2f square units", rad, area);

	return 0;
}
