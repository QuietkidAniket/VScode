#include <iostream>
#include <bitset>

int main(){
    std::cout<< 077 << " , " << 0b100110011001100 << " , " << 0xFFFF << "\n";
    std::cout << std::bitset<4> {0b1010};
    return 0;
}