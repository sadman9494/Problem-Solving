/*
 * @lc app=leetcode id=1578 lang=cpp
 *
 * [1578] Minimum Time to Make Rope Colorful
 */

// @lc code=start
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.length()-1;
        int count =0;
        int i = 1;
        int j=0;
        while ( i<=n)
        {
            if(colors[j] == colors[i])
            {
                if(neededTime[j]>neededTime[i])
                {
                    count+=neededTime[i];
                    i++;
                }
                else 
                {
                    count+=neededTime[j];
                    j = i;
                    i++;
                }
                
            }
            else{
                
            j=i;
            i++;

            }
        }
        return count;
    }
};
// @lc code=end

