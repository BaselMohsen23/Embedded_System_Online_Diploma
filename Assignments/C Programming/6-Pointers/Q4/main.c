/*
 * main.c
 *
 *  Created on: Jan 9, 2024
 *      Author: basel
 */


/*
 * main.c
 *
 *  Created on: Jan 9, 2024
 *      Author: basel
 */

#include <stdio.h>
#include <string.h>

void main()
{
	int arr[100];
	int * p;
	int i,size=5;

	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);


	//make the pointer points to the last number in the array
	p=arr;

	printf("Input %d number of elements in the array :\n",size);
	for(i=0; i<size;i++)
	{
		printf("element - %d :",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",p++);
		printf("\n");
	}




	p=&arr[size-1];



	printf("\r\nThe elements of array in reverse order are :");
	for(i = 0; i<size ;i++,p--)
	{
		printf("\nelement - %d : %d\n",size-i,*p);
	}


}


