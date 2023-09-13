#include <iostream>
#include <limits>

/*
An implementation of a priority queue using arrays
*/

using namespace std;

struct item{
    int value;
    int priority;
}
// Store the element of a priority queue
item pr[10000];
// pointer to the last index
int size = -1;

void enqueue(int value, int priority){
    // Increase the size
    size++;
    // Insert the element
    pr[size].value = value;
    pr[size].priority = priority;
}

int peek(){
    int highestPriority =  INT_MIN;
    int ind  = -1;

    for(int i = 0; i <= size; i++){
        // if the priority is the same, then choose the element with highest value
        if(highestPriority == pr[i].priority && ind > -1 && pr[ind].value < pr[i].value){
            ind = i;
        }// else if check whether the priority is more and choose the element
        else if(highestPriority < pr[i].priority){
            highestPriority = pr[i].priority;
            ind = i;
        }
    }
    return ind;
}

void dequeue(){
    int index  =  peek();
    // shift the element one index before after the highest priority element is found
    for(int i  = ind; i <= size; i++){
        pr[i] = pr[i+1];
    }
    size--;
}


int main(){

}