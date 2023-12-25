#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int dup1(vector<int>& nums)
{
 // erase() function time complexity is O(n)
  // total time complexity is O(n2)
      unordered_map<int , int> map;
        int count =0;
        for (int i = 0; i< nums.size(); i++)
        {
            if( map.find(nums[i]) != map.end() )
            {
                count++;
                nums.erase(nums.begin()+i);
                i--;
            }
            map[nums[i]] = i;
        }
      return nums.size() - count;
}

int dup(vector<int>& nums)
{
  int k =1,i = 1 ; // i=0
  while(i+1<nums.size())
  {
    if(nums[i] != nums[i-1])
    {
      nums[k] = nums[i];
      k++;
    }
    i++;
  }
  return k;
}
//2,3,4,3,4

int main()
{
    vector<int> num = {1,1,2};
    cout <<"k = ";
    cout<<dup1(num)<<endl;
    
    for (int i : num)
    {
      cout<<i<<endl;
    }
}

