/*
 * cs3_2.c
 *
 *  Created on: 19-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>
#include <math.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	float a, b, c,det, root1, root2;
	/*
	 * a - Coefficient of x2
	 * b - coefficient of x
	 * c - Constant
	 * det - Determinant of Quadratic Equation
	 * root1, root2 - Roots of Quadratic Equation
	 */

	//Reading Values of Coefficients
	printf("Enter Values of Coefficients of x2, x & Constant respectively of Quadratic Equation of the form ax2+bx+c=0: ");
	scanf("%f %f %f", &a, &b, &c);
	printf("\n");

	//Calculation of Determination & Roots and Result Print
	det = b * b - 4 * a * c;

	if(det < 0)
	{
		printf("Given Quadratic Equation has Imaginary Roots");
	}
	else if(det == 0)
	{
		root1 = root2 = -b / (2 * a);

		printf("Given Quadratic Equation has Equal Roots\n");
		printf("Roots are %.2f & %.2f", root1, root2);
	}
	else
	{
		root1 = (-b + sqrt(det)) / (2 * a);
		root2 = (-b - sqrt(det)) / (2 * a);

		printf("Given Quadratic Equation has 2 Distinct Roots\n");
		printf("Roots are %.2f, %.2f", root1, root2);
	}

	return 0;

	//End of Program
}
