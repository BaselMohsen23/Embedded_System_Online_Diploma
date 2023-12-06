/*
 ============================================================================
 Name        : EX8
 Author      : Basel Mohsen
 Description : C Program to Make a simple calculator
 ============================================================================
 */

#include<stdio.h>

void main()
{
	char choice ;
	float n1,n2;
	printf("Enter Operator either + or - or * divide: ");
	fflush(stdout); fflush(stdin);
	scanf("%c,",&choice);
	printf("Enter two operands: ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&n1, &n2);

	switch(choice)
	{
	case '+':
		printf("%.1f + %.1f = %.1f",n1,n2,n1+n2);
		break;
	case '-':
		printf("%.1f - %.1f = %.1f",n1,n2,n1-n2);
		break;
	case '*':
		printf("%.1f * %.1f = %.1f",n1,n2,n1*n2);
		break;
	case '/':
		printf("%.1f / %.1f = %.1f",n1,n2,n1/n2);
		break;
	default:
		printf("Invalid operator");
	}

}
