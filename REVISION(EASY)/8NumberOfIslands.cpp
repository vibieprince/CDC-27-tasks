// Find the number of islands(geeksforgeeks)
#include<vector>
using namespace std;
class Solution {
    void recursiveCall(vector<vector<char>>&grid,int i,int j){
        // Base Case
        if(i<0 || j<0 || i>=grid.size() || j>= grid[0].size() || grid[i][j]=='0')
            return;
            
        // Processing
        grid[i][j] = '0';
        
        // Recursive call
        recursiveCall(grid,i+1,j);
        recursiveCall(grid,i-1,j);
        recursiveCall(grid,i,j+1);
        recursiveCall(grid,i,j-1);
        
        // Diagonal Calls
        recursiveCall(grid,i+1,j+1);
        recursiveCall(grid,i-1,j-1);
        recursiveCall(grid,i-1,j+1);
        recursiveCall(grid,i+1,j-1);
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int count = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    recursiveCall(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};