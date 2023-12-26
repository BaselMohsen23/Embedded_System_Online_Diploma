/*
 * q2.c
 *
 *  Created on: Dec 22, 2023
 *      Author: basel
 */




#include<stdio.h>
#include<math.h>


double sqrRoot(int num);

void main()
{
	int num = 0;
	double sqr = 0;
	printf("Enter the number  :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	sqr = sqrRoot(num);
	printf("Input: %d -> output %.3f",num,sqr);
}

double sqrRoot(int num)
{

	double sqr = sqrt(num);
	return sqr;
}



