class Solution {
public:
    int reverse(int x) {
    int32_t rev = 0;
    int copy = abs(x);
    int sign = x >= 0 ? 1 : -1;
    while(copy > 0){
    
    if(rev *10l + copy%10 > INT_MAX){
        rev = 0;
        break;
    } 
    rev = rev*10 + copy%10;
    copy = copy /10;
    
    }
    return rev*sign;
    }
};
