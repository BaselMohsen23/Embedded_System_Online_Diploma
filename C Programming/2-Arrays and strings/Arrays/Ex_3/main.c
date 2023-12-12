/*
 ============================================================================
 Name        : EX1
 Author      : Basel Mohsen
 Description : C Program to Find a transpose of a matrix
 ============================================================================
 */

#include <stdio.h>

void main()
{
	int a[100][100];
	int r,c,i,j;

	printf("Enter rows and columns of the matrix:");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&r,&c);
	printf("\r\nEnter elements of matrix:\n");

	for(i = 0 ;i<r ; i++)
	{
		for(j = 0 ; j<c ; j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
				fflush(stdin); fflush(stdout);
				scanf("%d",&a[i][j]);
		}
	}

	printf("Entered matrix:\n");

	for(i = 0 ;i<r ; i++)
	{
		for(j = 0 ; j<c ; j++)
		{
			printf("%d\t",a[i][j]);

		}
		printf("\n");
	}

	printf("transposed matrix:\n");

		for(i = 0 ;i<c ; i++)
		{
			for(j = 0 ; j<r ; j++)
			{
				printf("%d\t",a[j][i]);

			}
			printf("\n");
		}

}
