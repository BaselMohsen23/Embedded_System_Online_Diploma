/*
 * Q1.c
 *
 *  Created on: Dec 22, 2023
 *      Author: basel
 */

#include<stdio.h>

int sumAll(int num);

void main()
{
	int num = 0,sum=0;
	printf("Enter the number  :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	sum = sumAll(num);
	printf("Input: %d -> output %d",num,sum);
}

int sumAll(int num)
{
	static int  rem =0;
	int sum =0;
	while(num != 0)
	{
		rem = num%10;
		sum+= rem;
		num/=10;
	}
	return sum;
}


