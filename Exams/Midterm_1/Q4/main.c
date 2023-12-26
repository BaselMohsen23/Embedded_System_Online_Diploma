/*
 * main.c
 *
 *  Created on: Dec 22, 2023
 *      Author: basel
 */

#include<stdio.h>

void Reverse(int num);

void main()
{
	int num;
	printf("Enter the number you want to reverse:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	Reverse(num);

}

void Reverse(int num)
{
	int rem;

while(num != 0)
{
	rem = num%10;
	num=num/10;
	printf("%d",rem);
}
}

