/*
 ============================================================================
 Name        : EX3
 Author      : Basel Mohsen
 Description : C Program to Find the largest number Among three numbers
 ============================================================================
 */

#include<stdio.h>

void main()
{

	float n1=1,n2=1,n3=1;
	printf("Enter three numbers : \n");
	fflush(stdout); fflush(stdin);
	scanf("%f %f %f",&n1,&n2,&n3);


	if( n1 > n2)
	{
		if(n1>n3)
		{
			printf("Largest number is %.2f",n1);
		}
		else
		{
			printf("Largest number is %.2f",n3);

		}
	}else if (n2>n3)
	{
		printf("Largest number is %.2f",n2);
	}else
	{
		printf("Largest number is %.2f",n3);
	}




}
