#include <iostream>
using namespace std;

class Solution{
    public:
    int romanToInt(string s){
        int num{0};
        int i{0};
        while(i < s.length()){
            switch(s[i++]){
            case 'M' : num += 1000;
            break;
            case 'D' : num += 500;
            break;
            case 'C' : switch(s[i]){
                        case 'D' : num +=  400 ; ++i;
                        break;
                        case 'M' : num += 900 ; ++i;
                        break;
                        default: num += 100;
            }
            break;
            case 'L' : num +=  50;
            break;
            case 'X' : switch(s[i]){ 
                        case 'L' : num += 40; ++i;
                        break;
                        case 'C' : num += 90; ++i;
                        break;
                        default: num += 10;
            }
            break;
            case 'V' : num += 5;
            break;
            case 'I' : switch(s[i]){
                        case 'V' :  num += 4 ; ++i;
                        break;
                        case 'X' : num += 9 ; ++i;
                        break;
                        default : num += 1;
                        }
            break;
            }
            

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