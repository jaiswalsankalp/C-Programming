/*
 * pe3_10.c
 *
 *  Created on: 27-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>
#include <math.h>
#define MIN 0.01 //Minimum Value of C
#define MAX 0.1 //Maximum Value of C
#define STEP 0.01 //Step Value of C for Calculation

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	float l, r, c, freq;
	/*
	 * l - Inductance of Given Electrical Circuit
	 * r - Resistance of Given Electrical Circuit
	 * c - Capacitance
	 * freq - Damped Natural Frequency
	 */

	//Reading Values of L & R
	printf("Enter Values of Inductance & Resistance respectively of Given Electrical Circuit: ");
	scanf("%f %f", &l, &r);

	//Calculation of Frequency & Result Print
	c = MIN;

	printf("\n");
	printf("Values of C      Corresponding Value of Frequency\n");

	while(c <= MAX)
	{
		freq = sqrt(1 / (l * c) - (r * r) / (4 * c * c));

		printf("    %.2f                       %.2f\n", c, freq);

		c += STEP;
	}

	return 0;

	//End of Program
}
