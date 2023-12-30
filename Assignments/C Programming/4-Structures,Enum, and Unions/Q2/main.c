/*
 * main.c
 *
 *  Created on: Dec 28, 2023
 *      Author: basel
 */
#include<stdio.h>

struct Sdistance
{
	int feet;
	float inch;
}d1,d2,result;

void main()
{
	printf("Enter information for 1st distance:");

	printf("\nEnter feet: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&d1.feet);

	printf("Enter inch: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&d1.inch);

	printf("Enter information for 2nd distance:");

	printf("\nEnter feet: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&d2.feet);

	printf("Enter inch: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&d2.inch);

	result.feet = d1.feet+d2.feet;
	result.inch = d1.inch+d2.inch;

	if(result.inch > 12)
	{
		result.inch-=12;
		result.feet++;
	}

	printf("sum of two distances = %d'-%.1f'",result.feet,result.inch);

}
