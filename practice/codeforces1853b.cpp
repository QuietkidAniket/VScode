/*
* for each t test cases containing two integer inputs : n and k
* output the number of sequences f of length k such that f is a fibonacci-like sequence of and f(k) = n
*/
/*
* idea : 
* for any fibonacci like series f and f(k) = n , we need to check that 
* f(i) - f(i-1) >= 0 where k > i > 2, also f(i) and f(i-1) >= 0
* and return the number of such series
*/
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int t;
    cin>> t;
    cout<<'\n';
    vector<int> output;
    while(t >0){
        int counter{0};
        int n,k;
        cin>> n >> k;
        // interates through every possible f(i-1)
        for(int i = n; i >= 0;i--){
            int a {i};
            int b {n};  
             // checks whether for the given f(i-1) f is a fibonacci like series
            int j;
            for( j = 1; j<=k-2; j++){
                int tmp  = b - a;
                b = a;
                a = tmp;
                if(a> b)break;
                if(a < 0 )break;
                if(b< 0) break;
            }
            // if for the given f(i - 1) f is a fibonacci like series then increment the counter by 1
            if(j == k-1)counter++;
        }
        output.push_back(counter);
        t--;
    }
    // for every test case, append the corresponding output
    for(int x : output){
        cout<< x << '\n';
    }
    return 0;
}
