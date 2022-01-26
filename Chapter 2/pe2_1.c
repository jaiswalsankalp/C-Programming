/*
 * pe2_1.c
 *
 *  Created on: 17-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variables
	int n, count=1;
	float sum=0;
	/*
	 * n - No. of Terms in Series
	 * sum - Sum of HP
	 * count - Count Variable
	 */

	//Reading Value on n - No. of Terms
	printf("How many terms are there in given series? - ");
	scanf("%d", &n);

	//Calculation of Sum
	while(count <= n)
	{
		sum += 1.0 / count;
		count++;
	}

	//Result Print
	printf("\n");
	printf("Sum of given HP of %d terms = %.2f", n, sum);

	return 0;

	//End of Program
}
