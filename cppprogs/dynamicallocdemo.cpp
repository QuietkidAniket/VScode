#include <iostream>
#include <iterator>
int main(){
    std::cout<< "Enter a positive integer : ";
    int length{};
    std::cin >> length;
    int* arr {new int[length] };    //dynamically allocated an array
    for(int i = 0; i < length; ++i){
        arr[i] = i + 1;
    }
    std::cout<< "Address of the array  : " << arr << '\n';
    std::cout<< "The array  : " << '\n';
    for(int i =0; i < length; ++i){
        std::cout<< "arr["<< i << "] : " << arr[i]<< " at " << &arr[i] << '\n';
    }
    delete[] arr;
    arr = nullptr;
    return 0;
}