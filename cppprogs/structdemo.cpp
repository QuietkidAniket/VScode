#include <iostream>
using namespace std;

struct Vector{
    int sz;
    double* elem;
};


void vector_init(Vector& v, int s){
    v.elem = new double[s];
    v.sz = s;
}


int main(){
    Vector v;
    int s;
    cin >> s;
    vector_init(v,s);
    for (int i = 0; i != s; ++i) cin >> v.elem[i];
    double sum = 0;
    for(int i= 0; i!= s; ++i)sum += v.elem[i];
    cout << sum;
    return 0;
}
