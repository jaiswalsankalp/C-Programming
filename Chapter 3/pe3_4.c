/*
 * pe3_4.c
 *
 *  Created on: 20-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	float l, b, area, perimeter;
	/*
	 * l - Length of Rectangle
	 * b - Breadth of Rectangle
	 * area - Area of Rectangle
	 * perimeter - Perimeter of Rectangle
	 */

	//Reading Length & Breadth of Rectangle
	printf("Enter Length & Breadth of Rectangle respectively: ");
	scanf("%f %f", &l, &b);

	//Computation of Area & Perimeter
	perimeter = 2 * (l + b);
	area = l * b;

	//Result Print
	printf("\n");
	printf("Length = %.2f units, Breadth = %.2f units\n", l, b);
	printf("Area of Rectangle = %.2f square units\n", area);
	printf("Perimeter of Rectangle = %.2f units", perimeter);

	return 0;

	//End of Program
}
