#include <iostream>
enum Type{ str, num};

//Union is a struct in which all the members are allocated at the same address so that union occupies only as much space as its largest number
// Naturally union can hold a vlaue for only one member at a time.
union Value{
    char* s;
    int i;
};

struct Entry{
    char* name;
    Type t;
    Value v; //use v.s if t==str; usev.i if t==num
};

void f(Entry* p){
    if( p-> t == str)cout<< p-> v.s;
    else cout<< p-> v.i;
}