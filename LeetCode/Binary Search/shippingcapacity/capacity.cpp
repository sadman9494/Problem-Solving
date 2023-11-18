#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;

int shipWithinDays(vector<int>& weights, int D) {
    auto feasible = [&](int capacity) -> bool {
        int days = 1;
        int total = 0;
        for (int weight : weights) {
            total += weight;
            if (total > capacity) {  // too heavy, wait for the next day
                total = weight;
                days++;
                if (days > D) {  // cannot ship within D days
                    return false;
                }
            }
        }
        return true;
    };

    int left = *max_element(weights.begin(), weights.end());
    int right = accumulate(weights.begin(), weights.end(), 0);

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (feasible(mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main()
{
    vector<int> ship = {1,2,3,4,5,6,7,8,9,10};
    cout<<shipWithinDays(ship , 5);
}