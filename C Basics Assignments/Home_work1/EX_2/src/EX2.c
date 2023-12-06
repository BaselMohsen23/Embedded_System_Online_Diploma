/*
 ============================================================================
 Name        : EX2.c
 Author      : Basel Mohsen
 Description : C Program to Print a Integer Entered by a User
 ============================================================================
 */

#include <stdio.h>


void main()
{
	int x ;

	printf("Enter an integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);

	printf("You Entered: %d\r\n",x);



}
