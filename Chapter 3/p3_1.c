/*
 * p3_1.c
 *
 *  Created on: 18-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	int days, months, years, days_g;
	/*
	 * days_g - No. of Days Given
	 * days - No. of Days after Conversion
	 * months - No. of Months after Conversion
	 * years - No. of Years after Conversion
	 */

	//Reading No. of Days Given
	printf("Enter No. of Days to Convert: ");
	scanf("%d", &days_g);

	//Conversion to YMD
	years = days_g / 365;
	months = (days_g % 365) / 30;
	days = (days_g % 365) % 30;

	//Result Print
	printf("\n");
	printf("%d Days in YMD - %d Year(s) %d Month(s) %d Day(s)", days_g, years, months, days);

	return 0;

	//End of Program
}
