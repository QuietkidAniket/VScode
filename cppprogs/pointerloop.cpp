#include <iostream>
using namespace std;

int count_x(char* p, char x){
    cout<< "p : " << p<< '\n';
    if(*p == '\0')return 0;
    int count = 0;
    while (*p !=  '\0'){
        if(*p == x ) ++count;
    }
    return count;
}

int main(){
    char carr[] {"123455\0"};
    for(auto x : carr){
        cout << x << "\n";
    }
    cout<< "&(carr[0]) : " << carr <<"\n";
    char* ptr {carr};
    cout<< count_x(ptr, 5);
    return 0;
}