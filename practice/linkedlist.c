#include <stdio.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(int argc, char *argv[])
{
    node *list = NULL;
    
    for(int i =0; i < argc; i++)
    {
        int number = atoi(argv[i]);
        node *n = malloc(sizeof(node));
        if(*n == NULL)
        {
            return 1;
        }
    }
    n->number = number;
}