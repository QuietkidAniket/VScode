#include <iostream>
int main(){
    char ch{97};
    std::cout<< ch << " : ";
    std::cout << static_cast<int>(ch) ;
    return 0;
}