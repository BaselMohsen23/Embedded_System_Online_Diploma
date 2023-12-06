/*
 ============================================================================
 Name        : EX1
 Author      : Basel Mohsen
 Description : C Program to check whether a number is Even or Odd
 ============================================================================
 */

#include<stdio.h>

void main()
{

	int n=0 ;
	printf("Enter the number you want to check: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);


	if( n%2 == 0)
	{
		printf("%d is even",n);
	}else
	{
		printf("%d is odd ",n);
	}
}
