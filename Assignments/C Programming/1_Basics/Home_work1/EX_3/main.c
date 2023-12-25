/*
 ============================================================================
 Name        : EX3
 Author      : Basel Mohsen
 Description : C Program to Add Two Integers
 ============================================================================
 */


#include <stdio.h>


void main()
{
	int x, y, sum=0;


	printf("Enter two integers: ");
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&x,&y);
	sum = x+y;

	printf("Sum:  %d\r\n",sum);



}
