// Subarray with given sum(geksforgeeks)
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Brute force approach
class Solution {
  public:
    int subArraySum(vector<int>& arr, int k) {
        int count = 0;
        int currSum;
        for(int i=0;i<arr.size();i++){
            currSum = 0;
            for(int j=i;j<arr.size();j++){
                currSum += arr[j];
                if(currSum==k)
                  count++;
            }
        }
        return count;
    }
};

// Optimised approach 
class Solution {
  public:
    int subArraySum(vector<int>& arr, int k) {
        int count = 0;
        int n = arr.size();
        
        vector<int>prefixSum(n);
        
        prefixSum[0] = arr[0];
        for(int i=1;i<n;i++)
            prefixSum[i] = arr[i] + prefixSum[i-1];
        
        unordered_map<int,int> m;
        
        for(int j=0;j<n;j++){
            if(prefixSum[j]==k) 
               count++;
               
            int val = prefixSum[j] - k;
            
            if(m.find(val) != m.end())
               count += m[val];
               
            if(m.find(prefixSum[j]) == m.end())
                m[prefixSum[j]] = 0;
            m[prefixSum[j]]++;
        }
        return count;
    }
};