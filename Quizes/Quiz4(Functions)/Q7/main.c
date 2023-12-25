#include <stdio.h>
#include <string.h>

int checkPower(int number);

void main()
{
	int number,result;

	printf("Enter the number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);


	result = checkPower(number);

	printf("%d ===> %d ",number,result);


}

int checkPower(int number)
{
	double result = log10(number)/log10(3);	 //---> result is double to compute power.
	if(result - (int)result == 0)			 //---> check if the number is integer or not.
		return 0;
	else
		return 1;
}
