class Solution {
public:
    bool isSubsequence(string r, string s) {
    if (r == ""){
        return true;
    }  
     int y = 0;
    int x = 0;

    while(y < s.length()){
      if(s[y] == r[x]){
        y++;
        x++;
      }
      else{
        y++;
      }
    }

    return (x <= r.length()-1 ?  false :  true);
    
    }
};