#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

    int missingInteger(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int sum = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }

        while (numSet.find(sum) != numSet.end()) {
            sum += 1;
        }

        return sum;
    
}

int main() {
    vector<int> nums = {38};
    cout << missingInteger(nums) << endl;

    return 0;
}
