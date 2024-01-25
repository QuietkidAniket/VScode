#include <stdio.h>

int main(){
    int n;
    printf("Enter the no. of characters to be input : ");
    scanf("%i\n",&n);
    char s[n];
    fgets(s, n, stdin);
    int array[128];
    for(int i = 65; i < 128; i++){
        array[i] = 0;
    }
    for(int i = 0; i < n ; i++){
        if((int)s[i] >=65){
        array[(int)s[i]]++; 
        }
    }
    for(int i = 65; i < 128 ; i++){

        printf("%c occurs %i times \n",(char)i, array[i]);
        
    }
    return 0;
}