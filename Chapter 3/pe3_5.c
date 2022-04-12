/*
 * pe3_5.c
 *
 *  Created on: 20-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>
#include <math.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	int num, count=1;
	/*
	 * num - Number Given
	 * count - Variable for Counting No. of Digits in Given Number
	 */

	//Read an Integer Number
	printf("Enter an Integer Number: ");
	scanf("%d", &num);

	//Counting No. of Digits in Given Integer
	while(num/(int)pow(10,count) != 0)
	{
		count++;
	}

	//Printing of Number as Required
	printf("\n");

	for(; count>0; count--)
	{
		printf("%d", num % (int)pow(10,count));
		printf("\n");
	}

	return 0;

	//End of Program
}
