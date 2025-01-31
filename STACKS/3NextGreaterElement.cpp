// Next Greater Element I (496)
#include<stack>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

// Brute force approach

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            int index = distance(nums2.begin(), it);
            bool found = false;
            
            // Search for the next greater element in nums2
            for (int j = index + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums1[i]) {
                    ans.push_back(nums2[j]);
                    found = true;
                    break;
                }
            }
            
            if (!found) {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};

// Approach: using stack and hashmap

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int,int> map;
        vector<int> ans(nums1.size(),-1);
        for(int i=0;i<nums2.size();i++){
            while(!s.empty() && s.top()<nums2[i]){
                map[s.top()] = nums2[i];
                    // key   = value
                s.pop();
            }
            s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            if(map.find(nums1[i]) != map.end())
               ans[i] = map[nums1[i]];
        }
        return ans;
    }
};