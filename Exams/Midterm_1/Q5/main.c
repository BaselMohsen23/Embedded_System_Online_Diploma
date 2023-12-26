/*
 * main.c
 *
 *  Created on: Dec 22, 2023
 *      Author: basel
 */

#include<stdio.h>

int Count1(int num);

void main()
{
	int num;
	printf("Enter the number in decimal to get number of ones in binary:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("The number of ones in %d is %d ones",num,Count1(num));


}

int Count1(int num)
{
	int counter =0,checkbit;
	for(int i = 0 ; i<31 ; i++)
	{
		checkbit = num & (1<<i);
		if(checkbit)
			counter++;
		else
			continue;
	}
	return counter;
}

