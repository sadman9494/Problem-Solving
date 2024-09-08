class Solution {
public:
    bool isAnagram(string s, string t) {
        bool result = true;
        unordered_map<char , int> mp;
        unordered_map<char , int>mp1;
        if (s.length() != t.length())
        {
            return false;
        }
        for (char i : s)
        {
            mp[i]++;
        }
        for (char j : t)
        {
            mp1[j]++;
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
};