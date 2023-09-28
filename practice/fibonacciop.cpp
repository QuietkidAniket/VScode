#include <iostream>
#include <vector>
using namespace std;
// vector used for memoization
vector<long long int> memoi(100); 

int fib(int n){
    if(n <= 2){
        return 1;
    }
    if(memoi[n] > 0){
        return memoi[n];
    }
    if(sizeof(memoi)/sizeof(int) < n)memoi.resize(n+1);
    long long int ans = fib(n-1) + fib(n-2);
    memoi[n] = ans;
    return ans;
}

int main(){
    int n;
    cin>> n ;
    cout << n <<"th term of fibonacci series = "<<fib(n)<<"\n";

    return 0;
}