/*
 * pe1_6.c
 *
 *  Created on: 10-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	int num, i=1;

	printf("Which Numbers Table do you want? ");
	scanf("%d", &num);
	printf("\n");

	while(i <= 10)
	{
		printf("%d  x  %-2d  =  %d\n", num, i, num*i);

		i++;
	}

	return 0;
}
