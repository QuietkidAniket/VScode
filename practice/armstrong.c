#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    // any changes to copy doesn't affect n
    int copy = n;
    // noofdigit stores the number of digits;
    // sum stores the sum of the digits raised to the no of digits
    int noofdigit = 0, sum = 0;
    while(copy){
        noofdigit++;
        copy /= 10;
    }
    copy = n;
    while(copy){
        int digit = copy %10;
        sum += pow(digit, 3);
        copy /=10;
    }
    if(sum == n){
        printf("%d is an Armstrong Number", n);
    }else{
        printf("%d is not a Armstrong Number",n);
    }
    
    return 0;
}