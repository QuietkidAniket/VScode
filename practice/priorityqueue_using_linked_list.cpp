#include <iostream>

using namespace std;

typedef struct node{
    // lower values indicate higher priority
    int value;
    int priority;
    struct node* next;
} Node;

Node* newNode(int d, int p){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;
    return temp;
}
// returns the value at the head of the queue
int peek(Node** head){
    return *head -> data;

}
// Removes the element with the highest priority from the list
int pop(Node** head){
    // stores the pointer to the head Node stored in the memory 
    Node* temp = *head;
    // the head node is now changed, but still the memory of the previous head Node is not deallocated
    (*head) =  (*head)-> next;
    // Deallocation of the memory of the previous head Node takes place
    free(temp);
}

// a function to push according to priority
void push(Node** head, int d, int p){
    Node* start =  (*head);
    Node* temp = newNode(d,p);
    // Special case : The head of the list has lesser priority than the new node
    // then insert the new node before head
    if(*head->priority < p){
        temp->next = *head;
        // the newly inserted node becomes the head 
        *head = temp;
    }else{

        //traverse the list and find the position to insert a new node
        while(start->next != NULL && start->next->priority > p){
            start = start-> next;
        }
        //either at the end of the list or at required position
        temp-> next = start-> next;
        start-> next = temp;
    }
    
}

// A function to check if the list is empty
int isEmpty(Node** head){
    return *head == NULL;
}

int main(){

}