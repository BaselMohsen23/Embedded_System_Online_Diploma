/*
 * main.c
 *
 *  Created on: Dec 7, 2023
 *      Author: basel
 */


#include <stdio.h>
#include <string.h>

int i=450;
extern int i;

void main()
{

	char a[20]="ahmed alaa";
	char b[20];
	int i = 0;
	while(a[i]!=0)
	{
		b[i]=a[i];
		i++;
	}
	b[i]=0;

	printf("%s",b);


}

