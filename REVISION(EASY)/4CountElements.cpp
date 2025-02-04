// count elements with maximum frequency (3005)
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxElement = *max_element(nums.begin(),nums.end());
        vector<int> count(maxElement+1,0);
        for(int i : nums)
            count[i]++;
        sort(count.rbegin(),count.rend());
        int ans = 0,maxFreq = count[0];
        for(int freq : count){
            if(freq!=maxFreq)
               break;
            ans += freq;
        }
        return ans;
    }
};