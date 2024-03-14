#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct adate{
    int month : 5;
    int date : 6 ;
    char day[9];
    int year: 12;
};

typedef struct adate Adate;


int main(){
    struct adate *ptr;
    ptr = (struct adate*) malloc(sizeof(struct adate));
    if(ptr  == NULL)
    ptr->month = 2;
    ptr->date = 15;
    strcpy(ptr->day,"Thursday");
    ptr->year=2024;
    printf("%s\n", ptr->day);
    return 0;
}
