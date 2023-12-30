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
	struct Sstudent student;
	printf("Enter information of students:");

	//scaning students information from the user
	printf("\nEnter name:");
	fflush(stdout); fflush(stdin);
	gets(student.name);

	printf("\nEnter roll number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&student.rollNumber);

	printf("\nEnter Marks: ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&student.marks);

	//Displaying Information

	printf("\r\nDisplaying Information:");

	printf("\r\nname: %s",&student.name);

	printf("\nroll number: %d",student.rollNumber);

	printf("\nMarks: %.2f",student.marks);

}
