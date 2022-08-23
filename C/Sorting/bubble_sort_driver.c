//
// Created by ryanc on 2022-08-22.
//
#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include "utils.h"
int main() {
    int len = 10;
    int* array = (int*)malloc(sizeof(int) * len);
    for (int i = 0; i < len; i++) {
        array[i] = rand();
    }
    array_print(array, len);
    bubble_sort(array, len);
    array_print(array, len);
    int max = 0;
    for (int i = 0; i<len; i++) {
        if (array[i] > max) {
            max = array[i];
        } else {
            printf("Fail");
        }
    }
}