// Leader in an array(geeksforgeeks)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Approach 1 | Testcase passed 1110/1111
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        for(int i=0;i<arr.size()-1;i++){
            int maxElement = *max_element(arr.begin()+i,arr.end());
            if(arr[i]>=maxElement)
               ans.push_back(arr[i]);
        }
        ans.push_back(arr[arr.size()-1]);
        return ans;
    }
};

// Approach 2 | Testcase passed 1111/1111
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size()-1;
        int maxElement = arr[n];
        ans.push_back(maxElement);
        
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=maxElement){
                maxElement = arr[i];
                ans.push_back(arr[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};