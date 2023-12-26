/*
 * main.c
 *
 *  Created on: Dec 23, 2023
 *      Author: basel
 */


/*
 * main.c
 *
 *  Created on: Dec 22, 2023
 *      Author: basel
 */

#include<stdio.h>
#include<string.h>


void reverse(void);

void main()
{
	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	reverse();

}

void reverse(void)
{
	char c;
	scanf("%c",&c);
	if( c != '\n')
		reverse();
	printf("%c",c);
}

