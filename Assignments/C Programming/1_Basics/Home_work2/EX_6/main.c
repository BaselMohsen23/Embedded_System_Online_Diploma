/*
 ============================================================================
 Name        : EX6
 Author      : Basel Mohsen
 Description : C Program to Check whether the number is positive or negative
 ============================================================================
 */

#include<stdio.h>

void main()
{
	int n, sum=0;
	printf("Enter an integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);

	for(int i = 0;i<=n ; i++)
		sum+= i;
	printf("sum= %d",sum);

}
