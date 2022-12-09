#ifndef _SORT_
#define _SORT_

#include <stdlib.h>
#include <stdio.h>

void print_array(const int *array, size_t size);
void heap_sort(int *array, size_t size);
void swap_values(int *array, int i, int j, int size);
void heapify(int *array, int si, int bin, int size);
#endif
