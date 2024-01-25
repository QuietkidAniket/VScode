#include <iostream>
#include <unordered_map>
using namespace std;

/*
    Returns the index of the first occuring integer from an array; 
    first occuring integer : is the index-wise first integer element in an array which occurs more than once in the array
    Time complexity of the algorithm implemented  : O(n)
*/
int main(){
    unordered_map<int,int> occurence;
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }
    for(int i = 0; i <n; i++){
        if(occurence[arr[i]] > 0){
            cout<< occurence[arr[i]]<<'\n';
            return 0;
        }
        occurence[arr[i]] = i;
    }
    cout << -1;
    return 0;
}