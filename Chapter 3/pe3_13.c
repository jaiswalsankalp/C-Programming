/*
 * pe3_13.c
 *
 *  Created on: 27-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	float a, b, c, lar;
	/*
	 * a,b,c - Three Real Values
	 * lar - Largest Value out of them
	 */

	//Input Values
	printf("Enter 3 Values one by one: ");
	scanf("%f %f %f", &a, &b, &c);

	//Finding Largest Value & Printing Result
	lar = (a>b && a>c) ? a : (b>c ? b : c);

	printf("\n");
	printf("Largest Value is %.2f", lar);

	return 0;

	//End of Program
}
