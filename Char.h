//
// Created by kzheng on 2/1/19.
//

#ifndef CIT_COMPILER_CPP_CHAR_H
#define CIT_COMPILER_CPP_CHAR_H

#include <string>
#include "Token.h"

using namespace std;

class Char: public Token {
    char ch;
    Char(char c);
    virtual string toString();
};


#endif //CIT_COMPILER_CPP_CHAR_H
