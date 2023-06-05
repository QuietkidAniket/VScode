#include <iostream>
#include <random> //for std::mt19937

int dice(){
    //instantiating a 32 bit Mersene Twister
    std::mt19937 mt{};
    //create a reusable random number generator that generates a number between 1 and 6
    std::uniform_int_distribution die6{1,6};
    return die6(mt);
}

int main(){
    //instantiating a 32 bit Mersene Twister
    std::mt19937 mt{};

    for(int count{1}; count <= 40; ++count){
        std::cout << mt() << '\t';
        if (count % 5 == 0)std::cout << '\n';
    }
    std::cout<< "Dice is rolled to show : " << dice() << '\n';
    return 0;
}