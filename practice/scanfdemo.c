#include <stdio.h>

int main(void)
{
    int x;
    printf("x : ");
    scanf("%i", &x);             // takes the input for x
    printf("x : %i \n", x);

    char* s = NULL;
    printf("s: ");
    scanf("%s",s);
    printf("s : %s\n", s);
    return 0;
}