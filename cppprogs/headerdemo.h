/*This is a header file for headerdemo.cpp file.
*/

//Header guard - ensures that the forward declarations as well 
//are imported ONLY once into a certain file.
#ifndef HEADERDEMO
#define HEADERDEMO  

//The Header file makes sure that the forward declarations are stored in one place including the header files would 
//  make sure that the user doesn't have to forward declare each individual function.
//  By this practice, the One-definition rule cannot be hampered since user 
// can no longer incorrectly forward declare or incorrectly redefine the already defined function. 

//Forward declaration (and not definition. The function is defined in headerdemo.cpp file.)
//  the forward declaration tells the compiler that a double squared(double num) function is a valid identifier whose definition 
//  resides somewhere in all the files compiled. 
// The preprocessor would automatically link(->copy->paste) the definitions into the code after it resolves all the #include directives.

double squared(double num);

#endif