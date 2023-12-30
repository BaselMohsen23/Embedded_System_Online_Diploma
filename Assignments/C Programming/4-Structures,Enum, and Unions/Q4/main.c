/*
 * main.c
 *
 *  Created on: Dec 28, 2023
 *      Author: basel
 */
#include<stdio.h>

struct Sstudent
{
	char name[20];
	int rollNumber;
	float marks;
};

void main()
{
	int i;
	struct Sstudent student[10];

	for( i = 0 ; i < 10 ; i++)
	{
		printf("Enter information of student %d:",i+1);

		//scaning students information from the user
		printf("\nEnter name:");
		fflush(stdout); fflush(stdin);
		gets(student[i].name);

		printf("\nEnter roll number: ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&student[i].rollNumber);

		printf("\nEnter Marks: ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&student[i].marks);
	}


	//Displaying Information
	for(int i = 0 ; i < 10 ; i++)
	{
		printf("\r\nDisplaying Information of student %s:",student[i].name);

		printf("\r\nname: %s",&student[i].name);

		printf("\nroll number: %d",student[i].rollNumber);

		printf("\nMarks: %.2f",student[i].marks);
	}

}
