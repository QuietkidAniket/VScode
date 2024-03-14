#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    int sum = 0;
    for(int i = 0; i< n; i++){
        cin>> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<< ' ';
        sum += arr[i];
        delete[] arr;
    }
    cout<< '\n' << " Sum is " <<  sum<< '\n';
    return 0;
}