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
	int num,result;
	printf("Enter the number in decimal:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	result=Count1(num);
	printf("\n the max number of ones between two zeros in binary of number %d is : %d",num,result);
}

int Count1(int num)
{
	int counter =0,max = 0;
	for(int i = 0 ; i<31 ; i++)
	{
		if(!(num & (1<<i)))
		{
			counter=0;

			while(num & (1<<i+1))
			{
				i++;
				counter++;
			}
			if(max<counter)
				max=counter;
		}
		return max;
	}

}

