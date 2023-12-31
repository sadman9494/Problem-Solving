/*#include<vector>
#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;

string isPerfectSquare (int s)
{
    int sqrtNum = static_cast<int>(sqrt(s));
     return (sqrtNum * sqrtNum == s) ? "YES" :"NO";
}
int main()
{
    int test;
    cin >> test;
    
    for (int i = 0; i < test; ++i) 
    {
        int bucket;
        cin >> bucket;
        int input;
        int sum =0;
        for (int j =0;j< bucket;j++)
        {
            cin >> input;
            sum = sum+input;
            
        }
        cout << isPerfectSquare(sum)<<endl;
    }
}*/

/*#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    for (int _ = 0; _ < t; ++_) {
        int n;
        std::cin >> n;
        int s = 0;
        std::vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
            s += arr[i];
        }

        int sRoot = static_cast<int>(std::sqrt(s));

        if (sRoot * sRoot == s) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxArea(vector<int>& height) {
    int i = 0;
    int j = height.size() -1 ;
    int maxWater = 0;
    while (i <j) {
        if(height[i] > height[j])
        {
            if ( min(height[j], height[i]) * abs(j - i) > maxWater) {
            maxWater = min(height[j], height[i]) * abs(j - i);
            }
           j--;
        }
        else
        {
            if ( min(height[j], height[i]) * abs(j - i) > maxWater) {
            maxWater = min(height[j], height[i]) * abs(j - i);
            }
           i++;
        }
    }

    return maxWater;
}

int main() {
    // Example vector
    vector<int> heights = {1,3,4,8,1};

    // Calculate the maximum water container area
    int result = maxArea(heights);

    // Output the result
    cout << "Maximum Water Container Area: " << result << endl;

    return 0;
}

