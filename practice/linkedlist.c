#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    // prepending the singly linked list with the given passed arguments through command line
    for(int i =0; i < argc; i++)
    {
        int number = atoi(argv[i]);         // takes a string(which represents an integer) as an argument and returns its value as int
        node *n = malloc(sizeof(node));     // allocates memory to each node to be prepended to the singly linked list
        if(n == NULL)
        {
            return 1;
        }
        printf("%i \n",number);
        n->number = number;
        n->next = NULL;
        n-> next = list;
        list =n;
    }
    // traversing the singly linked list
    for(node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i \n", ptr->number);
        ptr = ptr-> next;
    }
    node *ptr = list; 
    //freeing the memory
    while(ptr != NULL)
    {   
        //  
        node *next = ptr-> next;
        free(ptr);
        ptr = next;
    }
}   