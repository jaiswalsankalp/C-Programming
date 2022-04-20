/*
 * pe3_12.c
 *
 *  Created on: 27-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Printing
	printf("Sizes of Various Data Types in C:\n\n");
	printf("int/signed int     = %lu bytes\n", sizeof(int));
	printf("unsigned int       = %lu bytes\n", sizeof(unsigned int));
	printf("short int          = %lu bytes\n", sizeof(short int));
	printf("unsigned short int = %lu bytes\n", sizeof(unsigned short int));
	printf("long int           = %lu bytes\n", sizeof(long int));
	printf("unsigned long int  = %lu bytes\n", sizeof(unsigned long int));
	printf("char               = %lu bytes\n", sizeof(char));
	printf("unsigned char      = %lu bytes\n", sizeof(unsigned char));
	printf("float              = %lu bytes\n", sizeof(float));
	printf("double             = %lu bytes\n", sizeof(double));
	printf("long double        = %lu bytes", sizeof(long double));

	return 0;

	//End of Program
}
