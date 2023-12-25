/*
 ============================================================================
 Name        : Ex_2
 Author      : Basel Mohsen
 Description : Calculate Factorial using recursion
 ============================================================================
 */
#include <stdio.h>
int Fact(int n);

void main()
{
	int n;
	printf("Enter an positive integer :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	printf("\nFactorial of %d = %d",n,Fact(n));

}

int Fact(int n)
{
	if(n==0 || n==1)
		return 1;
	return Fact(n-1)*n;
}
