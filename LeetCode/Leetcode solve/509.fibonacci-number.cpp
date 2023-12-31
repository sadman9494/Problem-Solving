/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
public:
    int fib(int n) {
     if (n<=2 && n!=0)
     {
        return 1;
     }   
     if(n == 0)
     {
        return 0;
     }

     return fib(n-1) + fib(n-2);
    }
};
// @lc code=end

