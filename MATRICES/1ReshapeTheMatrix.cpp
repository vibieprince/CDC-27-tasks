// Reshape the Matrix(566)
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if((m*n)!=(r*c))
           return mat;
        vector<vector<int>>output(r,vector<int>(c));
        int row = 0;
        int col = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                output[row][col] = mat[i][j];
                col++;
                if(col==c){
                    row++;
                    col=0;
                }
            }
        }
        return output;
    }
};