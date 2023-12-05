#include<iostream>
#include<unordered_map>
using namespace std;
void dup(int *ar)
{
  unordered_map<int , int> mp;
  for (int i = 0 ;i < 6; i++) {
    if(mp.find(ar[i]) != mp.end())
    {
        cout<<ar[i]<<endl;
    }
    mp[ar[i]] = i;
  }
}

int main()
{
    int ar[6] = {3,3,3,3,3,3};
    dup(ar);
}