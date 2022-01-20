/*
 * pe1_12.c
 *
 *  Created on: 10-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	float c1, c2, p1, p2, r, peri, area;

	/* c1 - x coordinate of Center of Circle
	 * c2 - y coordinate of Center of Circle
	 * p1 - x coordinate of a Point on Circumference
	 * p2 - y coordinate of a Point on Circumference
	 * r - Radius of Circle
	 * peri - Perimeter of Circle
	 * area - Area of Circle
	 */

	//Input Coordinates of Center & Given Point
	printf("Enter x & y coordinates of Center of Circle respectively: ");
	scanf("%f %f", &c1, &c2);
	printf("Enter x & y coordinates of Point on Circumference respectively: ");
	scanf("%f %f", &p1, &p2);

	//Computation of Radius of Circle
	r = sqrt(pow(p1-c1,2) + pow(p2-c2,2));

	//Computation of Perimeter & Area of Circle
	peri = 2 * PI * r;
	area = PI * r * r;

	//Result Print
	printf("\n");
	printf("Perimeter of Circle = %.2f\n", peri);
	printf("Area of Circle = %.2f", area);

	return 0;
}
