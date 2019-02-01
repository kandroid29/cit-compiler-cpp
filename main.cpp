#include <stdio.h>
#include "scanner.h"

int main(int argc, char* argv[]) {
    const char *filename = argv[1];

    FILE *fp = fopen(filename, "rb");
    char ch;
    ch = scan(fp);
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch == '_') {

    }
    while((ch = scan(fp)) != -1) {
        putchar(ch);

    }
    puts("\n");


    printf("Scanning complete!\n");
    return 0;
}