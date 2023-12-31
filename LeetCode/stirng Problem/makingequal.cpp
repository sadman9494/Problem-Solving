#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

 /*
    if (total % words.size() == 0){
         if(dup.size() == words.size() && total - dup.size() == dup.size()) {
            return false;
         }
         else{return true;}
        
    }
    else {
        return false;
    }*/

 bool makeEqual(vector<string>& words) {
    unordered_map<char , int > dup;
    int total =0;
    int n = words.size() - 1; 
    string totalstr;
    
    for (int i = 0; i <= n; i++) {
        total += words[i].length();
        totalstr += words[i];

    }
    if (words.size() == 1) return true;

    for (char s : totalstr)
    {
        if (dup.find(s) == dup.end())
        {
            dup[s] = 1;
        }
        else 
        {
            dup[s]++;
        }
    }

    int each = total /dup.size();
    for(auto s: dup)
    {
        if (s.second % words.size() != 0){return false ;}
    }

    if (dup.size() >= total) return false;
     return true;

 }

int main() {
    vector<string> words = {"a","bbbbbbbbbbbbbbbbbbbbbbbbbbb","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    bool result = makeEqual(words);
    if (result) {
        cout << "The lengths of the words can be made equal." << endl;
    } else {
        cout << "The " << endl;
    }
    return 0;
}