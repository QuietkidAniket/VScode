/*
* A c plus plus code to demonstrate the insertion sort algorithm
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    // a vector of all the numbers
    vector<int> list;
    // length of the list of all the elements
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        list.push_back(temp);
    }
    cout<< "Sorted Array : " << '\n';
    for(int i = 1; i < n; i++){
        // element to be compared with and placed at the correct position in array
        int key = list[i];
        // shifting the elements to right which are less than key
        int j =  i - 1;
        while(j > 0 && list[j] > key){
            list[j+1] = list[j]; 
            j--;
        }
        // finally placing key in its right position such that all the elements to its left are more than it.
        list[j+1] = key;
    }
    // Displaying list
    for(auto x : list){
        cout << x << '\n';
    }
}