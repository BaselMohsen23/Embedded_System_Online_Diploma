/*
 ============================================================================
 Name        : Q2.c
 Author      : Basel Mohsen
 Copyright   : Your copyright notice
 Description :  takes string from the user and check if it the same USERNAME or not
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

int check(char *c,char*x);
int abc()
{
	int y = 20;
	return y;
}
void myfunc( int arr[])
{
	int size =sizeof(arr)/sizeof(arr[0]);
	printf("%d",size);
}
int main(void)
{
	int a[]={1,2,3,5,4,9,7};
	int b[]={4,8,7,9};
	int t[100];

	printf("array of a before swapping :");

	for(int i = 0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		printf("%d ",a[i]);
	}

	printf("\n");

	printf("array of b before swapping :");



	for(int j = 0;j<sizeof(b)/sizeof(b[0]);j++)
	{
		printf("%d ",b[j]);
	}
	printf("\n");


	for(int i = 0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		t[i]=a[i];
	}

	for(int j = 0;j<sizeof(b)/sizeof(b[0]);j++)
	{
		a[j]=b[j];
	}

	for(int z = 0;z<sizeof(b)/sizeof(b[0]);z++)
	{
		b[z]=t[z];
	}

	printf("array of a after swapping :");

	for(int i = 0;i<sizeof(b)/sizeof(b[0]);i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	printf("array of b after swapping :");

	for(int j = 0;j<sizeof(a)/sizeof(a[0]);j++)
	{
		printf("%d ",b[j]);	}


}

