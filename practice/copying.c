#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char *s = "hi!";
    // in case s contains only null character
    if(s == NULL)
    {
        return 1;
    }
    char *t = malloc(strlen(s)+ 1);  // allocate the memory for the entire set of characters + the null character (\0)
    // malloc returns the address of the first byte of the free memory
    for(int i = 0, n = strlen(s); i <= n ; i++) // iterates till the index of the null character
    {
        t[i] = s[i];                // now copy the the string characterwise and *not* the address of each characters
    }
    // substitute statement for copying a string : strcpy(destination, source)
    if(strlen(t) > 0)
    {
        t[0] = toupper(t[0]);       // just converts the first character to uppercase
    }
    // the contents of t is stored at an address different from s and hence changes in t do not affect s
    
    printf("s : %s \n", s);
    printf("t : %s \n", t);
    // free the allocated memory
    free(t);
    return 0;
}