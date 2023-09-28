#include <iostream>

using namespace std;

//checking equality using xor ^ and not !

int main(){
    cout << (int)!((0b100) ^ (0b100));
    cout << (int)!((0b101)^(0b100));
    return 0;
}