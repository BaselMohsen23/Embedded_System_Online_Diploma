.global reset 
 //to make reset symblo a global seen by linker script to address it to the start of the Entry point
reset:
	ldr sp, =stack_top // This stack_top is a symbol equal the address of the stacktop calculated from the linker_script using (location counter (.) but here is unresolved as the function of uart_send() it's a symbol too and not resolved but the linker will resolve them)
	//ldr is a command of assembly arm-arch to load to a register called sp a value (0x00...)

	bl main //branch to a label called main -> main function

stop: b stop  

//here an infinite loop to load if I don't create a while(1) in the main