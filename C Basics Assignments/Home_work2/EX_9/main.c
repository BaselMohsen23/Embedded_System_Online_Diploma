/*
 * main.c
 *
 *  Created on: Dec 6, 2023
 *      Author: basel
 */


#include<stdio.h>

void main()
{
 int n =0;
 printf("Enter the number of rows: ");
 fflush(stdout); fflush(stdin);
 scanf("%d",&n);
	for(int i = 0 ;i<n ; i++)
	{
		for(int j = 0; j<n-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}
