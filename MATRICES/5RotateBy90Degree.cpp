// Rotate By 90 Degree(geeksforgeeks)
#include<vector>
#include<iostream>
using namespace std;
void rotate(vector<vector<int> >& mat) {
    // firstly transpose the matrix by swapping elements
    for(int i=0;i<mat.size();i++){
        for(int j=i+1;j<mat[0].size();j++)
            swap(mat[i][j],mat[j][i]);
    }
    
    // Now reverse each of its row 
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size()/2;j++){
            swap(mat[i][j],mat[i][mat[0].size()-j-1]);
        }
    }
}