/*
 * @lc app=leetcode id=1351 lang=cpp
 *
 * [1351] Count Negative Numbers in a Sorted Matrix
 */

// @lc code=start
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count =0;
        int row =grid.size()-1;
        int col = 0;
        while (row >=0 || col >grid[0].size()-1 )
        {
            if(grid[row][col] <0)
            {
                count = count + (grid[0].size() - col);
                row --;
            }
            else 
            col++;

        }
        return count;
        
    }
};
// @lc code=end

