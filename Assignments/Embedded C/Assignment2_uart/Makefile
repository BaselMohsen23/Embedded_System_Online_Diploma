#@copyright : bassel

#-------------------Enviroment_Variables---------------------------

cc=arm-none-eabi-
#here CFLAGS for frequent used flages
CFLAGS=-g -mcpu=arm926ej-s 

#here the INCS is for included files paths
INCS=-I .

#LIBS is libraries used on linking phase but not in the toolchain here it's empty because we don't add any LIBS
LIBS=

#-------------------------WildCard----------------------------------

#Means to get all .c files and but them in SRC
SRC=$(wildcard *.c)
#Any file.c inside SRC turn it into .o 
OBJ=$(SRC:.c=.o)

#The same but here with .s files
As=$(wildcard *.s)
#Any file.s inside SRC turn it into .o 
AsObj=$(As:.s=.o)

#------------------------Generic_Project_name-----------------------

Project_name=learn-in-depth

#------------------------MakeFIle_Sections--------------------------


all: $(Project_name).bin
	@echo "=====Build is done====="

startup.o:startup.s
	 
	#$(cc)as.exe  $(CFLAGS) startup.s -o startup.o
	#using simplifications while dependencies $< (startup.s) and tagret will be $@ (startup.o) 
	$(cc)as.exe  $(CFLAGS) $< -o $@


%.o:%.c
	 
	#Using the generic rule here from the debendencis of lear-in-depth.elf will replace every dependency it's just a replacment to the two sections below
	#won't take the startup.o because it have it's own section	
	$(cc)gcc.exe -c  $(CFLAGS) $(INCS) $< -o $@

#uart.o:uart.c
	 
	#$(cc)gcc.exe -c $(INCS) $(CFLAGS) uart.c -o uart.o
	#Using simplifications
	#$(cc)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@


#app.o:app.c
	 
	#$(cc)gcc.exe -c  $(INCS) $(CFLAGS) app.c -o app.o
	#Using simplifications
	#$(cc)gcc.exe -c  $(INCS) $(CFLAGS) $< -o $@


 
$(Project_name).elf: $(OBJ) $(AsObj)
	 
	$(cc)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsObj) -o $@

$(Project_name).bin:  $(Project_name).elf
	 
	#$(cc)objcopy -O binary $(Project_name).elf  $(Project_name).bin
	#Using simplifications
	$(cc)objcopy -O binary $< $@
clean_all:
	rm *.o *.bin *.elf
clean:
	rm *.bin *.elf



#@ here clean section is to clean .bin and .elf only if the linker script is changed as no section above to handle it
#@ but clean all will delete all .o and this will cancle increamental change and will build all c files again even if the change is in one file