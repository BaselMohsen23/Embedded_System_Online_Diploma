/*
 ============================================================================
 Name        : EX4
 Author      : Basel Mohsen
 Description : C Program to Check whether the number is positive or negative
 ============================================================================
 */

#include<stdio.h>

void main()
{

	float n1;


		printf("Enter a number : \n");
		fflush(stdout); fflush(stdin);
		scanf("%f",&n1);


		if( n1 >= 0)
		{
			if(n1==0)
			{
				printf("You entered a zero\n");
			}else
				printf("%.2f is Positive.\n",n1);
		}else
			printf("%.2f is Negative.\n",n1);


}
