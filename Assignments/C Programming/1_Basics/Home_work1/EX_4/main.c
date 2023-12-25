/*
 ============================================================================
 Name        : EX_5
 Author      : Basel Mohsen
 Description : C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>


void main()
{
	float x, y, Multiply =0;


		printf("Enter two numbers: ");
		fflush(stdout); fflush(stdin);
		scanf("%f %f",&x,&y);
		Multiply  = x*y;

		printf("Product :  %f\r\n",Multiply );



}
