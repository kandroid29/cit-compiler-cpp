//
// Created by kzheng on 2/1/19.
//
#include "scanner.h"
#include <malloc.h>

#define BUFLEN 80
size_t lineLen = 0;
int readPos = -1;
char line[BUFLEN];
int lineNum = 1;
int colNum = 0;
char ch = ' ';
char lastch = ' ';

char scan(FILE *file){
    if(!file) return -1;

    if(readPos == lineLen - 1) {
        lineLen = fread(line, 1, BUFLEN, file);
        if(lineLen == 0) {
            lineLen = 1;
            line[0] = -1;
        }
        readPos = -1;
    }

    readPos++;
    ch = line[readPos];
    if(lastch == '\n') {
        lineNum++;
        colNum = 0;
    }
    if(ch == -1) {
        fclose(file);
        file = NULL;
    }else if(ch != '\n') {
        colNum++;
    }

    lastch = ch;
    return ch;
}

