/*
 * pe1_15.c
 *
 *  Created on: 10-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	float x, y, sum, diff, mul, div;
	/*
	 * x - First Number
	 * y - Second Number
	 * sum - Addition of Numbers
	 * diff - Difference of Numbers
	 * mul - Multiplication of Numbers
	 * div - Division of Numbers
	 */

	//Input Numbers
	printf("Enter 2 Numbers for Calculation: ");
	scanf("%f %f", &x, &y);

	//Computation of Addition, Subtraction, Multiplication & Division
	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	//Result Print
	printf("\n");
	printf("x       = %7.2f    y          = %7.2f\n", x, y);
	printf("Sum     = %7.2f    Difference = %7.2f\n", sum, diff);
	printf("Product = %7.2f    Division   = %7.2f", mul, div);

	return 0;
}
