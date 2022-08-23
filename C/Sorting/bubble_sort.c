//
// Created by ryanc on 2022-08-22.
//

#include "bubble_sort.h"

void bubble_sort(int *array, int len) {
    while (1) {
        int swapped = 0;
        int start = 0;
        for (int i = start; i < len - 1; i++) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) {
            return;
        }
        swapped = 0;
        start++;
    }
}
