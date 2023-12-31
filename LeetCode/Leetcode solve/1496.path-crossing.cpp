/*
 * @lc app=leetcode id=1496 lang=cpp
 *
 * [1496] Path Crossing
 */

// @lc code=start
class Solution {
public:
    bool isPathCrossing(string path) {
         set<pair<int,int>>cord;
         cord.insert({0, 0}); 
        int x=0; int y=0;
        for (char z:path)
        {
            if(z == 'N')
            {
                x++;
            }
            else if(z == 'S')
            {
                x--;
            }
            else if(z == 'E')
            {
                y++;
                
            }
            else 
            {
                y--;
                
            }

            if(!cord.insert({x,y}).second)
                {
                    return true;
                }
        }
        return false;
    }
};
// @lc code=end

