#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int minSteps(string s, string t) {
        int result = 0;
        unordered_map<char , int> map1;
        unordered_map<char , int> map2;

        for (char a: s )
        {
            map1[a]++;
        }

        for (char b:t)
        {
            map2[b]++;
        }
       
       for (char a :s)
       {
           if(map2.find(a) == map2.end())
           {
               result += map1[a];
               map1.erase(a);
           }
           else{
             if(map1[a] > map2[a] )
              {
               result = result + map1[a]-map2[a];
               map1.erase(a);
              }
           }
           
           
       }
       return result; 
    }
int main()
{
    string a = "qijrjrhqqjxjtprybrzpyfyqtzf";
    string b = "gctcxyuluxjuxnsvmomavutrrfb";
    cout<<minSteps(a, b);

}