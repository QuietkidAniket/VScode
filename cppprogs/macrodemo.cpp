//a program to check whether a specific type has size equal or less than 2 memory units. 
#include <iostream>
//using a function like preprocessor macro in order to receive an object or a type as an argument (which is not allowed in normal function parameters)

#define isSmall(T) (sizeof(T) <= 2 * sizeof(void*)) 

struct S{
    double a,b,c;
};

int main(){
    std::cout << std::boolalpha ;
    std::cout << isSmall(int) << "\n";
    std::cout << isSmall(double) << "\n";
    std::cout << isSmall(100) << "\n";
    std::cout << isSmall(S) << "\n";
    return 0;

}