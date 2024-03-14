#include <stdio.h>

void bubblesort(int* array, int length){
    for(int i = 0 ; i< length -1; i++){
        for(int j = 0; j < length -i -1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[8] = {23,34,25,90,23,1,69,72};
    int length = sizeof(arr)/sizeof(int);
    for(auto x = 0; x < length ; x++ ){
        printf("%i\n",arr[x]);
    }

    printf("After sorting  : \n");

    bubblesort(arr,length);
    for(auto x = 0; x < length ; x++ ){
        printf("%i\n",arr[x]);
    }
    return 0;
}