#include <iostream>
using namespace std;

//class Solution{
int main(){
  int32_t x = 0;
  cin >> x;
  int32_t rev = 0;
  while(x > 0){
    rev = rev * 10 + x%10;
    x = x /10;
  }
  if(rev <0)cout << 0 ;
  else cout << rev;
  return 0; 
}
//};
