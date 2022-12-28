#include <iostream>

int main(){
    
    //copy initialisation
    int length = 5;

    //direct initialisation
    int width ( 2 );

    //brace initialisation, uniform initialisation or list initialisation (preferred)
    int height { 10 };

    std::cout << length * width * height;

    //unused variable, bypassing compile time error by introducing the [[maybe_unused]] attribute
    [[maybe_unused]] int x  = 5;


    return 0;
}
