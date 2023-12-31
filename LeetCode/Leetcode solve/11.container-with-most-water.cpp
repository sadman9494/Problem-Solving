/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
     auto maxElement = max_element(height.begin(), height.end());
     int maxIdx = distance(height.begin(),maxElement);

     int i=0;
     int j = maxIdx;
     int maxWater = 0;
     while (i<height.size())
     {
        int Water = min(height[j] , height[i]) * abs(j-i) ;
         if(Water > maxWater)
         {
            maxWater = Water;   
         }
         i++;
     }
        
    }
};
// @lc code=end

