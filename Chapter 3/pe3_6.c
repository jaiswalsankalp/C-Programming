/*
 * pe3_6.c
 *
 *  Created on: 21-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	float pur_pr, year_s, sal_v, depreciation;
	/*
	 * depreciation - Annual Depreciation of the Value of an Item
	 * pur_pr - Purchase Price
	 * sal_v - Salvage Value
	 * year_s - Years of Service
	 */

	//Reading Values of Given Variables
	printf("Enter Annual Depreciation of the Value of Item: ");
	scanf("%f", &depreciation);
	printf("Enter Purchase Price of Item: ");
	scanf("%f", &pur_pr);
	printf("Enter No. of Years of Service of Item: ");
	scanf("%f", &year_s);

	//Calculation of Salvage Value
	sal_v = pur_pr - depreciation * year_s;

	//Result Print
	printf("\n");
	printf("Salvage Value of Given Item = %.2f", sal_v);

	return 0;

	//End of Program
}
