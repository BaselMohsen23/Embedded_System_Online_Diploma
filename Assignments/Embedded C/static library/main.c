#include "stdio.h"
#include "can.h"
//structure defination
struct Sdata
{
	unsigned char data1;
	unsigned int data2;

};
struct Sdata gdata;

void main()
{
	can_init();
}