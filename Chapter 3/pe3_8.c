/*
 * pe3_8.c
 *
 *  Created on: 21-Jan-2022
 *      Author: Sankalp
 */

#include <stdio.h>
#define TMAX 100 //Maximum Value of Inst. Time to be used for Calculation

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	//Declaration of Variable
	int t=0, t_intvl;
	float u, a, dist;
	/*
	 * t - Instantaneous Time
	 * u - Initial Velocity of Vehicle
	 * a - Acceleration of Vehicle
	 * dist - Total Distance Travelled by the Vehicle
	 * t_intvl - Interval of Time for Calculation
	 */

	//Reading Values of Variables
	printf("Enter Initial Velocity of Vehicle in m/s: ");
	scanf("%f", &u);
	printf("Enter value of acceleration of Vehicle in m/s2: ");
	scanf("%f", &a);
	printf("Enter interval of time after which data is required in s: ");
	scanf("%d", &t_intvl);

	//Calculation & Result Print
	printf("\n");
	printf("Time of Travel     Total Distance Travelled\n");
	t += t_intvl;

	for(; t<=TMAX; )
	{
		dist = u * t + 0.5 * a * t * t;

		printf("     %-3d                 %7.2f\n", t, dist);

		t += t_intvl;
	}

	return 0;

	//End of Program
}
