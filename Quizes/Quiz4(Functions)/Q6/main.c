/*
 * main.c
 *
 *  Created on: Dec 25, 2023
 *      Author: basel
 */



/*
 * main.c
 *
 *  Created on: Dec 24, 2023
 *      Author: basel
 */
#include <stdio.h>
#include <string.h>

int check(int number);

void main()
{
	int number,result;

	printf("Enter the number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);


	result = check(number);

	printf("The forth least significant bit is : %d ",result);


}

int check(int number)
{
	if(number &(1<<3)) //--> & operation between (3) in hex with the number to check if it's value equal one or not
		return 1;
	else
		return 0;
}

