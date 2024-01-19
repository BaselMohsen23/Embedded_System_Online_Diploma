/*
 * main.c
 *
 *  Created on: Jan 9, 2024
 *      Author: basel
 */

#include <stdio.h>
#include <string.h>

void main()
{
	char arr[100];
	char * p;
	int i,size;

	printf("Input the string: ");
	fflush(stdin); fflush(stdout);
	gets(arr);

	//get the length of the input string
    size=strlen(arr);

    //make the pointer points to the last element in the string
    p=&arr[size-1];

    printf("\r\nReverse of the string is:");
	for(i = 0; i<size ;i++,p--)
	{
		printf("%c",*p);
	}


}


