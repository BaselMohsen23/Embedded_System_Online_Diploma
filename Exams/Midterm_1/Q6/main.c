/*
 * main.c
 *
 *  Created on: Dec 22, 2023
 *      Author: basel
 */

#include<stdio.h>

int Uniqe(int arr[],int size,int element,int start,int place);

void main()
{
	int arr[]={4,2,4,2,5,7,5};

	for(int i = 0 ;i<sizeof(arr)/4;i++)
	{
		if(!Uniqe(arr,sizeof(arr)/4,arr[i],0,i))
			printf("The unique number is %d",arr[i]);
	}
}

int Uniqe(int arr[],int size,int element,int start,int place)
{
	if(place==start&&start !=0)
		Uniqe(arr,size,element,start+1,place);
	if(start==size)
		return 0;

	if(arr[start] == element&&start!= place)
	{
		return 1;

	}else
	{
		Uniqe(arr,size,element,start+1,place);
	}
}

