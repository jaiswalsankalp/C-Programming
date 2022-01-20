/*
 * pe1_9b.c
 *
 *  Created on: 10-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	float temp_c, temp_f;

	printf("Enter the value of Temperature in Fahrenheit: ");
	scanf("%f", &temp_f);

	temp_c = ((temp_f - 32) * 5) / 9;

	printf("\n");
	printf("%.2f degree fahrenheit in degree celsius is %.2f", temp_f, temp_c);

	return 0;
}
