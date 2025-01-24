// Majority element (geeksforgeeks)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int maxElement = *max_element(arr.begin(),arr.end());
        vector<int> v(maxElement+1,0);
        
        for(int i=0;i<n;i++)
            v[arr[i]]++;
        
        int m = n/2;
        for(int i=0;i<=maxElement;i++){
            if(v[i]>m)
              return i;
        }
        return -1;
    }
};