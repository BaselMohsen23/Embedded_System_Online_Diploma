/*
 * main.c
 *
 *  Created on: Dec 22, 2023
 *      Author: basel
 */

#include<stdio.h>

int Sum(int);

void main()
{

	printf("The sum from 1 to 100 is %d",Sum(1));
}

int Sum(int num)
{
	static int sum = 0;
	if(num<=100)
		sum = num + Sum(num+1);
	return sum;
}

