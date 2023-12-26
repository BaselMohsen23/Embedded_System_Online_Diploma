/*
 * main.c
 *
 *  Created on: Dec 22, 2023
 *      Author: basel
 */

#include<stdio.h>

void reverseArray(int arr[],int size);

void main()
{
	int arr[5]={1,2,3,4,5};
	reverseArray(arr,sizeof(arr)/sizeof(arr[0])-1);

	for(int i = 0; i<sizeof(arr)/sizeof(arr[0]);i++)
		printf("%d ",arr[i]);

}

void reverseArray(int arr[],int size)
{	int temp;
	for( int i = 0 ; i<size/2 ; i++)
	{
		temp = arr[i];
		arr[i]=arr[size-i];
		arr[size-i] = temp;

	}
}

