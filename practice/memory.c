#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int x[3];  --> the thing below happens actually underneath the hood when this is executed
    int* x = malloc(3 * sizeof(int));
    x[0] = 1;
    x[1] = 2;   
    x[2] = 3;
    free(x);
    return 0;
}