/*
 * main.c
 *
 *  Created on: Dec 13, 2023
 *      Author: basel
 */


#include <stdio.h>
#include <string.h>
void main()
{
	char a[100],temp;
	int i,SIZE;
	printf("Enter a String: ");
	fflush(stdin); fflush(stdout);
	gets(a);
	SIZE = strlen(a);
	for( i = 0 ; i<SIZE/2;i++)
	{

		temp = a[i];
		a[i] = a[SIZE-i-1];
		a[SIZE-i-1]=temp;
	}
	printf("Length of string: %s",a);
}
