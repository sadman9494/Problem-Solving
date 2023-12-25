#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

/*
int maxsum = 0;
int crossingMaxSum = 0;
*/
/*int maxCrossingSum(int X[], int l, int mid, int r) {

  int sum = 0;

  int maxLeftSum = INT_MIN;
  for (int i = mid; i >= l; i = i - 1) {

    sum = sum + X[i];

    if (sum > maxLeftSum)

      maxLeftSum = sum;

  }
  sum = 0;

  int maxRightSum = INT_MIN;

  for (int i = mid + 1; i <= r; i = i + 1) {

    sum = sum + X[i];

    if (sum > maxRightSum)

      maxRightSum = sum;

  }
  return (maxLeftSum + maxRightSum);

}*/

int findMaxSubarraySum(int X[], int l, int r) {

  if (l == r)

    return X[l];

  else

  {

    int mid = l + (r-l) / 2;

    int leftMaxSum = findMaxSubarraySum(X, l, mid);

    int rightMaxSum = findMaxSubarraySum(X, mid + 1, r);

     int crossingMaxSum = leftMaxSum + rightMaxSum;

    int maxsum = max({leftMaxSum, rightMaxSum, crossingMaxSum});
    return maxsum;

  }

}
int main() {

  int X[] = {-3,3,-1,4,-5};
  int n = sizeof(X) / sizeof(X[0]);

  
  cout << "The maximum subarray sum is: " << findMaxSubarraySum(X, 0, n - 1)
 << endl;

  return 0;

}

