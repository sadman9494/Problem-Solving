#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;

int searchInsert( vector<int>& arr ,int t)
{
    int l=0 ,r = arr.size()-1 , mid=0;
    while (l<=r)
    {
        mid = l+(r-l)/2;
        if(arr[mid] > t)
         {
            r = mid-1;
         }
       else if(arr[mid] < t)
         {
            l = mid+1;
         }
        else
        {
            return mid;
        }
    }

   
 return l;
   
}

int searchInsert1(vector<int>& arr , int t)
{
        auto it = lower_bound( arr.begin() ,arr.end() , t );
        return (it == arr.end()) ?  arr.size() : (it - arr.begin());
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,8};
    cout << "index" << endl;
    //cout<<searchInsert(arr , 9);
    cout << searchInsert1(arr, 9);


    return 0;
}