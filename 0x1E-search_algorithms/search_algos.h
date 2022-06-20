#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
void print_array(const int *array, size_t size);
int advanced_binary(int *array, size_t size, int value);

#endif
