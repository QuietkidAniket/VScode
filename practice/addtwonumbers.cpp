#include <iostream>

using namespace std;

// Definition for singly-linked list.
 struct ListNode { 
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 // Brute Froce Approach..... using vertical-digit addition / standard notebook addition algorithm 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       //storing the address of the first ListNode object in l1 i.e. the last digit of l1
        ListNode* add {l1};
        //loop continues till digits of both the numbers are exhausted so that in addition no digit is overlooked to be considered in the number
        // l1 will store the addition result of both the numbers
        while(l1 || l2){
            
            //  ______ adding all the digits ________
            //loop continues till digits of l2 are exhausted
            if(l2){

                //if its the second digit (second last node) on l1 but l2 has still more digits left to be added
                //then add new 0 s to the front of number (end of l2)
                 if(l2->next && !l1->next){
                    l1->next = new ListNode(0);
                }
                //add the corresponding digits, store them in l1's nodes.
                l1->val += l2->val;
                l2 = l2->next;
            }
            //if there is a carry i.e. the sum of the digits is greater than 9
            //then subtract 10 from current node and add 1 - the carry - to the next node.
            if(l1->val > 9){
                //If its the first most digit of l1 (last ListNode element of l1) and we have a carry
                // Then add a ListNode object with val = 1 and next = nullptr
                if(l1->next == nullptr){
                    l1->val -= 10;
                    l1->next = new ListNode(1);
                }
                else{
                l1->next->val += 1;
                l1->val -= 10;
                }
            }
            // jump to the next node of l1
            l1 = l1->next;
        }
        //returning the first node of l1
        return add;
        
    }
    //  ___________________________ This Code gives <data type> over flow error  _____________________________________
    // long long read(ListNode* ptr){
    //     if(!ptr->next)return static_cast<long long>(ptr->val);
    //     return static_cast<long long>(ptr-> val  + (read(ptr->next) * 10));
    // }
    // ListNode* convert(long long num){
    //     if(num  < 10)return new ListNode(num);
    //     return new ListNode(num%10  , convert(num/10));
    // }


};