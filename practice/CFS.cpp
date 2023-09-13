// Consecutive Four Sum Number
// A positive integer is called as a `Consecutive Four Sum (CFS) number' if that number can be expressed as the sum of four consecutive positive integers.  10 is a CFS number since 10= 1+2+3+4; 50 is a CFS number since 50= 11+12+13+14.  7 is not a CFS number since  7 cannot be expressed as a sum of four consecutive number.  Similarly, 20 is not a CFS number.  Given a number `n', write an algorithm and the subsequent python code to check whether the given number is a CFS number or not. If so, your code should  print 1 ( here, 1 is an indicator which conveys that the given number is a CFS number)  and also print the starting integer among the four consecutive integers.  If the given number is not a CFS number, your code should output 0.  For eg, if 10 is the input, your code should output : 1 and 1.  Here 1 is the starting integer of the four consecutive integers for 10. If 7 is the input, your code should output : 0.  Given the integer 20, your code should output only 0.

// Input format:

// Enter the positive integer

// Output format :

// 0 or 1   (If the given number is a CFS , output should be 1;  If the given number is not a CFS, it should be 0.)

// Starting integer of the four consecutive integers. ( The second output, is applicable only when the first output is 1)

// Sample Input :

// 10

// Sample Output 

// 1

// 1

// Note : The two outputs should be printed in two separate lines

// Program : 




#include <iostream>
using namespace std;

int CFS(int n){ 
    // Since n = x + (x + 1) + (x + 2) + (x + 3) =  2 ( 2x + 3) i.e. x = (n -6)/4   and x >= 0
    // the number should be even
    if(n % 2 != 0)return 0;
    // the number should be greater than or equal to 6
    if(n < 6)return 0; 
    // Calculate x
    float ans = (float(n)- 6.0)/4.0;
    // reject x which have numbers after decimal 
    return ans - int(ans) == 0? int(ans) : 0;
}


int main(){
    int n;
    cin >> n;
    int ans = CFS(n);
    if(ans == 0){
        cout<< "0";
        return 0;
    }
    cout << "1\n";
    cout << ans;
    
    return 0;
}

 
