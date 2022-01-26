/*
 * pe2_4.c
 *
 *  Created on: 17-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variables
	float a, b, div;
	/*
	 * a - First Number
	 * b - Second Number
	 * div - Division of First by Second
	 */

	//Reading 2 Numbers
	printf("Enter 2 Floating Point Numbers: ");
	scanf("%f %f", &a, &b);

	//Computation & Result Print
	div = a / b;

	printf("\n");
	printf("%.2f / %.2f = %.2f", a, b, div);

	return 0;

	//End of Program
}
