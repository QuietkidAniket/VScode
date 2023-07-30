#include <stdio.h>
#include <string.h>
int main(void){
    char* s = "Hi!";
    char* x = "Hi!";
    if(!strcmp(s,x)){           //strcmp returns 0 if the strings are different, and returns 1 if they are the same alphebetically
        printf("Same strings");
    }else{
        printf("Different strings");
    }
}
