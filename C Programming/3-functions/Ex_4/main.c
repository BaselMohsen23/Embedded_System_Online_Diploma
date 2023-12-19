///*
// ============================================================================
// Name        : Ex_4
// Author      : Basel Mohsen
// Description : Calculate the power of the number using recursion.
// ============================================================================
// */
#include <stdio.h>
int Power(int a,int b);

void main()
{
	int b,p,result;
	printf("Enter base number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&b);

	printf("\nEnter Power number (positive integer):");
	fflush(stdin); fflush(stdout);
	scanf("%d",&p);

	result=Power(b,p);
	printf("%d^%d=%d",b,p,result);

}

int Power(int b , int p)
{
	if(p>0)
	{
		return (Power(b,p-1)*b);
	}else
		return 1;
}
