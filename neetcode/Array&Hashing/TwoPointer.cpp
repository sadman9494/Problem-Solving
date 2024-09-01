#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twopointer(vector<int>& nums, int target)
{
   unordered_map<int , int> mp;
   int sub;
   for (int i = 0; i<nums.size();i++) {
    sub = target - nums[i];
     if (mp.find(sub) != mp.end())
     {
        return {mp[sub], i};
     }
     mp[nums[i]]=i;
   }
   return {};
}

int main()
{
    vector<int>nums = {2,7,8,9};
    vector<int> ans = twopointer(nums, 9 );
    for (int i : ans)
    {
        cout<< i<<endl;
    }
}