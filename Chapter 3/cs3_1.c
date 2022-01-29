/*
 * cs3_1.c
 *
 *  Created on: 19-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	int numcom_s;
	float salaryb, bonus, comm_ts, sales_p, salaryg, bonus_t, comm_t;
	/*
	 * numcom_s - No. of Computers Sold by the Sales Person
	 * salaryb - Base Salary of Sales Person
	 * bonus - Bonus on every computer sold
	 * comm_ts - Commission Percentage on Total Sales in that month
	 * sales_p - Sales Price of a Computer
	 * salaryg - Monthly Gross Salary of Sales Person
	 * bonus_t - Total Bonus Amount Earned
	 * comm_t - Total Commission Amount to be given
	 */

	//Reading Values of Variables
	printf("Enter Base Salary of Sales Person: ");
	scanf("%f", &salaryb);
	printf("Enter Bonus Amount to be given for every Computer Sold: ");
	scanf("%f", &bonus);
	printf("Enter Commission Percentage to be given on Total Monthly Sales: ");
	scanf("%f", &comm_ts);
	printf("Enter Sales Price of per Computer: ");
	scanf("%f", &sales_p);
	printf("How many Computers are sold by the Sales Person? ");
	scanf("%d", &numcom_s);

	//Calculation of Bonus, Commission & Gross Salary
	bonus_t = numcom_s * bonus;
	comm_t = numcom_s * sales_p * (comm_ts / 100);
	salaryg = salaryb + bonus_t + comm_t;

	//Result Print
	printf("\n");
	printf("Total Bonus Earned = Rs. %.2f\n", bonus_t);
	printf("Total Commission Earned = Rs. %.2f\n", comm_t);
	printf("Gross Salary = Rs. %.2f", salaryg);

	return 0;

	//End of Program
}
