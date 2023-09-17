cmake_minimum_required(VERSION 3.26)
project(SPO_Lab1 C)

set(CMAKE_C_STANDARD 11)

add_executable(SPO_Lab1 main.c
        node.c
        node.h
        error.c
        error.h
        lex.yy.c
        parser.tab.c
        main.h
)
