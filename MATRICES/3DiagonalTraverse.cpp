// Diagonal Traverse (498)
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m = mat.size();
        int n = mat[0].size();
        int i=0,j=0;
        bool up = true;
        while(i< m && j< n){
            // Diagonal traversing up
            if(up){
                while(i>0 && j<n-1){
                    ans.push_back(mat[i][j]);
                    i--;
                    j++;
                }
                ans.push_back(mat[i][j]);
                if(j==n-1) i++;
                else j++;
            }
            // Diagonal traversing down
            else{
                while(j>0 && i<m-1){
                    ans.push_back(mat[i][j]);
                    i++;
                    j--;
                }
                ans.push_back(mat[i][j]);
                if(i==m-1) j++;
                else i++;

            }
            up = !up;
        }
        return ans;
    }
};