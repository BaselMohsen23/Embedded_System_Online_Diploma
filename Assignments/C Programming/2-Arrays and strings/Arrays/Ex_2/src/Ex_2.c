/*
 ============================================================================
 Name        : EX2
 Author      : Basel Mohsen
 Description : C Program to Calculate average using arrays
 ============================================================================
 */

#include <stdio.h>

void main()
{
	float a[100],average=0;
	int n ,i;
	printf("Enter the number of data:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for(i=0 ;i<n ; i++)
	{
		printf("Enter number:");
		fflush(stdin); fflush(stdout);
		scanf("%f",&a[i]);
		printf("\n");
		average+=a[i];
	}
	printf("Average = %.2f",average/n);

}
