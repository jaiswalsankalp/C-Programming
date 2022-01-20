/*
 * pe1_13.c
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

	float x1, x2, y1, y2, area, r;
	/*
	 * x1 - x coordinate of 1st end of diameter
	 * y1 - y coordinate of 1st end of diameter
	 * x2 - x coordinate of 2nd end of diameter
	 * y2 - y coordinate of 2nd end of diameter
	 * area - Area of Circle
	 * r - Radius of Circle
	 */

	//Input Coordinates of Ends of Diameter
	printf("Enter x & y coordinates of First End of Diameter respectively: ");
	scanf("%f %f", &x1, &y1);
	printf("Enter x & y coordinates of Second End of Diameter rspectively: ");
	scanf("%f %f", &x2, &y2);

	//Computation of Radius of circle
	r = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

	//Computation of Area of Circle
	area = PI * r * r;

	//Result Print
	printf("\n");
	printf("Area of Circle = %.2f square units", area);

	return 0;
}
