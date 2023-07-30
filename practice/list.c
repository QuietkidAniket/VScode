#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int* list = malloc(3 * sizeof(int));
    // if allocation is invalid, i.e., malloc() can return NULL if there is no more memory left to be allocated 
    if(list == NULL)
    {
        return 1;
    }
    for(int i =0 ; i < 3; i++)
    {
        list[i] = i + 1;
    }
    // ...
    realloc(list, 4 * sizeof(int));
    if(list == NULL)
    {
        free(list); // freeing the already allocated memory which is no longer of any use 
        return 1;
    }
    
    
    list[3] = 4;

   
    for(int i =0 ; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
    free(list);
    return 0;
}