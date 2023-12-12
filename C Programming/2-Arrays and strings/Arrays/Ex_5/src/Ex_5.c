/*
 ============================================================================
 Name        : EX2
 Author      : Basel Mohsen
 Description : C Program to search an element in Array
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

void main() {
	int i,n, a[10],element;

	printf("Enter the number of elements:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=1 ; i<=n ;i++)
	{
		a[i-1]=i+i*10;
		printf("%d ",a[i-1]);
	}

	printf("\nEnter the element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);
	for(i = 0 ; i<n ; i++)
	{
		if(element==a[i])
			break;
	}
	if(i==n)
		printf("not found");
	else
		printf("Number found at location %d",i+1);

}
