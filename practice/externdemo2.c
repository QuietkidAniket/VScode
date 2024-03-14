#include <stdio.h>

extern int var;
int show(){
    printf("%i", var);
    return 0;
}
int var = 12;