/*
 ============================================================================
 Name        : EX2
 Author      : Basel Mohsen
 Description : C Program to check Vowel or Consonant
 ============================================================================
 */

#include<stdio.h>
//ctype library is to use tolower function that covert uppperCase letters to lowerCase ones.
#include <ctype.h>
void main()
{

	char a,lowerCase;
	printf("Enter an alphabet: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&a);
	lowerCase = tolower(a);



	if( lowerCase == 'i' || lowerCase == 'u' || lowerCase == 'a' || lowerCase == 'o' || lowerCase == 'e'  )
	{
		printf("%c is a vowel",a);
	}else
	{
		printf("%c is Consonant ",a);
	}
}
