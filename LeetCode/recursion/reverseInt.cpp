#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int result = 0;
int reverse(int x) {
        if (x==0 || x >= INT32_MAX || x <= INT32_MIN)
        {
            return 0;
        }
      
        //result = last;
        int last = x%10;
        x/=10;
        
        result = result*10+last;
        reverse(x);
        if ( result >= INT32_MAX || result <= INT32_MIN)
        {
            return result = 0;
        }

        return result;
    }

    int reverse1(int x) {
    int result = 0;

    while (x != 0) {
        int last = x % 10;
        x /= 10;

        // Check for integer overflow
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && last > 7)) {
            return 0;
        }
        if (result < INT_MIN / 10 || (result == INT_MIN / 10 && last < -8)) {
            return 0;
        }

        result = result * 10 + last;
    }

    return result;
}

int main ()
{
    int n;
    cin >> n;
   cout<<reverse(n)<<endl;
    cout<<reverse1(n);

}