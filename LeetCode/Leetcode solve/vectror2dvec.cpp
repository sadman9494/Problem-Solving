#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> myMap;
        vector<std::vector<int>> result;

        // Step 1: Count the frequency of each element
        for (int i = 0; i < nums.size(); i++) {
            myMap[nums[i]]++;
        }

        // Step 2: Find the maximum frequency
        auto maxFreqPair = std::max_element(
            myMap.begin(),
            myMap.end(),
            [](const auto& lhs, const auto& rhs) {
                return lhs.second < rhs.second;
            }
        );
         int s = maxFreqPair->second;
        // Step 3: Construct the matrix based on frequency
        if (maxFreqPair != myMap.end()) {
            for (int j = 0; j < s; j++) {
                
                std::vector<int> v;
                for (auto& f : myMap) {
                    if (f.second > 0) {
                        v.push_back(f.first);
                        f.second--;
                    }
                }
                result.push_back(v);
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1,2,3,4};
    std::vector<std::vector<int>> result = solution.findMatrix(nums);

    std::cout << "Matrix with maximum frequency elements:" << std::endl;
    for (const auto& row : result) {
        for (int val : row) {
            std::cout << val << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}
