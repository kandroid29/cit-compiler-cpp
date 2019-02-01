//
// Created by kzheng on 2/1/19.
//

#ifndef CIT_COMPILER_CPP_KEYWORDS_H
#define CIT_COMPILER_CPP_KEYWORDS_H

#include <ext/hash_map>
#include "lexer.h"

using namespace std;
using namespace __gnu_cxx;

class Keywords {
    hash_map<string, Tag> keywords;
public:
    Keywords();
    Tag getTag(string name);

};


#endif //CIT_COMPILER_CPP_KEYWORDS_H
