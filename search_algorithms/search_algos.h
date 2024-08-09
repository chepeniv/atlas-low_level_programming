#ifndef SORT_H
#define SORT_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

void print_progress(int *array, int pos, int len);
int binary_search_eng(int *array, int pos, int len, int value);

#endif
