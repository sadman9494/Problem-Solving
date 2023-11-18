#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

bool isBadVersion(int i )
{
    if( i == 0)
    {
      return true;
    }
    else{
      return false;
    }
    
}


int firstBadVersion(int n) {
    int l = 0 , r = n;
       while (l<r)
       {
           int mid = l+(r-l)/2;
           if (isBadVersion(mid))
           {
               r = mid ;
           }
           else 
            {
                l = mid+1;
            }
       }
       return l;
    }

int main()
{
    cout<<firstBadVersion(8);
}