/*
 ============================================================================
 Name        : EX7
 Author      : Basel Mohsen
 Description : C Program to Find Factorial of a number
 ============================================================================
 */

#include<stdio.h>

int main()
{

	int n, Fac=1;
	printf("Enter an integer: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	if(n<0)
	{
		printf("Error!!! Factorial of negative number dosen't exist ");
		goto here;
	}else if(n == 0)
	{
		Fac=1;
	}else
	{
		for(int i = 1;i<=n ; i++)
		{
			Fac*= i;
		}
	}
	printf("Factorial= %d",Fac);

	here:
	return 0;
}
