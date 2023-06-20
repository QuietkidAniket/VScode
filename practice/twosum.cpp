#include <iostream>
using namespace std;

class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, target){
         auto length {nums.size()};
        // O( n^2)   .....
        for(int i {0}; i < length - 1; i++){
            for(int j {i+1}; j < length ; j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};

                }
            }
        }
        return {};
    }
};

