#include <iostream>
using namespace std;
/*
Median : for odd number of total elements n, median = (n+1)/2th element.
        for even number of total elements n, median = [ (n/2)th element + (n/2 + 1)th element ]/2. 
*/

class Solution {
public:
    void insert_sort(vector<int>& arr, int length){
        int i, key, j;
        for(i = 1; i < length; ++i){
            key = arr[i];   //selecting an element
            j = i - 1;      //setting j
            while(j >= 0 && arr[j] > key){
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = key;
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int tot{static_cast<int>(nums1.size() + nums2.size())};
        cout<< "size : " << tot<< "tot%2 : "<<tot%2 << '\n';
        //joining both the vectors into nums1
        for(int x : nums2)nums1.push_back(x);
        //sorting the array
        insert_sort(nums1, tot);
        for(auto x : nums1)cout<< x <<'\n';
        //calculating the median
        double median { tot % 2 == 0 ?  static_cast<double>( ( nums1[(tot/2)  - 1] + nums1[(tot/2)] )/ 2.0 ) :  nums1[(tot + 1)/2    - 1] };
        return median;

   }    
};

int main(){
    Solution obj;
    vector<int> arr1 {1,2,5};
    vector<int> arr2 {3,7,4};
    cout<< obj.findMedianSortedArrays(arr1, arr2) << '\n';
    return 0;
}