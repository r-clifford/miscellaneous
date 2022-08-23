cmake_minimum_required(VERSION 3.16)
project(miscellaneous C)

set(CMAKE_C_STANDARD 11)

include_directories(C/Linked-List-Single)
include_directories(C/Searching)
include_directories(C/Sorting)
include_directories(C/Utils)
add_executable(list-single
        C/Linked-List-Single/list_single.c
        C/Linked-List-Single/list_single.h
        C/Linked-List-Single/list-single-runner.c)
add_executable(binary-search
        C/Utils/utils.c
        C/Utils/utils.h
        C/Searching/binary-search.c
        C/Searching/binary-search.h
        C/Searching/binary-search-runner.c)
add_executable(bubble-sort
        C/Utils/utils.c
        C/Utils/utils.h
        C/Sorting/bubble_sort.c
        C/Sorting/bubble_sort.h
        C/Sorting/bubble_sort_driver.c)

