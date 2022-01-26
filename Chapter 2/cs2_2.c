/*
 * cs2_2.c
 *
 *  Created on: 11-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>
#define TF_LOW 0
#define TF_HIGH 250
#define STEP 25

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variables
	float temp_c, temp_f;
	/*
	 * temp_c - Temperature in Celsius
	 * temp_f - Temperature in Fahrenheit
	 */

	//Temperature Initialization
	temp_f = TF_LOW;

	//Heading Printing
	printf("Fahrenheit    Celcius");
	printf("\n\n");

	//Computation & Result Print
	while(temp_f <= TF_HIGH)
	{
		temp_c = (temp_f - 32) / 1.8;

		printf("%8.2f      %6.2f", temp_f, temp_c);
		printf("\n");

		temp_f += STEP;
	}

	return 0;

	//End of Program
}


