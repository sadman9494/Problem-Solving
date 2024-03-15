#include <iostream>
#include <vector>

using namespace std;
    int lengthOfLIS(vector<int>& nums) {
        int tails[nums.size()] ;
        int size = 0;
        for (int x : nums) {
            int i = 0, j = size;
            while (i != j) {
                int m = (i + j) / 2;
                if (tails[m] < x)
                    i = m + 1;
                else
                    j = m;
            }
            tails[i] = x;
            if (i == size) ++size;
        }
        return size;
    }

int main() {
    // Example usage:
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    int result = lengthOfLIS(nums);

    cout << "Length of Longest Increasing Subsequence: " << result << endl;

    return 0;
}