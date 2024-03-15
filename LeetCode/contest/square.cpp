#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int , int> map;
        int ans;
        vector<int> res;
        for(int i =0; i<nums.size(); i++)
        {
            if(map.find(nums[i]) != map.end())
            {
                nums[0] == 1? ans = nums[0] + i : ans = nums[0] - i;
                res.push_back(nums[i]);
                res.push_back(ans);

                
            }
            else
            {
                map[nums[i]] = i;
            }
        }
        return res;
    }
int main() {
    
    std::vector<int> input = {2, 3,2};
    std::vector<int> result = findErrorNums(input);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}