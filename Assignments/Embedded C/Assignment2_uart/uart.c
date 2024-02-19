#include "uart.h"

#define UART0DR *((volatile unsigned int * const) ((unsigned int*)0x101f1000))
//  this astrict is to access the place where this address points to *(this pointer ( volatile unsigned int*const (const pointer) ) points to address(this is casting(unsigned int*)0x101f1000))

void Uart_Send_string(unsigned char * p_tx_string)
{
	while(*p_tx_string != '\0')
	{
		UART0DR =  (unsigned int ) (*p_tx_string);
		//casting here because UART0DR type is pointer to integer
		p_tx_string++ ;
	}
}


