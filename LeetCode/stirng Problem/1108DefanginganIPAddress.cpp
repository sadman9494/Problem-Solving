#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string defangIPaddr(string &address) {

  for (int i = 0;i<address.size();i++)
  {
    if(address[i] == '.')
    {
       address.replace(i,1,"[.]");
       i+=3;
    }
  }
  return address;       
}

int main()
{
    string s;
    cin>>s;
    cout<<defangIPaddr(s);
}