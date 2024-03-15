#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


    bool closeStrings(string word1, string word2) {
        unordered_map<int , int>map1;
        unordered_map<int , int>map2;
        if(word1.size() != word2.size())
        {
            return false;
        }
        for (char s: word1)
        {
            map1[s]++;
        }
        for (char t: word2)
        {
            map2[2]++;
        }
        if(map1.size() == map2.size()) {return true;}
        else {return false;}

        
    }
int main()
{
    string w1 , w2 ;
    w1 = "abc";
    w2 = "bca";
    cout <<closeStrings(w1,w2);
}