// Search in a Row-Column Sorted Matrix(geeksforgeeks)
#include<vector>
using namespace std;

// Approach 1 | TC : O(log(m*n)) | SC : O(1)
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        for(int i=0;i<mat.size();i++){
            int low = 0,high = mat[0].size()-1;
            int mid = low + (high-low)/2;
            
            while(low<=high){
                if(mat[i][mid]==x)
                   return true;
                else if(mat[i][mid]>x)
                   high = mid-1;
                else
                   low = mid+1;
                mid = low + (high-low)/2;
            }
        }
        return false;
    }
};

// Approach 2 | TC : O(m+n) | SC : O(1)
class Solution {
public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int m = mat.size(), n = mat[0].size();
        int i = 0, j = n - 1;  // Start from top-right

        while (i < m && j >= 0) {
            if (mat[i][j] == x)
                return true;
            else if (mat[i][j] > x)
                j--;  // Move left
            else
                i++;  // Move down
        }
        return false;
    }
};
