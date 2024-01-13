#ifndef heapdemo
#define heapdemo
#include "heapdemo.cpp"
int Parent(int index);
int Left(int index);
int Right(int index);

void max_heapify(int* arr, int heap_size, int index);
void build_max_heap(int* arr, int heap_size);

#endif