/*
 * pe1_11.c
 *
 *  Created on: 10-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>
#include <math.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	float x1, x2, y1, y2, dist;

	printf("Enter x coordinate of First Point: ");
	scanf("%f", &x1);
	printf("Enter y coordinate of First Point: ");
	scanf("%f", &y1);
	printf("Enter x coordinate of Second Point: ");
	scanf("%f", &x2);
	printf("Enter y coordinate of Second Point: ");
	scanf("%f", &y2);

	dist = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

	printf("\n");
	printf("Distance between given 2 points is %.2f units", dist);

	return 0;
}
