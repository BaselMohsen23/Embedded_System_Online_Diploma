/*
	startup.c 
	Author:bassel
*/
#include <stdint.h>






/*
	here using weak to make the symbol here weak for the linker and to be allowed to define it in another file  like ISR func()
	using alias give it just an intialization to point to the Default handler symbol and have it's value to not reserve place without any advantage
	if we define any function in another file ISR_FUNC the alias will be unlocked and will point to a uniqe address.
*/
#include "Platform_Types.h"

extern int main(void);
void Default_Handler();
void Reset_Handler();
void NMI_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void H_Fault_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void MM_Fault_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void Bus_Fault_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void Usage_Fault_Handler() __attribute__ ((weak, alias ("Default_Handler")));



// extern unsigned int _stack_top;
// extern unsigned int _E_text;
// extern unsigned int _S_DATA;
// extern unsigned int _E_DATA;
// extern unsigned int _S_BSS;
// extern unsigned int _E_BSS;

extern unsigned int _stack_top;
extern unsigned int _E_text;
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_BSS;
extern unsigned int _E_BSS;

// unsigned int vectors[] __attribute__((section(".vectors"))) = {
// (unsigned int) &_stack_top,
// (unsigned int) &Reset_Handler,
// (unsigned int) &NMI_Handler ,
// (unsigned int) &H_Fault_Handler ,
// (unsigned int) &MM_Fault_Handler ,
// (unsigned int) &Bus_Fault_Handler ,
// (unsigned int) &Usage_Fault_Handler

// };

unsigned int vectors[] __attribute__((section(".vectors"))) = {
	(unsigned int) &_stack_top,			/* Stack Top Address */
	(unsigned int) &Reset_Handler,		/* -3 Reset */
	(unsigned int) &NMI_Handler,			/* -2 NMI */
	(unsigned int) &H_Fault_Handler,		/* -1 Hard Fault */
	(unsigned int) &MM_Fault_Handler,		/* 0 MM Fault */
	(unsigned int) &Bus_Fault_Handler,	/* 1 Bus Fault */
	(unsigned int) &Usage_Fault_Handler,	/* 2 Usage Fault */

};





void Reset_Handler()
{
	/*
		copy DATA section from flash to sram.
		here using (unsigned char*) to make sure to copy DATAt byte by byte to avoid the alignment issue or risk
		& before all symbols is because we don't have a way to define a symbol in c so we replace it by variable but by using only it's address
		
	*/
	unsigned int DATA_size = (unsigned char *) (&_E_DATA) - (unsigned char *) (&_S_DATA);
	unsigned char *p_src = (unsigned char *) &_E_text;
	unsigned char *p_dest= (unsigned char *) &_S_DATA;
	//here the DATA_size will be the count of bytes 
	for( int i = 0 ; i< DATA_size ; i++)
	{	//p_src or p_dest is pointer to char
		*((unsigned char *)p_dest++)=*((unsigned char *)p_src++);
	}
	//		init .bss section in sram = 0 .
	unsigned int Bss_size = (unsigned char *) &_E_BSS - (unsigned char *) &_S_BSS;
	p_dest = (unsigned char *) &_S_BSS;
	for (int i = 0; i < Bss_size; ++i)
	{
		*((unsigned char *) p_dest++)=0;
	}
	//jumb to main
	main();
}


void Default_Handler()
{
	Reset_Handler();
}




