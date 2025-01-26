// Maximum Subarray (53)
#include<iostream>
#include<vector>    
using namespace std;
// Brute force approach (TESTCASE PASSED 203/210)
class Solution1 {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        for(int start=0;start<nums.size();start++){
            int currSum = 0;
            for(int end=start;end<nums.size();end++){
                currSum += nums[end];
                maxSum = max(currSum,maxSum);
            }
        }
        return maxSum;
    }
};

// Optimised approach (Kadane's Algorithm) (TESTCASE PASSED 210/210)
class Solution2 {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0,maxSum = INT_MIN;
        for(int val:nums){
            currSum += val;
            maxSum = max(currSum,maxSum);
            if(currSum <0)
               currSum = 0;
        }
        return maxSum;
    }
};