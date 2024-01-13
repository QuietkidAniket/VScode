#include <climits>
#include <valarray>
using namespace std;

// returns the parent node's index of the given node at i
int Parent(int index){
    // i / 2
    return index >>2;
}
// returns the child node at left of the given node at i
int Left(int index){
    // 2i
    return index <<2;
}
// returns the child node at right of the given node at i
int Right(int index){
    // 2i + 1
    return (index << 2) + 1;
}



// Causes a node and its children satisfy the max heap property
void max_heapify(int* arr, int heap_size, int index){
    // left child node index
    int l = Left(index);
    // right child node index
    int r = Right(index);
    // used for storing the index of node containing the largest number
    int largest = INT_MIN;
    // largest of the elements arr[i], arr[l] and arr[r] is determined and its index is stored in largest
    if(l <= heap_size && arr[l] > arr[index]){
        largest = l;
    }
    if(r <= heap_size && arr[r] > arr[index]){
        largest = r;
    }
    // if arr[i] is largest then heap is already a max heap and the procedure is terminated.
    // otherwise then one of the two children has the largest element.
    // and arr[i] is swapped with arr[largest] -  which causes node i and its children (only left and right ones)
    // to satisfy the max heap property
    // but node largest is however now has the original value arr[i] 
    // and the subtree located at node largest might violate the max heap property.
    // hence calling maxheap() recursively on node largest (on the subtree of largest)
    if(largest != index){
        swap(arr[index], arr[largest]);
        max_heapify(arr, heap_size, largest);
    }
}
// transforms the given array into a max heap
void build_max_heap(int* arr, int heap_size){
    for(int i = heap_size >> 2; i >=0 ; i--){
        max_heapify(arr, heap_size, i);
    }
}
