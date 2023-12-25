#include <stdio.h>
#include <string.h>

int lastIndex(int *arr ,int size,int number);

void main()
{
	int number,arr[6]={1,2,3,4,5,4},result;

	printf("Enter the number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);


	result = lastIndex(arr,6,number);

	printf("the number is %d ===> result =  %d ",number,result);


}

int lastIndex(int *arr ,int size,int number)
{
	int index =0;
	for(int i = 0 ; i<size ; i++)
	{
		if(arr[i]==number)
			index = i;
	}
	if(index)
		return index;
	else
		return -1;
}
