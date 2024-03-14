#include <iostream>

int main(){
    // non static non const/constexpr variable g_x has external linkage by default
    std::cout << "g_x : "  << g_x;  
    // cannot access static, const and constexpr global variables from other translational units 
    // as those variables have internal linkage
    return 0;
}