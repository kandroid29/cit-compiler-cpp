//
// Created by kzheng on 2/1/19.
//

#ifndef CIT_COMPILER_CPP_ID_H
#define CIT_COMPILER_CPP_ID_H

#include "Token.h"

using namespace std;

class Id: public Token {
public:
    string name;
    Id(string n);
    virtual string toString();
};


#endif //CIT_COMPILER_CPP_ID_H
