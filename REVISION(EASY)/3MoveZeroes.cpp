// Move all zeroes to end(geeksforgeeks)
#include<vector>
using namespace std;
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int j = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
};