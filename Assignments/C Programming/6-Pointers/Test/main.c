/*
 * main.c
 * Ex_5
 *  Created on: Jan 9, 2024
 *      Author: basel
 */


#include <stdio.h>
struct Semployee
{
	char * employeName;
	int employeeId;
};
int main()
{
	struct Semployee employee1={"Ahmed",1},employee2={"Mohamed",2},employee3={"Basel",3};
	struct Semployee *array[3]={&employee1,&employee2,&employee3};
	struct Semployee *(*ptr)[3] = &array;


	printf("Employee Name: %s\nEmployee Name: %s\n",(*(*ptr+2))->employeName,(**(*ptr+2)).employeName);

	printf("Employee ID:%d \nEmployee ID:%d ",(*(*ptr+2))->employeeId,(**(*ptr+2)).employeeId);

	return 0;
}






