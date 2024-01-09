#include <iostream>
using namespace std;

// decimal to binary
int bin(int n){ 
  if(n == 2) return 10;
  if(n == 3) return 11;
  return 10* bin(n>>1) + n%2;
}

bool half_adder(const bool a, const bool b){
  return a ^ b;
}
bool* full_adder(bool a, bool b, bool cin){
  bool s = half_adder(a,b);
  bool cout = (a & b) | (cin & s); 
  bool ans[2] = {cout , s};
  return ans;
}
  //return 10*add(a/10,b/10, carry) + bit;

int main(){ 
  bool* ans = full_adder(1, 1, 1);
  cout << ans[0] << ans[1] << '\n';
  cout << true;
  return 0;
}
