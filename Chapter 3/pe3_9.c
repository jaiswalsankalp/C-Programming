/*
 * pe3_9.c
 *
 *  Created on: 24-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>
#include <math.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	int demr;
	float setup_c, holding_c, eoq, tbo;
	/*
	 * demr - Demand Rate
	 * setup_c - Set Up Costs per unit time
	 * holding_c - Holding Cost per item per unit time
	 * eoq - Economic Order Quantity for an item
	 * tbo - Optimal Time Between Orders
	 */

	//Input Values
	printf("Enter Demand Rate (items per unit time): ");
	scanf("%d", &demr);
	printf("Enter SetUp Cost per Order: ");
	scanf("%f", &setup_c);
	printf("Enter Holding Cost (per item per unit time): ");
	scanf("%f", &holding_c);

	//Calculation of EOQ & TBO
	eoq = sqrt((2 * demr * setup_c) / holding_c);
	tbo = sqrt((2 * setup_c) / (demr * holding_c));

	//Result Print
	printf("\n");
	printf("For Given Inventory:\n");
	printf("EOQ = %.2f\n", eoq);
	printf("TBO = %.2f", tbo);

	return 0;

	//End of Program
}
