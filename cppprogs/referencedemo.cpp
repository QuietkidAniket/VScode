#include <iostream>
using namespace std;

int main(){
    double d = 10.05;
    cout<< d << '\n';
    double& ref = d;
    ref++;
    cout<< "ref : " << ref << '\n';
    cout<< "&ref : " << &ref << '\n';
    cout<< "d : " << d <<'\n';
    cout<< "&d : " <<  &d << '\n';
}