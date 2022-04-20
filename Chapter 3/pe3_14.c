/*
 * pe3_14.c
 *
 *  Created on: 27-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	int m, n;
	//m, n - Integer Values

	//Input Values
	printf("Enter 2 Integer Values to check: ");
	scanf("%d %d", &m, &n);
	printf("\n");

	//Checking & Result Print
	if(m%n && n%m)
	{
		printf("Neither of the values is a multiple of another");
	}
	else
	{
		printf("One of the Value is a multiple of another");
	}

	return 0;

	//End of Program
}
