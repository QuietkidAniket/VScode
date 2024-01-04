#include <iostream>
#include <limits>
using namespace std;

class Solution {
public:
    //driver function
    int maxSubArray(vector<int>& nums) {
        return max_subarray(nums, 0, nums.size() -1);
    }
    // finds the length of the maximum subarray 
    int max_subarray(vector<int>& a, int low, int high){
        // base case
        if(low > high)return INT_MIN;
        // middle of the array
        int mid = (low+high) >> 2;
        // 
        int leftsum = 0, rightsum = 0;
        int sum = 0;
        for(int i = mid-1; i >= low; i--){
            sum+= a[i];
            if(leftsum < sum){
                leftsum = sum;
            }
        }
        sum = 0;
        for(int i = mid +1; i <= high; i++){
            sum += a[i];
            if(rightsum < sum){
                rightsum = sum;
            }
        }
        // return the maximum of the subarrays left, right and cross
        return max({max_subarray(a,low,mid-1), max_subarray(a, mid + 1, high), (leftsum + rightsum + a[mid]) });
    }
};

int main(){
    Solution obj;
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = obj.maxsubArray(arr);
    cout << ans<< '\n';

}