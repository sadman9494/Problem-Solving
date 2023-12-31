/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int m = 0;

        while(l<=r)
        {
             m = l+(r-l)/2;
            if (nums[m] > target)
            {
                r = m-1;
            }
            else if (nums[m]< target)
            {
                l = m+1;
            }
            else 
            {return m ;}
        }
        
        return -1;
        // 0 1 2 3 4 5 
    }
};
// @lc code=end

