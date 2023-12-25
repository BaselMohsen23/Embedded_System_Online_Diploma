/*
 * main.c
 *
 *  Created on: Dec 24, 2023
 *      Author: basel
 */
#include <stdio.h>
#include <string.h>

void reverse(int arr[],int size);

void main()
{
	int arr[100],size;
	printf("Enter size of the array :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);

	printf("Enter the element of array :");

	for(int i = 0;i<size; i++)
	{
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("iNPUT: ");

	for(int i = 0;i<size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	reverse(arr,size);

	printf("OUTPUT: ");

	for(int i = 0;i<size; i++)
	{
		printf("%d ",arr[i]);
	}
}
void reverse(int arr[], int size)
{
	int temp;
	for(int i = 0 ; i<size/2;i++)
	{
		temp = arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=temp;
	}
}
