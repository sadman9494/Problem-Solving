#include <iostream>
#include<unordered_map>
#include <vector>
#include <set>

using namespace std;

int solve(const string log, int duration) {
  // Store solved problems for efficient checking
 set<char> solved;
 unordered_map<char,int> map;
  
  int timeSpent = 0;
  int solvedCount = 0;
  for (char problem : log) {
    if(map.find(problem) != map.end())
    {
        map.at(problem)++;
      if(map[problem] == problem-'A'+1)
      {
        solvedCount++;
        continue;
      }
      
    }
    else
    {
        map[problem] = 1;
        if(problem == 'A')
        {
            solvedCount++;
        }
    }
  }
  
  return solvedCount;

}

int main() {
  int testCases;
  cin >> testCases;
  
  for (int i = 0; i < testCases; ++i) {
    int duration;
    string log;
    cin >> duration >> log;
    
    cout << solve(log, duration) << endl;
  }
  
  return 0;
}


