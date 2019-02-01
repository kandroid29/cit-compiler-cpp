#include <stdio.h>
#include "scanner.h"

int main(int argc, char* argv[]) {
    const char *filename = argv[1];

    FILE *fp = fopen(filename, "rb");
    char ch;
    while((ch = scan(fp)) != -1) {
        putchar(ch);
    }
    puts("\n");


    printf("Scanning complete!\n");
    return 0;
}