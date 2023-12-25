/*
 * main.c
 *
 *  Created on: Dec 24, 2023
 *      Author: basel
 */
#include <stdio.h>
#include <string.h>

void Convert(int arr[],int size);

void main()
{
	int arr[10]={'0','1','2','3','4','5','6','7','8','9'};

	printf("The ASCII of number from 0 to 9 before conversion to decimal:");

	for(int i = 0;i<10; i++)
	{
		printf("%d ",arr[i]);
	}
	Convert(arr,10);//--> calling function with array and the size
	printf("\r\nThe converted array to decimal:");

	for(int i = 0;i<10; i++)
	{
		printf("%d ",arr[i]);
	}

}

void Convert(int arr[], int size)
{
	for(int i = 0;i<size; i++)
	{
		arr[i]=arr[i]-'0';
	}

}
