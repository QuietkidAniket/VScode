#include <iostream>
#include <unordered_map>
using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            // stores  target - nums[i] (key) : i (value)
            unordered_map<int, int> actual; 
            
            // searches for a valid actual[ nums[i] ] , if present then returns the indices
            for(int i = nums.size() - 1; i >= 0 ; i--){
                int x = nums[i];            // yeah redundant variable but still helps in reducing complexity
                int a_x = actual[nums[i]];  // same as above
                if(a_x && a_x != i){        
                    return {i,  a_x};
                }
                // storing the pair
                actual[target - x] = i;
            }
            // return empty array if nums[i] is not present in actual
            return {-1,-1};
        }
};
int main(){
    Solution obj;
    vector<int> z = {1,4,7,3,6,7,8,5,10,22,2,9};            // actual = {5 : 0, 2 : 1, -1 : 2, 3 : 3, 0 : 4, -1 : 5, -2 : 6, 1 : 7, -4 : 8, -16 : 9, 4 : 10, -3 : 11}
    int t = 6;
    vector<int> ans = obj.twoSum(z,t);
    cout << ans[0] << ", " << ans[1];
}

