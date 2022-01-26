/*
 * pe2_8.c
 *
 *  Created on: 18-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variables
	float a,b;
	int c;

	//Reading Numbers
	printf("Enter 2 floating point numbers: ");
	scanf("%f %f", &a, &b);

	//c Calculation & Result Print
	c = a + b;

	printf("\n");
	printf("Numbers - %.2f, %.2f\n", a, b);
	printf("c = %d", c);

	return 0;

	//End of Program
}
