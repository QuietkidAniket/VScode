#ifndef DATABASE_H
#define DATABASE_H

#define REGNO_SIZE 9
#define YEAR_SIZE 4
#define NAME_MAX_SIZE 50
#define NO_OF_DIGITS_LONG_LONG_INT 19

typedef struct {
    char* regno;    // university registration number
    char* name;     // name of the student
    int age;        // age of the student
    float cgpa;     // cgpa of the student
    char* yearofjoining;    // year in which student joined the university
} Student;



//store, retrieve, update, delete
void store(Student* student);
Student* retrieve(char regno[9]);
void update(Student* student);
void delete(Student* student);

#endif