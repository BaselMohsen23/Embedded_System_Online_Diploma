/*
 ============================================================================
 Name        : Q1.c
 Author      : Basel Mohsen
 Copyright   : Your copyright notice
 Description :  takes string from the user and check if it the same USERNAME or not
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void) {
	char s[100],userName[100],result;
	printf("Enter your user name: ");
	fflush(stdout); fflush(stdin);
	gets(s);
	printf("Enter a String: ");
	fflush(stdout); fflush(stdin);
	gets(userName);
	result = stricmp(s,userName);
	if(result == 0)
		printf("The User Name is the same");
	else
		printf("The User Name is Not the same");

	return 0;
}

