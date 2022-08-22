cmake_minimum_required(VERSION 3.16)
project(miscellaneous C)

set(CMAKE_C_STANDARD 11)

include_directories(C/Linked-List-Single)

add_executable(list-single
        C/Linked-List-Single/list_single.c
        C/Linked-List-Single/list_single.h
        C/Linked-List-Single/list-single-runner.c)
