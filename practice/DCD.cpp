#include <iostream>
#include <cstdio>
#include <vector>
#include <iterator>

#include <string>
using namespace std;

int main(){
    // the numerator
    string x;
    cin>>x;
    // the denominator
    string y;
    float ans;
    // removing the same digits
    for(int i = 0; i < sizeof(x)/ sizeof(char); i++){
        char x_c = x[i];
        vector<int> index;
        for(int j = 0; j < sizeof(y)/ sizeof(char); j++){
            char y_c = y[j];
            if(y_c == x_c){
            y.erase(remove(&(y + j), y.end(), x_c), y.end());
            x.erase(remove(&(x + i), x.end(), y_c), x.end()));
            }
        }
    }

    printf("%.2f", ans);
    return 0;
}