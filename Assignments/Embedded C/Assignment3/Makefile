#@copyright : bassel

#-------------------Enviroment_Variables---------------------------

cc=arm-none-eabi-
#here CFLAGS for frequent used flages
# here we use -gdwarf-2 for protous tto debug
CFLAGS= -mcpu=cortex-m3 -gdwarf-2

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

Project_name=learn_in_depth_cortex_m3
#------------------------MakeFIle_Sections--------------------------


all: $(Project_name).bin
	@echo "=====Build is done====="

%.o:%.c
	 
	$(cc)gcc.exe -c  $(CFLAGS) $(INCS) $< -o $@


$(Project_name).elf: $(OBJ) $(AsObj)
	 
	$(cc)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsObj) -o $@ -Map=Map_file.map

$(Project_name).bin:  $(Project_name).elf

	$(cc)objcopy -O binary $< $@
clean_all:
	rm *.o *.bin *.elf
clean:
	rm *.bin *.elf

