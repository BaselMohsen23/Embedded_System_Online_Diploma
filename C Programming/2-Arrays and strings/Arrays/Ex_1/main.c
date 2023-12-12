/*
 ============================================================================
 Name        : EX1
 Author      : Basel Mohsen
 Description : C Program to find sum of two matrix
 ============================================================================
 */

#include <stdio.h>

void main()
{
	int r,c;
	float a[2][2];
	float b[2][2];
	float z[2][2];
	printf("Enter the element of the first matrix \r\n");

	for(r =0;r<2;r++)
	{
		for(c =0;c<2;c++)
		{
			printf("Enter a%d%d: ",r,c);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[r][c]);
			printf("\n");
		}
	}

	printf("Enter the element of the Second matrix \r\n");

	for(r =0;r<2;r++)
	{
		for(c =0;c<2;c++)
		{
			printf("Enter b%d%d:",r,c);
			fflush(stdin); fflush(stdout);
			scanf("%f",&b[r][c]);
			printf("\n");


		}
	}

	printf("Sum of the matrix: \n");

		for(r =0;r<2;r++)
		{
			for(c =0;c<2;c++)
			{
				z[r][c]=a[r][c]+b[r][c];
			}
			printf("\n");
		}

//Printing the matrix after adding
		for(r =0;r<2;r++)
				{
					for(c =0;c<2;c++)
					{
						printf("%.1f\t",z[r][c]);
					}
					printf("\n");

				}
}
