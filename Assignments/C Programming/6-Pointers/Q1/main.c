/*
 * main.c
 *
 *  Created on: Jan 8, 2024
 *      Author: basel
 */


void main()
{
	int m =29;
	//Null pointer
	int * ab = (int*)0;

	printf("Address of m : %p \r\nValue of m: %d",&m,m);

	printf("\r\nNow ab is assigned with the address of m");
	ab = &m;

	if(ab != 0)
	{
		printf("\r\nAddress of Pointer ab : %p \r\nContent of pointer ab : %d",ab,*ab);

		printf("\r\n\r\nThe value of m assigned to 34 now.");

		m=34;

		printf("\r\nAddress of Pointer ab : %p \r\nContent of pointer ab : %d",ab,*ab);


		printf("\r\n\r\nThe pointer variable ab is assigned with the value 7 now.");

		*ab=7;

		printf("\r\nAddress of m : %p \r\nValue of m: %d",&m,m);



	}
	else
	{
		printf("Pointer ab is not initialized");

	}




}
