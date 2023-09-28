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
    while(t > 0){
        vector<int> rseq;
        vector<int> lseq;
        int n;
        cin>>n;
        for(int i = 0; i < n; i++){
            int temp;
            cin>>temp;
            rseq.push_back((i > 0 ? rseq[i-1] : 0) + temp);
        }
        int prev_lseq =0;
        for(int j = n-1; j >= 0;  j--){
            lseq[j] = rseq[j] - rseq[j-1] + prev_lseq;
            prev_lseq = lseq[j];
        }
        int l_index = -1;
        int r_index = n +1;
        int i = 0;
        int j = n-1;
       
        while(i<j){ 
            
            if(rseq[i] == lseq[j]){
                l_index= i++;
                r_index=j--;
            }else if(rseq[i] > lseq[j] ){
                j--;
            }else{
                i++;
            }
            
        }
        
        output.push_back(l_index  + 1 + (n - r_index + 1));

        t--;
    }
    for(auto x : output){
        cout << x << "\n";
    }
    return 0;
}