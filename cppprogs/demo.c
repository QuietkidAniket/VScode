#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 1000

int main(){
    char arr[MAX_LIMIT];
    fgets(arr, MAX_LIMIT, stdin);
    printf("%lu", strlen(arr));
}