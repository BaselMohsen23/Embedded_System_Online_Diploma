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
	char a[100],c,counter=0;
	int i;
	printf("Enter a String: ");
	fflush(stdin); fflush(stdout);
	gets(a);
	for( i = 0 ; i<100;i++)

	{

		if(a[i] == 0)
			break;
	}
	printf("Length of string: %d",i);
}
