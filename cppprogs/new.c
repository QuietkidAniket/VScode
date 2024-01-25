#include <stdio.h>
#include <stdlib.h>

int main(){

char  data[] = "We are Champions";
int DATA_SIZE = sizeof(data)/sizeof(char);
//sizeof(*data)/sizeof(char);
printf("%s , length : %i", data, DATA_SIZE);
return 0;
}