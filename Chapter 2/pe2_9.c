/*
 * pe2_9.c
 *
 *  Created on: 18-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	typedef char name;
	name mother;

	//Assigning Value to Variable
	mother = 'K';

	//Printing
	printf("%d", mother);

	return 0;

	//End of Program
}
