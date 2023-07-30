/*
* for each t test cases containing two integer inputs : n and k
* output the number of sequences f of length k such that f is a fibonacci-like sequence of and f(k) = n
*/
/*
* idea : 
* for any fibonacci like series f and f(k) = n , we need to check that 
* f(i) - f(i-1) >= 0 where k > i > 2 and f(i) > 0
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin << n << k;
    
}
