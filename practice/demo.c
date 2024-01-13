#include <stdio.h>



int main(){
    int n = 45678;
    
    int a, b; // declaration
    a = 0, b = 0; // initilizato
    int sign = 1; 
    int copy = n;
    while(copy > 0){
        int digit = copy%10;
        if(sign > 0){
            a= a *10 + digit++; 
        }else{ // sign < 0
            b = b *10 + digit--; 
        }
        sign = sign * (-1);
        copy = copy/10;
    }
   
   printf("%i",digit);


}