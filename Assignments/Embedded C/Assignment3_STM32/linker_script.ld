
MEMORY
{
	flash (RX): ORIGIN =  0x08000000, LENGTH = 64k
	sram (RWX) : ORIGIN = 0x20000000, LENGTH = 20k
}

SECTIONS
{
	.text : {
			. = ALIGN(4) ;
			*(.vectors*)
			*(.text)
			*(.rodata)
			. = ALIGN(4);
			_E_text = .;
	}>flash
	
	.data : {
			_S_DATA = .;
			*(.data)
			. = ALIGN(4) ;
			_E_DATA = .;
	}>sram AT>flash

	.bss : {

		_S_BSS = .;
		*(.bss)
		_E_BSS = .;
		. = ALIGN(4) ;
		. = . + 0x1000;
		_stack_top = .;

	}>sram
	
}