// Matrix Boundart Traversal(geeksforgeeks)
#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int> >& mat) {
        vector<int> ans;
        int i,j;
        for(j=0;j<mat[0].size();j++)
            ans.push_back(mat[0][j]);
        for(i=1;i<mat.size();i++)
            ans.push_back(mat[i][mat[0].size()-1]);
        for(j=mat[0].size()-2;j>=0;j--)
            ans.push_back(mat[mat.size()-1][j]);
        for(i=mat.size()-2;i>0;i--)
            ans.push_back(mat[i][0]);
        return ans;
    }
};