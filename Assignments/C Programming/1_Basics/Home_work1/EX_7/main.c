/*
 ============================================================================
 Name        : EX_7
 Author      : Basel Mohsen
 Description : Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 */

#include <stdio.h>


void main()
{
	int a, b;


	printf("Enter value of a: ");
	fflush(stdout); fflush(stdin);

	scanf("%d",&a);

	printf("Enter value of b: ");
	fflush(stdout); fflush(stdin);

	scanf("%d",&b);

	a^=b;
	b^=a;
	a^=b;

	printf("After swapping, value of a= %d \nAfter swapping, value of b= %d",a,b );



}
