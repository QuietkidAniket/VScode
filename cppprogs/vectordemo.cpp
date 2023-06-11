#include <iostream>

void printvectorlength(const std::vector<int>& v){
    std::cout << "The length of the vector is : " << v.size() << '\n';
}

void resizevector(std::vector<int>& v, int length){
    v.resize(length);
}
int main(){
    std::vector v{9,7,5,3,1};
    printvectorlength(v);
    std::vector<int> empty{};
    printvectorlength(empty);
    resizevector(empty , 10);
    printvectorlength(empty);
    std::vector<int> three_fours(3, 4);
    for(auto x : empty)std::cout <<x <<'\n';
    std::cout << "three fours vector :- " << '\n';
    for(auto x : three_fours)std::cout << x << '\n';
    return 0;
}