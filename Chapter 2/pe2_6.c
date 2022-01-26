/*
 * pe2_6.c
 *
 *  Created on: 18-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variables
	int num, pos_num=0, neg_num=0;
	/*
	 * num - A number in given Set
	 * pos_num - Positive Numbers Count
	 * neg_num - Negative Numbers Count
	 */

	//Reading Numbers of Set & Counting Positive/Negative Numbers
	printf("Enter all the Numbers of Given Set & Enter 0 at the end: ");

	do
	{
		scanf("%d", &num);

		if(num > 0)
		{
			pos_num++;
		}
		else if(num < 0)
		{
			neg_num++;
		}
	}
	while(num != 0);

	//Result Print
	printf("\n");

	if(pos_num == 0 && neg_num == 0)
	{
		printf("Oops! It's an Empty Set");
	}
	else
	{
		printf("Total Numbers in Given Set: %d\n", pos_num + neg_num);
		printf("Number of Negative Numbers: %d\n", neg_num);
		printf("Number of Positive Numbers: %d", pos_num);
	}

	return 0;

	//End of Program
}
