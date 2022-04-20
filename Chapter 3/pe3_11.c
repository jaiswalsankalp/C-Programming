/*
 * pe3_11.c
 *
 *  Created on: 27-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	int num, sum=0;
	/*
	 * num - Given Positive Integer Number
	 * sum - Sum of it's Digits
	 */

	//Input Number
	printf("Enter a positive Integer Number: ");
	scanf("%d", &num);

	//Computation
	while(num != 0)
	{
		sum += num % 10;
		num = num / 10;
	}

	//Result print
	printf("\n");
	printf("Sum of Digits of Given Integer = %d", sum);

	return 0;

	//End of Program
}
