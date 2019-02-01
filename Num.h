//
// Created by kzheng on 2/1/19.
//

#ifndef CIT_COMPILER_CPP_NUM_H
#define CIT_COMPILER_CPP_NUM_H

#include <string>
#include "Token.h"

using namespace std;

class Num: public Token {
    int value;
    Num(int v);
    virtual string toString();
};


#endif //CIT_COMPILER_CPP_NUM_H
