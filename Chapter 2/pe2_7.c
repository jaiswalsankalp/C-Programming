/*
 * pe2_7.c
 *
 *  Created on: 18-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variables
	int x, y;
	short int z;

	//Reading values of x & y
	printf("Enter 2 Six Digit Numbers: ");
	scanf("%d %d", &x, &y);

	//z Calculation & Result Print
	z = x + y;

	printf("\n");
	printf("x = %d\ny = %d\nz = %hi", x, y, z);

	return 0;

	//End of Program
}
