#include <iostream>
#include "complex.cpp"
using namespace std;

int main(){
    complex c1(2,3);
    complex c2(4,8);
    complex c3 = c1 + c2;
    c3 += c1;
    cout << c3.real() <<" + i"<< c3.imag() <<'\n' ;
    cout << complex::get_e() << '\n';
    return 0;
}