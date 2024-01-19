/*
 * main.c
 *
 *  Created on: Dec 28, 2023
 *      Author: basel
 */
#include<stdio.h>
#define PI 3.14
#define Area(x) x*x*PI


void main()
{
	float r , Area ;



		//scaning students information from the user
		printf("\nEnter The radius:");
		fflush(stdout); fflush(stdin);

		scanf("%f",&r);

		Area =  Area(r);
		printf("Area= %.2f",Area);


}
