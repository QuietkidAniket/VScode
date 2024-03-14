#include <stdio.h>
#include <stdlib.h>


struct Node{
    int value;
    struct Node* next;
    struct Node* prev;
};

void printList(struct Node* node){
    while(node != NULL){
        printf("%d ", node->value);
        node = node->next;
    }
    printf("%c", '\n');
}

void insert(struct Node** head, int data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->value = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    // if the head is not declared till now
    if(*head == NULL){
        *head = new_node;
        return;
    }
    // traversing the last node
    struct Node* last = *head;
    while(last->next != NULL){
        last = last->next;
    }

    // inserting the new node back of the last node
    new_node->prev = last;
    last->next = new_node;
}

struct Node* getNode(struct Node** head, int data){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp = *head;
    while(temp != NULL){
        if(temp->value == data){
            return temp;
        }
        temp = temp->next;
    }
    return temp;
}

struct Node* insertAfter(struct Node** head, int nodedata,int data){
    struct Node* prev_node = getNode(head, nodedata);
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->value = data;
    new_node->prev = prev_node;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    return new_node;
}


struct Node* insertBefore(struct Node** head, int nodedata,int data){
    struct Node* nextnode = getNode(head, nodedata);
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->value = data;
    new_node->next = nextnode;
    new_node->prev = nextnode->prev;
    nextnode->prev = new_node;
    return new_node;
}


struct Node* deleteNode(struct Node** head, int key){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp = *head;
    while(temp != NULL){
        if(temp->value == key){
            struct Node* next_node = (struct Node*) malloc(sizeof(struct Node));
            struct Node* prev_node = (struct Node*) malloc(sizeof(struct Node));
            next_node = temp->next;
            prev_node = temp->prev;
            free(temp);
            if(prev_node != NULL)prev_node->next = next_node;
            if(next_node != NULL)next_node->prev = prev_node;
            break;
        }
        temp = temp->next;
    }
    return temp;
}




int main(){
    struct Node* head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);
    printList(head);
    insertAfter(&head, 2, 6);
    printList(head);
    head = insertBefore(&head, 1, 7);
    printList(head);
    insertAfter(&head, 5, 8);
    printList(head);
    deleteNode(&head, 5);
    printList(head);
    struct Node* temp = head;
    head= head->next;
    head->prev= NULL;
    free(temp);
    printList(head);
    deleteNode(&head, 8);
    printList(head);
    printf("structure with the value %d stored at %p \n", getNode(&head,4)->value, getNode(&head, 4));
    
    while(head!= NULL){
        struct Node* temp = head->next;
        free(head);
        head = temp;
    }
    return 0;
}