//
// Created by kzheng on 2/1/19.
//

#ifndef CIT_COMPILER_CPP_TOKEN_H
#define CIT_COMPILER_CPP_TOKEN_H

#include "lexer.h"
#include <string>

using namespace std;


class Token {
public:
    Tag tag;
    Token(Tag tag);
    virtual string toString();
    virtual ~Token();

};


#endif //CIT_COMPILER_CPP_TOKEN_H
