// Sliding Window Maximum(239)
#include<vector>
#include<deque>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int>dq;
        vector<int> result;
        for(int i=0;i<n;i++){
            // Step -1 Make space for nums[i]
            while(!dq.empty() && dq.front() <= i-k)
               dq.pop_front();

            // Step -2 
            while(!dq.empty() && nums[i] > nums[dq.back()])
               dq.pop_back();
            
            // Step -3
            dq.push_back(i);

            // Step -4
            if(i>=k-1)
               result.push_back(nums[dq.front()]);
        }    
        return result;
    }
};