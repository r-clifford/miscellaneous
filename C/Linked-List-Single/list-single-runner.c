//
// Created by ryanc on 2022-08-22.
//
#include <stdio.h>
#include <stdlib.h>
#include "list_single.h"
int main() {
   struct List* list = create_list();
   if (list == NULL) {
       return EXIT_FAILURE;
   }
   for (int i = 0; i <5; i++) {
       append_list(list, i);
   }
    list_print(list, ",");
    if (set_list_at(list, 4, 10) < 0) {
        printf("Error setting value\n");
    }
    list_print(list, ",");
    if (insert_list_at(list, 0, 99) < 0) {
        printf("Error inserting value\n");
    }
    list_print(list,",");
    if (insert_list_at(list, 3, 88) < 0) {
        printf("Error inserting value @2\n");
    }
    list_print(list, ",");
    if (del_list_at(list, 0) < 0) {
        printf("Error deleting value\n");
    }
    list_print(list, ",");
    if (del_list_at(list, 5) < 0) {
        printf("Error deleting value @2\n");
    }
    list_print(list, ",");
    free_list(list);
}