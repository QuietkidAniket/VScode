#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> output;
    int t;
    cin >> t;
    while(t > 0){
     long long n;
        cin >> n;


        long long max_length_count {0};
        // finding the longest divisor interval
        bool is_adjcacent_factor {true};
        long long length {0};
        for(int i=1 ; i <= n; i++){
            
            // checking whether the number is a factor and if the previous number was a factor then increase the length of the interval
            if(n%i == 0){
                if(is_adjcacent_factor){
                    length++;
                }
                is_adjcacent_factor = true;
                
            }else{
                length = 0;
                is_adjcacent_factor = false;
            }
            if(max_length_count < length){
                max_length_count = length;
            }
        }
        cout << max_length_count; 
        
        output.push_back(max_length_count);
        t--;
    }
    for(int x : output){
        cout<< x << '\n';
    }
    return 0;
}



//365988220345828080  - this test case is not executing
