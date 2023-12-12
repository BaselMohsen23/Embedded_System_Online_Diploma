/*
 * main.c
 *
 *  Created on: Dec 13, 2023
 *      Author: basel
 */
#include<stdio.h>
#include<string.h>


void main()
{
	char a[100],c,counter=0;
	printf("Enter a String: ");
	fflush(stdin); fflush(stdout);
	gets(a);

	printf("Enter a character to find a frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	c = tolower(c);
	for(int i = 0 ; i<strlen(a);i++)

		{
			a[i]=tolower(a[i]);
			if(a[i] == c)
				counter++;
		}
	printf("Frequency of e = %d",counter);



}
