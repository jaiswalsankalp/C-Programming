/*
 * pe2_2.c
 *
 *  Created on: 17-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variables
	int price_p;
	float price_r;

	//Reading price of item in Rupee
	printf("Enter Price of an item in Rupee: ");
	scanf("%f", &price_r);

	//Rupee to Paise Conversion
	price_p = price_r * 100;

	//Result Print
	printf("\n");
	printf("%.2f Rupees in Paise = %d Paise", price_r, price_p);

	return 0;

	//End of Program
}
