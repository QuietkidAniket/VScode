#include "constants.h"
#include <iostream>

int main(){
    double radius{};
    std::cout<< "Enter the radius of a circle whose area needs to be calculated : ";
    std::cin >> radius;
    std::cout<< "\n Area of the circle with radius "<<radius <<" is : "<< constants::pi * radius * radius ; 
    return 0;
}
