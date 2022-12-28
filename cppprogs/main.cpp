#include <iostream>
#include "headerdemo.h"

void showoutput();

int main(){
    showoutput();
    std::cout << "Printing the square of 12.6 : " << squared(12.6) << "\n"; 
    std::cout << "Exiting main";
    return 0;
}