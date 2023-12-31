#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

 
     bool numDecodings(string s) {
        int n=s.size();
        for(int i=n/2;i>=1;i--){              
            if(n%i==0){ 
                string q = s.substr(0,n-i);
                string m = s.substr(i);

                if(s.substr(0,n-i)==s.substr(i))return true;          
            }
        }
        return false;
    }
int main()
{
    string a = "abaabaaba";

   bool res = numDecodings(a);
    cout << res;
}