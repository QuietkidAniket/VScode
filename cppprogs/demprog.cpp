/* 
A program for demonstrating the compilation by the C++ compiler
*/


#include <iostream>
#define AK "Aniket"
int main(){
    std::cout<<"Enter the number n and m \n";
    int n {0}, m{0};
    std::cin>>n;
    std::cin>>m;
    std::cout<<"Sum : "<<n+m<<std::endl;
    #ifdef AK
    std::cout<<"The code is written by "<<AK;
    #endif
    #if 0 
    std::cout<<"This code will not be compiled and executed";
    #endif
    return 0;
}