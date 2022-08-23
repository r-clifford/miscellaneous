//
// Created by ryanc on 2022-08-22.
//

#include "binary-search.h"

int binary_search(int *array, int start, int end, int item) {
    /** Given sorted array with start index, end index,
     * find the index of item
     * return -1 if not found
     */

    int mid = (end - start) / 2;
    if (mid == start) {
        if (array[start] != item) {
            return -1;
        }
    }
    int val = array[mid];
    if (item < val) {
        binary_search(array, start, mid, item);
    } else if (item > val) {
        binary_search(array, mid, end, item);
    } else {
        return val;
    }

}