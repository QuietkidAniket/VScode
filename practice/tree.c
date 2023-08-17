#include <stdio.h>
#include <stdlib.h>

//binary search tree
typedef struct node{
    int number;
    struct node *right;
    struct node *left;
}node;

bool search(node *tree, int number){
    if(tree == NULL){
        return false;
    }else if(number < tree-> number)return search(tree->left, number);
    else if(number > tree->number)return search(tree-> right, number);
    else if(number == tree->number)return true; 
}

int main(void){
    return 0;
}
// note that a balanced binary search tree (a tree with left and right nodes) will have complexity of  O(log(n))
// but an unbalanced binary search tree ( a tree with either no left or right nodes or unequal no. on either sides) will have a complexity of O(n)