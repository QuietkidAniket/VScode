#include <iostream>
using namespace std;

class Solution{
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        vector<int> ans;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<=nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size())
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size())
        {
            ans.push_back(nums2[j]);
            j++;
        }
        double res;
        if(ans.size()%2 == 0)
        {
            int s=0;
            int e=ans.size()-1;
            int mid=s+(e-s)/2;
            res=(ans[mid] + ans[mid+1])/2.0;
        }
        else
        {
            int s=0;
            int e=ans.size()-1;
            int mid=s+(e-s)/2;
            res = ans[mid];
        }
        return res;
    }
};

