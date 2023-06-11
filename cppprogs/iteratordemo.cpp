#include <array>
#include <iostream>

int main(){
    std::array data{1,2,3,4,5,6,7};
    auto begin{ &data[0]};
    auto end{ begin + std::size(data)};
    for(auto ptr{begin}; ptr < end; ++ptr){
        std::cout << *ptr << " ";
    }
    std::cout << "\n";

    //standard library iterators 
    begin = data.begin();
    end = data.end();
    for(auto p {begin}; p < end; ++p)std::cout << *p << ' ';
    std::cout<< "\n";
    return 0;
}