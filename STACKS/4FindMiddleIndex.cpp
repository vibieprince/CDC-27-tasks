// Find the Middle Index in Array(1991)
#include<vector>
#include<numeric>
#include<stack>
using namespace std;

// Normal Approach (less memory required)
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(),nums.end(),0);
        int leftSum = 0;
        int rightSum = 0;
        for(int i=0;i<nums.size();i++){
            rightSum = totalSum - nums[i] - leftSum; 
            if(leftSum==rightSum)
               return i;
            leftSum += nums[i];
        }
        return -1;
    }
};
// Approach: Using stack (more memory required)
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        stack<int> leftStack;
        int leftSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i];

            if (leftSum == rightSum)
                return i;

            leftStack.push(leftSum);  // Store left sum in stack
            leftSum += nums[i];       // Update left sum
        }
        return -1;
    }
};