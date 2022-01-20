/*
 * pe1_7.c
 *
 *  Created on: 10-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	int a, b, sum, diff;

	printf("Enter 2 Integers: ");
	scanf("%d %d", &a, &b);
	printf("\n");

	sum = a + b;
	diff = a - b;

	printf("%d + %-4d = %d\n", a, b, sum);
	printf("%d - %-4d = %d", a, b, diff);

	return 0;
}
