#include <stdio.h>
#include <conio.h>

#define PEEK(addr) (*(unsigned char*) (addr))

void DumpMemory(unsigned char cols);

int main(void) {
    clrscr();
    printf("Welcome to the memory dumper!\n");
    DumpMemory(11);
    return 0;
}

void DumpMemory(unsigned char cols) {
    unsigned long i;
    unsigned char j;
    for (i = 0; i <= 65535UL; i = i + cols) {
        printf("%04lx: ", i);
        for (j = 0; j < cols; j++) {
            printf("%02x ", PEEK(i + j));
        }
        putchar('\n');
    }
}
