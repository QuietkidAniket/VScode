#include <iostream>

template <typename T, typename U>   //this is the template parameter declaration
auto max(T x, U y){        //this is the function template definition  for max<T> 
    return x > y ? x : y;
}

/*similar implementation :
auto max(auto x, auto y){    // an abbreviated function template
    return x > y ? x : y;
}
*/


int main(){
    std::cout << max<int, int>(1,2) << "\n";         //a function instance/template function is created/instantiated
    std::cout << max<>(1.5, 2) << "\n";       // template argument deduction : the compiler will try to deduce an actual argument from the argument types in the function call
    std::cout << max(1,2)  << "\n";              // compiler will consider both max<int, int> template function overloads as well as max() non template function overloads                                          
    return 0;
}