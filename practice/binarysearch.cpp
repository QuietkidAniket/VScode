#include <iostream>
using namespace std;

int binarysearch(int arr[], int key, int left, int right){
  int mid = (left+right)/2;
  if(left > right) return -1;
  if(key == arr[mid])return mid;
  else if(key > arr[mid])return binarysearch(arr, key, mid +1, right);
  else if(key < arr[mid])return binarysearch(arr, key, left, mid -1);
}

int main()
{
  int arr[7] = {8,10,12,21,27,34,42};
  cout << binarysearch(arr, 25, 0, 6);
  return 0;
}
