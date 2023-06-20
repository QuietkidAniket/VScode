#include <iostream>
#include <map>
using namespace std;

class Solution{
    public:
    int romanToInt(string s){
        //defining a map of all roman numerals binded to their corresponding decimal values
        map<char, int> roman;
        roman['I'] = 1   ; 
        roman['V'] = 5   ;
        roman['X'] = 10  ;
        roman['L'] = 50  ;
        roman['C'] = 100 ;
        roman['D'] = 500 ;
        roman['M'] = 1000;
        
        //num would be returned, i.e., it will store the decimal number
        int num {0};
        //prev will store whatever the previous digit were
        int prev{1000};
        //looping through the entire string to extract the corresponding decimal digits
        for(auto x : s){
            //digit is used to store the digit extracted temporarily
            int digit{roman[x]};
            //if the preceding numeral's value is less than the next one, then subtract the previous one twice from the number and add the digit, else only add the digit to the number
            num += digit  + (prev < digit ? -2 * prev : 0);
            prev = digit;
        }
        return num;
    }
};
int main(){
    Solution obj;
    cout << obj.romanToInt("MMXXIII") << '\n';
    cout << obj.romanToInt("MCDDLXXXIV") << '\n';
    return 0;
}