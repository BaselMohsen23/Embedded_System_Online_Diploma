/*
 ============================================================================
 Name        : EX4
 Author      : Basel Mohsen
 Description : C Program to insert an element in an array
 ============================================================================
 */


#include <stdio.h>

void main()
{

	//using a temp variable
	int a[100],l[100], i,element=6,location=2,number=5,temp;

	printf("Enter number of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);

	for(i = 0; i<number; i++)
	{
		a[i]= i+1;
		printf("%d ",i+1);
	}
	printf("\r\n");

	printf("Enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);

	printf("Enter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);

	/*
	 * For loop to insert the element by dividing the element into 3 parts:
	 *
	 * 		part1: the elements before the location of insertion.
	 *		part2: The location of insertion.
	 * 		part3: The elements after the location of insertion.
	 * */

	for(i = 0 ; i<=number ; i++)
	{
		if(i<location-1)
		{

		}
		else if( i == location-1)
		{
			temp=a[i];
			a[i]=element;
		}else
		{
			temp += a[i];
			a[i]= temp - a[i];
			temp-=a[i];
		}
	}
	for(i=0;i<=number;i++)
	{
		printf("%d  ",a[i]);
	}



	/*using another array
		//{
		//	int a[100],l[100], i,element=6,location=2,number=5;
		//
		//	printf("Enter number of elements : ");
		//	fflush(stdin); fflush(stdout);
		//	scanf("%d",&number);
		//
		//	for(i = 0; i<number; i++)
		//	{
		//		a[i]= i+1;
		//		printf("%d ",i+1);
		//	}
		//	printf("\r\n");
		//
		//	printf("Enter the element to be inserted : ");
		//	fflush(stdin); fflush(stdout);
		//	scanf("%d",&element);
		//
		//	printf("Enter the location : ");
		//	fflush(stdin); fflush(stdout);
		//	scanf("%d",&location);
		//
		//
		//
		//	for(i = 0 ; i<=number ; i++)
		//	{
		//		if(i<location-1)
		//		{
		//			l[i]=a[i];
		//		}
		//		else if( i == location-1)
		//		{
		//			l[i]=element;
		//		}else
		//		{
		//			l[i]=a[i-1];
		//		}
		//	}
		//	for(i=0;i<=number;i++)
		//	{
		//		printf("%d  ",l[i]);
		//	}

	 */


}
