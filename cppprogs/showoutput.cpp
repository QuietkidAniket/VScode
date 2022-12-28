#include <iostream>
void showoutput(){
    std::cout<<"Inside showoutput() \n";
    #ifdef Print
    std::cout<<"Print defined \n";
    #endif
    
    #ifndef Print
    std::cout<<"Print not defined \n";
    #endif
    
}