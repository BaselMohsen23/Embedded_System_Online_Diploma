/*
 ============================================================================
 Name        : EX5
 Author      : Basel Mohsen
 Description : C Program to Check whether the number is positive or negative
 ============================================================================
 */

#include<stdio.h>

void main()
{

	char c ;
	printf("Enter a Character: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&c);

	if((c >= 'a' && c <= 'z') || c >= 'A'&& c <= 'Z')
	{
		printf("%c is an alphabet",c);
	}else
		printf("%c is not an alphabet",c);
}
