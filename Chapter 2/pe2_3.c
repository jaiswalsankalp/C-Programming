/*
 * pe2_3.c
 *
 *  Created on: 17-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>
#define MAX 20

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variables
	int count;

	//Heading Print
	printf("Even Numbers in Given Range are: \n");

	//Testing & Printing
	for(count=1; count<=MAX; count++)
	{
		if(count%2 == 0)
		{
			printf("%d", count);
			printf("\n");
		}
	}

	return 0;

	//End of Program
}
