#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void printList(struct Node* node){
    while(node != NULL){
        printf("%d ", node->data);
        node = node->next;
    }
}

void insert(struct Node** head, int data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    // if head is NULL ,i.e., if Head of the linked list is not declared till now
    if(*head == NULL){
        *head = new_node;
        return;
    }

    // traverses to the last node 
    struct Node* last = *head;
    while(last->next != NULL){
        last = last-> next;
    }

    // assigns links the newly added node to the last node
    last->next = new_node;
}

void insertAfter(struct Node* prev_node, int data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

int insertB(struct Node* prev_node, int new_data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node;
    return new_node;
}

struct Node* deleteNode(struct Node* head, int  key){
    struct Node* temp = head;
    struct Node* prev = NULL;
    if(temp != NULL && temp->data== key){
        head = temp->next;
    }
    return head;
}


int main(){
    struct Node *head = NULL;
    insert(&head, 2);
    insert(&head, 9);
    insert(&head, 9);
    insert(&head, 7);
    insert(&head, 9);
    insert(&head, 2);
    insert(&head, 4);
    insert(&head, 5);
    insert(&head, 8);

    printf("%p\n", head);
    printf("Linked list : \n ");
    printList(head);
    printf("\n%p\n",head);
    return 0;
}