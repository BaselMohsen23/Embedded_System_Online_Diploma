/*
 ============================================================================
 Name        : EX_6
 Author      : Basel Mohsen
 Description : Write Source Code to Swap Two Numbers
 ============================================================================
 */

#include <stdio.h>


void main()
{
	float a, b, temp;


	printf("Enter value of a: ");
	fflush(stdout); fflush(stdin);

	scanf("%f",&a);

	printf("Enter value of b: ");
	fflush(stdout); fflush(stdin);

	scanf("%f",&b);

	temp=a;
	a=b;
	b=temp;

	printf("After swapping, value of a= %f \nAfter swapping, value of b= %f",a,b );



}
