/*
 ============================================================================
 Name        : Ex_1
 Author      : Basel Mohsen
 Description : Function to get prime numbers between two intervals.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prime(int num1 , int num2);
int main(void) {
	int n1 , n2;

	printf("Enter two numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&n1,&n2);


	prime(n1,n2);

	return EXIT_SUCCESS;
}
void prime(int num1 , int num2)
{	int i,j;

printf("Prime numbers between %d and %d are:",num1,num2);
for( i = num1+1 ; i<num2 ; i++ )
{
	for( j = 2 ; j <= i/2 ;j++)
	{
		if(i%j != 0)
			if(j == i/2-1)
				printf(" %d",i);
			else
				continue;
		else
			break;
	}
}
}
