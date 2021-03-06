/*******************************************************************
* https://leetcode.com/problems/number-of-islands/
* Medium
* 
* Conception: 
*  1. 
*
* Given a 2d grid map of '1's (land) and '0's (water),
* count the number of islands. An island is surrounded by water
* and is formed by connecting adjacent lands horizontally or vertically.
* You may assume all four edges of the grid are all surrounded by water.
*
* Example:
*
* Key:
*  1. 
*
* Advanced:
*  1. 
*
*******************************************************************/
class Solution {
public:
    int count = 0;
    
    void isIsland(int i, int j, vector<vector<char>>& grid, int c, int l){
        if(grid[i][j] == '0') return;
        if(grid[i][j] == '1'){
            grid[i][j] = '0';
        }
        if(i+1 < c) isIsland(i+1, j , grid, c, l);
        if(j+1 < l) isIsland( i ,j+1, grid, c, l);
        if(i-1 >=0) isIsland(i-1, j , grid, c, l);
        if(j-1 >=0) isIsland( i ,j-1, grid, c, l);
    }
    int numIslands(vector<vector<char>>& grid) {
        if (grid.size() == 0 ) return 0;
        int l = grid[0].size();
        int c = grid.size();
        for(int i = 0; i < c; i++){
            for(int j = 0; j < l; j++){
                if(grid[i][j] == '1'){
                    count++;
                    isIsland(i,j, grid, c, l);
                }
            }
        }
        return count;
    }
};