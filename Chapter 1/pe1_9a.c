/*
 * pe1_9a.c
 *
 *  Created on: 10-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	float temp_c, temp_f;

	printf("Enter the value of Temperature in Celsius: ");
	scanf("%f", &temp_c);

	temp_f = (temp_c * 9) / 5 + 32;

	printf("\n");
	printf("%.2f degree celsius in degree fahrenheit is %.2f", temp_c, temp_f);

	return 0;
}
