#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main(){
    vector<int> output;

    int t;
    cin>> t;
    while(t > 0){
        int n;
        cin >> n;
        vector<int> a;
        int smallest_difference {INT_MAX};
        bool is_not_sorted {false};
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
            if(i == 0)continue;
            if(x < a[i-1]){
                is_not_sorted = true; 
                break;
            }
            if( x  - a[i-1]< smallest_difference){
                smallest_difference = x - a[i-1];
            }

        }
        if(is_not_sorted){
            output.push_back(0);
        }else{
   
        smallest_difference = (smallest_difference /2 ) + 1;
        output.push_back(smallest_difference);
        }
        t--;
    }
    for(int x : output)cout<< x<<'\n';

    }
