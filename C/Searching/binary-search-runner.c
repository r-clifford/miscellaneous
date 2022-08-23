//
// Created by ryanc on 2022-08-22.
//
#include <stdio.h>
#include <stdlib.h>

#include "binary-search.h"
#include "utils.h"
int main(int n, char** args) {
    int len = 7;
   int* array = (int*)malloc(sizeof(int)*len);
   int a = 0;

   for (int i = 0; i < len; i++) {
       array[i] = i;
   }
    array_print(array, len);
    int item = 3;
   int idx = binary_search(array, 0, len, item);
   if (idx >= 0) {
       printf("\n%d\n", idx);
       printf("array[%d] = %d", idx, array[idx]);
   } else {
       printf("%d not found in array", item);
   }

}
