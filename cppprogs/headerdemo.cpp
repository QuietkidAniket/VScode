//It is the best practice to include the paired header files in the code files. 
//This enables the compiler to detect errors before the linker does by consuming much more time.
#include "headerdemo.h" //paired header file


double squared(double num){
    return num * num;
}