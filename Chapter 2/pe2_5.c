/*
 * pe2_5.c
 *
 *  Created on: 18-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variables
	float sugar_p, rice_p;
	/*
	 * sugar_p - Price of per Kg of Sugar
	 * rice_p - Price of per Kg of Rice
	 */

	//Reading Prices
	printf("Enter Per Kg Price of Sugar: ");
	scanf("%f", &sugar_p);
	printf("Enter per Kg Price of Rice: ");
	scanf("%f", &rice_p);

	//Output Print
	printf("\n");
	printf("***LIST OF ITEMS***\n");
	printf("Item     Price\n");
	printf("Rice     Rs %.2f\n", rice_p);
	printf("Sugar    Rs %.2f", sugar_p);

	return 0;

	//End of Program
}
