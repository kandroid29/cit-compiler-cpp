//
// Created by kzheng on 2/1/19.
//

#ifndef CIT_COMPILER_CPP_STR_H
#define CIT_COMPILER_CPP_STR_H


#include "Token.h"

using namespace std;

class Str: public Token {
public:
    string str;
    Str(string s);
    virtual string toString();
};


#endif //CIT_COMPILER_CPP_STR_H
