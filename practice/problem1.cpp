#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int ans = 1;
    vector<bool> res;
    string s  = "";
    int n;
    cin>>n;
    if(n == 0){
        cout<< 0;
        return 0;
    } 
    while(n>0){
        string temp;
        cin>> temp;
        if(temp[0] == '0' and temp[1] == '1'){
            res.push_back(false);
        }else if(temp[0] == '1' and temp[1] == '0'){
            res.push_back(true);
        }
        n--;
    }
    bool toggle;
    for(int i = 0; i< res.size(); i++){
        if(i == 0 ){
            if(res[i]){
                toggle = true;
            }else{
                toggle = false;
            }
        }
        if(res[i] && !toggle){
            ans++;
            toggle = true;
        }
        else if(!res[i] && toggle){
            ans++;
            toggle = false;
        }
        
    }
    cout<< ans;
    return 0;
}