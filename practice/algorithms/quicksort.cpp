#include <iostream>
#include <vector>
using namespace std;
template <typename T>
vector<T> quicksort(vector<T> array){
    if(array.size() < 2){
        return array;
    }else{
        auto pivot = array[0];
        vector<T> lower;
        vector<T> greater;
            for(int i = 1; i < array.size(); i++){
                if(array[i] <= pivot){
                    lower.push_back(array[i]);
                }else{
                    greater.push_back(array[i]);
                }
            }
        lower = quicksort(lower);
        vector<T> final(lower);
        final.push_back(pivot);
        greater = quicksort(greater);
        final.insert(final.end(), greater.begin(), greater.end());
        return final;
    }
}
int main(){
    vector<int> x {12,42,4,3,2,56,23,5,2,1};
    x = quicksort(x);
    for(int elem : x){
        cout << elem << '\n';
    }
}
