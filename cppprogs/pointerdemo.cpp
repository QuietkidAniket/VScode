#include <iostream>
using namespace std;
/*
 prefix unary '*' means 'content of'  and prefix unary '&' means 'address of' 
 T a[n]; // T[n]: array of n Ts
 T∗ p; // T*: pointer to T
 T& r; // T&: reference to T
 T f(A); // T(A): function taking an argument of type A returning a result of type T
*/


int main(){
    int v[] = {1,2,3,4,5};
    for (auto x : v) cout<< x << '\n';

    int* ptr = &v[2]; //This is a pointer variable (a pointer to int), which stores the address of v[2]

    cout<< "The value of ptr : "<< ptr<<'\n';
    cout<< "The value of &v[2] : " << &v[2] << '\n';
    cout<< "The value of *ptr : " << *ptr << '\n';
    cout<< "The value of &ptr : " << &ptr << '\n';
    cout<< "After changing the value of *ptr \n";
    *ptr = 9;
    cout<< "The value of ptr : "<< ptr<<'\n';
    cout<< "The value of &v[2] : " << &v[2] << '\n';
    cout<< "The value of *ptr : " << *ptr << '\n';
    cout<< "The value of &ptr : " << &ptr << '\n';

    return 0; 
}