#include <stdio.h>

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(void)
{
    int x = 12;
    int y = 15;
    printf("Before swapping x : %i, y : %i\n", x,y);
    swap(&x,&y);
    printf("After Swapping x : %i, y : %i\n", x,y);
    return 0;
    
}