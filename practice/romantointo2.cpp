
#include <iostream>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int ans = 0, num = 0;
        for (int i = s.size() - 1; ~i; i-- ){
            switch(s[i]){
                case 'I': num = 1; break;
                case 'V': num = 5; break;
                case 'X': num = 10; break;
                case 'L': num = 50; break;
                case 'C': num = 100; break;
                case 'D': num = 500; break;
                case 'M': num = 1000; break;
            }
            //for any arbitrary roman number, a digit cannot be repeated more than three times consecutively.
            // so the 4 times the value of any arbitrarily selected digit in a number should be more than the total value of the remaning digits following it
            // for adding it up to the existing number
            // otherwise it is subtracted from the value of the previous forming digits
            // such as :  
            //  for C_X_XXVIII
            // (2 * 10 + 5 + 3 * 1)= 28 < 4 * 10        therefore add 10 to 28 
            // _C_XXXVIII
            // (3* 10 + 1 * 5 + 3 *1 )= 38   < 4 * 100  therefore add 100 to 38
            //  for _I_V
            //  (5 ) > 4 x 1                            therefore subtract 1 from 5
        
            if(4 * num < ans) ans -= num;
            else ans += num;
        }
        return ans;
    }
};


int main(){
    Solution obj;
    cout << obj.romanToInt("MMXXIII") << '\n';
    cout << obj.romanToInt("MCDDLXXXIV") << '\n';
    return 0;
}