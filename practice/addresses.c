#include <stdio.h>
#include "cs50.h"
int main(void)
{
    char* s = "HI!";  // condensed form of char* s = {'H', 'I', '!', '\0'}
    //our modified version : 
    string mystring = "HI! This is my string";
    int n = 50;
    int* p = &n;
    printf("%p\n", p);
    printf("%i\n", *p);
    printf("s : %p \n", s);      // prints the same address          
    printf("&s[0] : %p \n", &s[0]);  // prints the same address
    printf("%s \n", mystring);       // prints the string 
    
    // _________________________________________________ char* pointer arithmetic ________________________________________________________
    printf("%c \n", *s);    // dereferencing a char*
    printf("%c \n", *s + 2);// dereferencing the first element + 2
    printf("%c \n", *(s+2));// dereferencing the 3rd element, char* is hexadecimal so 2 is added to the hexadecimal memory address

    printf("%s \n", s);     // s is char* - a hexadecimal memory address, %s implicitly dereferences the char* to char
    printf("%s \n", s+1);   // s + 1 is the hexadecimal memory address of first element + 1, and %s dereferences it   
    printf("%s \n", s+2);   // same thing follows here as well
    // string is implicitly converted into char* on creation, hence treated the same
    printf("%s \n", mystring + 2);
}