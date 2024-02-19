#include "uart.h"
unsigned char string_buffer[100]= "learn_in_depth:Bassel" ;
unsigned char  string_buffer2[100]= "learn_in_depth:Bassel" ;

void main(void)
{
	Uart_Send_string(string_buffer2);

}
