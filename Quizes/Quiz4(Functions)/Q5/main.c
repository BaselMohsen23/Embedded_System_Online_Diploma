
/*
 * main.c
 *
 *  Created on: Dec 24, 2023
 *      Author: basel
 */
#include <stdio.h>
#include <string.h>

int clearBit(int number, int position);

void main()
{
int number , position,result;

	printf("Enter the number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("Enter the position:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&position);

	result = clearBit(number,position);

	printf("Result = %d ",result);


}

int clearBit(int number, int position)
{
	return (number& ~(1<<position));
}

