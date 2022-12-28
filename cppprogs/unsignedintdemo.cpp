#include <iostream>

int main(){
    unsigned short n {65535};
    std::cout<<" 65535 : \t"<<n<<"\n";
    n = n + 1; // r % 65536
    std::cout<<" 65536 : \t"<<n<<"\n";
    n = n + 1; // r % 65536
    std::cout<<" 65537 : \t"<<n<<"\n"; 
    unsigned short r {65535}; 
    r = (r + 1)*3; // r % 65536
    std::cout<<" 65536 x 3 : \t"<<r<<"\n"; 
    unsigned short negative {0};
    std::cout<<" 0 : \t\t"<<negative<<"\n";
    negative = negative - 1;
    std::cout<<" -1 : \t\t"<<negative<<"\n";
    negative = negative - 1;
    std::cout<<" -2 : \t\t"<<negative<<"\n";

    return 0;


}