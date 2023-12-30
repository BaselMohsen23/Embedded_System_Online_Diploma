/*
 * main.c
 *
 *  Cr1ated on: Dec 28, 2023
 *      Author: basel
 */
#include<stdio.h>

struct SComplex
{
	float real;
	float imaginary;
}r1,r2,result;

void main()
{
	printf("Enter real and imaginary respectively for complex 1:");


	fflush(stdout); fflush(stdin);
	scanf("%f %f",&r1.real,&r1.imaginary);

	printf("Enter real and imaginary respectively for complex 2:");

	fflush(stdout); fflush(stdin);
	scanf("%f %f",&r2.real,&r2.imaginary);



	result.real = r1.real+r2.real;
	result.imaginary = r1.imaginary+r2.imaginary;



	printf("sum= %.1f + %.1fi",result.real,result.imaginary);

}
