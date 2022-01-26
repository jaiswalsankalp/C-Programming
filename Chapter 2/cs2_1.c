/*
 * CS2_1.c
 *
 *  Created on: 11-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	int num_count=0;
	float num, avg, sum=0;
	/*
	 * num_count - Count number of Entries in Set
	 * num - Number Entered
	 * sum - Sum of all Numbers
	 * avg - Average of all Numbers
	 */

	//Reading 1st Number of Set
	printf("Enter Numbers of Given Set one by one or Enter 0 at the end: ");
	scanf("%f", &num);

	//Message Print for Empty Set
	if(num==0)
	{
		printf("\n");
		printf("Oops! Given Set must have at least one non-zero value for Calculation");
	}

	//Reading Continues
	else
	{
		do
		{
			sum += num;
			num_count++;

			scanf("%f", &num);
		}
		while(num!=0);

		//Message Print for a Set with Single Entry
		if(num_count==1)
		{
			printf("\n");
			printf("Oh! Given Set has only one value so Number itself is the average");
		}

		//Average Calculation & Result Print
		else
		{
			avg = sum / num_count;

			printf("\n");
			printf("Average of Numbers of Given Set is %.2f", avg);
		}
	}

	return 0;

	//End of Program
}
