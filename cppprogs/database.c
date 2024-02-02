#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "database.h"

int main(int argc, char** argv){
    
    
    // Store
    printf("Enter the details of the student in this format : Registration Number\tName\tAge\tCGPA\tYear of joining\n  ");
    char regno[REGNO_SIZE];
    char yearofjoining[YEAR_SIZE];
    char name[NAME_MAX_SIZE];
    int age;
    float cgpa;
    scanf("%s",regno);
    scanf("%s",name);
    scanf("%i",&age);
    scanf("%f", &cgpa);
    scanf("%s", yearofjoining);
    Student* student = malloc(sizeof(Student));
    //strcpy(student->regno, regno);
    student->regno = strdup(regno);
    //strcpy(student->name, name);
    student->name = strdup(name);
    student->age = age;
    student->cgpa = cgpa;
    // strcpy(student->yearofjoining, yearofjoining);
    student->yearofjoining = strdup(yearofjoining);
    store(student);
    return 0;
}


void store(Student* student){
    FILE* database;
    database = fopen("database.csv", "a+");
    rewind(database);
    FILE* regs;
    regs = fopen("regs.csv", "a+");
    FILE* size1;
    size1 = fopen("size.txt", "r");
    char ch[REGNO_SIZE]; 
    
    // finding length of the database
    long sizeofdatabase = 0;
    char* num;
    fgets(num, NO_OF_DIGITS_LONG_LONG_INT, size1);
    printf("num : %s",num);
    sizeofdatabase = strtol(num, NULL, 10);
    printf(" length of database : %li \n",sizeofdatabase);    
    fclose(size1);
    FILE* size2;
    size2 = fopen("size.txt", "w+");
    
    //checking whether the Registration number is already present or not
    int isRegnoAlreadyPresent = 0;
    for(int i =1; i<= sizeofdatabase; i++){
        fgets(ch, REGNO_SIZE, regs);
        printf("ch : %s\n",ch);
        if(strcmp(student->regno, ch) == 0){
            printf("Student record with %s Registration number already present, Try updating using ",ch);
            isRegnoAlreadyPresent=1;
            break; 
        }
    }
    if(!isRegnoAlreadyPresent){
        fprintf(database, "%s,", student->regno);
        fprintf(database, "%s,", student->name);
        fprintf(database, "%i,", student->age);
        fprintf(database, "%2.2f,", student->cgpa);
        fprintf(database, "%s\n", student->yearofjoining);
        fprintf(regs, "%s\n", student->regno);
        fprintf(size2, "%li\n", sizeofdatabase+1);
        printf("Student record with Registration number %s successfully added to database \n",student->regno);
    }
    fclose(database);
    fclose(regs);
    fclose(size2);
}