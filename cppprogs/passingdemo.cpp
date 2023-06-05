#include <iostream>
#include <string>
#include <cassert>
void printByValue(std::string val){     //function parameter is a copy of the argument passed
    std::cout<< val << '\n';            
}
void printByReference(const std::string& val){ //function parameter is a constant reference that binds to the argument passed
    std::cout<< val << '\n';
}
void printByAddress(const std::string* val){   // function paramenter is a pointer that holds the address of the argument passed
    std::cout<< *val << '\n';
}


void changeValueByAddress(int* val){    //function paramenter is a pointer to a non-const argument
    *val = 20;
}
void changeValueByReference(int& val){   //function parameter is a non-const reference that binds to the modifiable argument
    val = 100;
}
void nullcheck(const int* ptr){
    assert(ptr); //fail the program ind debug mode if a null pointer is passed (since this should never happen)
    if(!ptr){       //handle this as an error case in production mode so that we don't crash if it does happen
        return;  
    }
    std::cout<< *ptr << '\n';   
}
void greet(std::string* name=nullptr){ //parameter defaulted to nullptr
    std::cout<< "Hello .... ";
    std::cout<< (name? *name : "guest") << '\n';
}



int main(){
    greet();
    greet(new std::string("User"));
    int x{5};
    std::string str {"Hello, World !"};
    printByValue(str);                  //pass by value; makes a copy of str
    printByReference(str);              //pass by reference; doesnt make a copy of str
    printByAddress(&str);                //pass by address; doesnt make a copy of str
    nullcheck(&x);
    changeValueByAddress(&x);
    std::cout << x << '\n';
    changeValueByReference(x);
    std::cout<< x << '\n';
    //assert(printByAddress(&5));         //error; hence prefer pass by const reference;                           
    return 0;
}
