#include <iostream>
#include <valarray>
#include "heapdemo.h"
void heapsort(int* arr, int length){
    int heap_size = length-1;
    build_max_heap(arr, length);
    for(int i = length-1; i >=1 ; i--){
        swap(arr[0], arr[i]);
        heap_size--;
        max_heapify(arr, heap_size,0);
    }
}

int main(){
    int arr[9] = {5,13,2,25,7,17,20,8,4};
    for(auto x : arr){
        cout<< x << '\n';
    }
    return 0;
}
