#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int mySqrt(int x) {
      

      int l = 0 , r = x, mid = 0;
      while(l<=r)
        {
            mid = l+(r-l)/2;
            if(mid * mid > x)
            {
                r = mid-1;
            }
            else
            {
                l= mid+1;
            }
        }
        return l-1;
    }

int main()
{
    cout<<mySqrt(1);
}