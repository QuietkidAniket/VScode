#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    vector<int> output;
    while(t>0){
        int n;
        cin>>n;
        string temp;
        cin>>temp;
            
        int a_max = 0, b_max = 0;
            int a = 0,b = 0;
            
            if(temp[0] == '>'){a++;a_max++;}
            else{ b++; b_max++;} 

            for(int j = 1; j < n; j++){
                if(temp[j] == '>' && temp[j-1] != '<'){
                    a++;
                    if(a >a_max)a_max=a;
                }else if (temp[j] == '>' && temp[j-1] == '<'){
                    a = 1;
                }
                if(temp[j] == '<' && temp[j-1] != '>'){
                    b++;
                    if(b >b_max)b_max=b;
                }else if (temp[j] == '<' && temp[j-1] == '>'){
                    b = 1;
                }
            }
        output.push_back(int(a_max >= b_max? a_max : b_max)+1 );
        
        t--;
    }
    for(auto x : output){
        cout <<  x << '\n';
    }
    return 0;
}