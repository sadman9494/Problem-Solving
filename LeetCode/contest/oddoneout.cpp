#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;

int oodOut(vector<int>& arr)
{

        if (arr[0] == arr[1])
        {
            return arr[2];
        }
        else if (arr[0] == arr[2])
        {
            return arr[1];
        }
        else 
        {return arr[0];}
        
    
}

int main()
{
  int testcases;
  vector<int> arr;
  cin >> testcases;

  for (int i = 0; i < testcases; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      int input;
      cin >> input;
      arr.push_back(input);

      
    }
    cout << oodOut(arr)<<endl;
     arr.clear();
  }

  // Now you can use the 'arr' vector as needed.

  return 0;
}