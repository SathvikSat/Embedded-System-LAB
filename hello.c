volatile unsigned int* const UART0DR = (unsigned int*)0x10009000;

void print_uart0(const char* s){
	while(*s != '\0'){
		*UART0DR = (unsigned int)(*s);
		s++;
	
	
	}

}

void c_entry(){
print_uart0("hello");

}

/*arm-linux-gnueabihf-gcc -c -mcpu=cortex-a9 hello.c -o hello.o
sathviksetty@sathvik:~/Desktop/ES$ arm-linux-gnueabihf-as -mcpu=cortex-a9 startup.s -o startup.o
sathviksetty@sathvik:~/Desktop/ES$ arm-linux-gnueabihf-ld -T Linker.ld startup.o hello.o -o hello.elf
sathviksetty@sathvik:~/Desktop/ES$ arm-linux-gnueabihf-objcopy -O binary hello.elf hello.bin
sathviksetty@sathvik:~/Desktop/ES$ qemu-system-arm -M vexpress-a9 -nographic -m 1024M -Kernel hello.bin

for vexpress cortex a9


arm-linux-gnueabi-gcc -c -nostdlib -mcpu=arm926ej-s hello.c -o hello.o
arm-linux-gnueabi-as -mcpu=arm926ej-s -g startup.s -o startup.o






*/
