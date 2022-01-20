/*
 * pe1_10.c
 *
 *  Created on: 10-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>
#include <math.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	float a, b, c, s, area;

	printf("Enter values of 3 sides of Triangle: ");
	scanf("%f %f %f", &a, &b, &c);

	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s -c));

	printf("\n");
	printf("Area = %.2f Square Units", area);

	return 0;
}
