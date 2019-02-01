cmake_minimum_required(VERSION 3.13)
project(cit_compiler_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(cit_compiler_cpp main.cpp scanner.h scanner.cpp Token.cpp Token.h lexer.h Id.cpp Id.h Num.cpp Num.h Char.cpp Char.h Str.cpp Str.h Keywords.cpp Keywords.h)