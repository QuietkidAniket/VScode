#include <iostream>

int main(){
    char ch1{'a'};
    char ch2{98};
    std::cout<< ch1 << " " <<ch2;
    std::cout << "Enter a character : " << "\n";
    char ch{};
    std::cin >> ch;
    std::cout << "The character is : " << ch << "\n";
    
    return 0;
}