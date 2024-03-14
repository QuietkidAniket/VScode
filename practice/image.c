#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr  = (int * ) malloc( 9 * sizeof(int));
    
    for(int i = 0 ;i < 9; i++){
        scanf("%d", &ptr[i]);
    }
    ptr[0] = ptr[0] + ptr[8];
    ptr[8] = ptr[0] * ptr[8];

    for(int i = 0; i< 9;){
        for(int j = 0; j <3; j++, i++)printf("%d ",ptr[i]);
        printf("\n");
    }
    free(ptr);
}