/*
Formally, given a single chunk weighing N, can he make a chunk weighing M using zero or more splits?

A chunk can be split into 2 chunks if one of the new chunks is exactly twice the weight of the other
 and both the new chunks have integer weights.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// n = a + 2a
// => a = n/3, a is an integer >0
// if a == m || 2 * a == m, then true


int check(int n ,int m){
    if( n < m)return false;
    if( n % 3 != 0 )return false;
    
    int a = n /3;

        
    if(a == m || 2*a == m){
        return true;
    }else{
        return check(a,m) || check(2*a,m) ;
    }
        
}

int main() {
    int t;
    cin>>t;
    vector<string> output;
    while(t>0){
        int n, m;
        cin >>n >> m;
        if(check(n,m)){
            output.push_back("yes");
        }else{
            output.push_back("no");
        }
        t--;
    }
    for(auto x : output){
        cout << x << '\n';
    }
    return 0;
}