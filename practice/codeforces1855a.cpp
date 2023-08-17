#include <iostream>
#include <vector>

using namespace std;

inline void swap(int* a, int* b){
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

int main(){
    // vector list of all the outputs of the respective test cases
    vector<int> output;
    // the no. of test cases
    int t;
    cin >> t;
    while(t > 0){
        // the test case's length/ no. of people
        int n;
        cin >> n;
        // vector list of all the people
        vector<int> p;
        for(int i = 0; i < n; i++){
            int p_i;
            cin >> p_i;
            p.push_back(p_i);
        }
         
        // used for checking the previous's person's seat number, a pointer to the previous person
        int* prev = nullptr;
        // counts the number of the swaps
        int counter{0};
        for(int i = 0; i < n; i++){
            // checking whether the person is sitting in a seat number corresponding to their number
            if(i + 1 == p[i]){
                // if there exists no person prior to him who can swap with him, then let him switch with a person after him
                if(prev == nullptr){
                    prev = &p[i];
                }else{
                // if there exists a person prior to him who can swap with him, let them swap
                swap(prev, &p[i]);
                counter++;
                prev = nullptr;
                }
            }
        }
        // if a person is still left to swap, then just swap him with someone who can reswap
        if(prev != nullptr){
            // checking for who can reswap
            for(int i = 0; i < n; i++){
                if(*prev != p[i]){
                    swap(prev, &p[i]);
                    prev = nullptr;
                    counter++;
                    break;
                }
            }
        }
        output.push_back(counter);
        t--;
    }
    for(int x : output){
        cout << x << '\n';
    }
    
}