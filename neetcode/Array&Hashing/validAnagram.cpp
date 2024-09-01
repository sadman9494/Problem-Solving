#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isAnagram1(string s, string t) {
        bool result = true;
        unordered_map<char , int> mp;
        unordered_map<char , int>mp1;
        for (char i : s)
        {
            mp[i]++;
        }
        for (char j : t)
        {
            mp1[j]++;
        }
        if (s.length() != t.length())
        {
            return false;
        }
        for (int i =0; i< s.length(); i++)
        {
            if(mp1.find(s[i]) != mp1.end())
            {
                if (mp[s[i]] != mp1[s[i]])
                {
                    result=false;
                    break;
                }
            }
            else{
                result= false;
                break;
            }
        }
        return result;
    }
bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        
        for(int i = 0; i < s.size(); i++){
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        
        for(int i = 0; i < smap.size(); i++){
            if(smap[i] != tmap[i]) return false;
        }
        return true;
    }

    int main()
    {
        string s = "cata";
        string t = "taca";
        cout << isAnagram(s,t);
    }