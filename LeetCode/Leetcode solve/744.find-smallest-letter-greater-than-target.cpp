/*
 * @lc app=leetcode id=744 lang=cpp
 *
 * [744] Find Smallest Letter Greater Than Target
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;


char nextGreatestLetter(vector<char>& letters, char target) {
             int l = 0 , r = letters.size()-1 , m = 0;
        while (l<=r)
        {
            m= l+(r-l)/2;
            if (letters[m] < target)
            { l = m+1;}
            else if (letters[m] > target)
            { r= m-1;}
            else 
            {
                if (letters[m]== letters[m+1] && m+1 < letters.size())
                {
                    return letters[0];
                }
                else 
                {return letters[m+1];}
            }
        } 
        return l<letters.size() ? letters[l] : letters[0];

    }
    

int main() {
    // Example usage of nextGreatestLetter function
    vector<char> letters = {'c', 'g','g','k'};
    char target = 'g';

    char result = nextGreatestLetter(letters, target);

   
    cout << "'the next greatest letter is: " << result << std::endl;

    
}

// @lc code=end

