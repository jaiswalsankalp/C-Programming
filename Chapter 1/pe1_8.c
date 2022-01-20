/*
 * pe1_8.c
 *
 *  Created on: 10-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	int a, b, c;
	float x;

	printf("Enter the integer values of a, b & c: ");
	scanf("%d %d %d", &a, &b, &c);

	x = (a * 1.0) / (b - c);

	printf("\n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("x = %.2f", x);

	return 0;
}
