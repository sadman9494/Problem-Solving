#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//string last;
void reversestr1( string &str,int i, string last)
{
   if(i >=str.size())
   {
      return ;
   }
   
   last = str[i];
   reversestr1(str,i+1,last);
   cout << last;
}
void reversestr( string &str,int i)
{
   if(i >=str.size())
   {
      return ;
   }
   string last;
  last = str[i];
   reversestr(str,i+1);
   
   cout << last;
}
int main()
{
    string str;
    cin >> str;
    reversestr1(str , 0,"");
    reversestr(str , 0);
}