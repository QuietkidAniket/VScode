#include <stdio.h>
#include <stdlib.h>


struct Node{
    int value;
};

void print(struct Node* head){
    printf("Value : %d, at %p \n",head->value, head);
}

int main(){
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    struct Node* head2 = (struct Node*) malloc(sizeof(struct Node));
    head->value = 4;
    head2->value = 5;
    struct Node* temp = head;
    print(head);
    print(temp);
    struct Node** ptr = &head;
    print(*ptr);
    *ptr = head2;

    print(temp);
    printf("Head 1 : \n");
    print(head);
    printf("Head 2 : \n");
    print(head2);
    free(temp);
    free(head2);
}