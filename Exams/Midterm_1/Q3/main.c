/*
 * main.c
 *
 *  Created on: Dec 22, 2023
 *      Author: basel
 */

#include<stdio.h>

int Prime(int num);

void main()
{
	int num1, num2, num;
	printf("Enter the two numbers :");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1,&num2);
	for(int i = num1; i<num2;i++)
	{
		num =Prime(i);
		if(num)
			printf(" %d",num);
	}

}

int Prime(int num)
{
for(int i = 2; i<=num/2 ;i++)
	{
		if( num%i != 0)
		{
			continue;
		}else
			return 0;

	}
	return num;
}

