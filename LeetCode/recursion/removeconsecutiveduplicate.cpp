#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//abc

    //base caseaa
/* 
   Time complexity: O(N)  
   Space complexity: O(N) for recursion stack

   Where N is the length of the string 
*/

string removeDuplicate3(string &s)
{
    int n = s.size();

    // Check for the base case if the length of the string is less than 2 then return string itself
    if (n < 2)
    {
        return s;
    }

    // Compare last and second last character of the string
    if (s[n - 1] == s[n - 2])
    {
        // If both are equal remove the last character and call recursion for the remaining part

        // Remove last
        s.pop_back();

        // Call recursion for remaining part
        return removeDuplicate3(s);
    }
    else
    {
        //If both are not equal remove last and call recursion for remaining and add last to the end

        // Store last character for append it in the final string
        char last = s.back();

        // Remove last
        s.pop_back();

        // Call recursion for remaining string and add the last character to the end
        return removeDuplicate3(s) + last;
    }
}

string removeDuplicate2(string str)
{
    //base case
  for(int i=0,j= 1 ; i<str.length();i++)
  {
    if(str[i] == str[j])
    {
        str.erase(str.begin()+j);
        i--;
    }
    else
    {
        j++;
    }
  }
  return str;

    

}

void removeDuplicate1(string &str , int i,int j)
{
    //base case
    if (i>= str.size()-1){
     return;
    }

    if(str[i] == str[j] && i!=j)
    {
      str.erase(str.begin() +j);
    }
    else{
        i++;
        j++;
    }
    removeDuplicate1( str , i, j);

    

}


    



int main()
{
  
   
    string str;

    cin>>str;

     cout<<removeDuplicate3(str)<<endl;
     cout<<removeDuplicate2(str)<<endl;
     removeDuplicate1(str , 0,1);
     cout << str;
    


}