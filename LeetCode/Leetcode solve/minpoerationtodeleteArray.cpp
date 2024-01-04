#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int minOperations(vector<int>& nums) {
        int operation= 0;
        unordered_map<int , int > myMap;
        int count =0;
        for (int i =0; i<nums.size() ; i++)
        {
            myMap[nums[i]]++ ;
        }

        for (auto m: myMap)
        {
            if(m.second <= 1)
            {
                return -1;
            }
            if (m.second % 3 == 0)
            {
                operation += m.second / 3;
            }
           /*else if (m.second % 2 == 0 )
            {
                
                 count = m.second / 3;
                 if ( m.second % 3 == 1 )
                 {
                    count --;
                    operation = operation + count + (m.second - (3*count))/2;
                 }
                else 
                {
                    count = m.second /3;
                    operation = operation + count +(m.second - (3*count))/2;
                }


            }*/
        
           else 
           {
                 count = m.second / 3;
                 if ( m.second % 3 == 1 )
                 {
                    count --;
                    operation = operation + count + (m.second - (3*count))/2;
                 }
                else 
                {
                    count = m.second /3;
                    operation = operation + count +(m.second - (3*count))/2;
                }
           }

        }
        return operation;
        
    }

/*int minOperations1(vector<int>& nums){
         unordered_map<int, int> freqMap;
        int operations = 0;

        // Count frequencies
        for (int num : nums) {
            freqMap[num]++;
        }

        // Optimize calculations and reduce iterations
        for (auto& [num, count] : freqMap) {
            if (count <= 1) {
                return -1;  // Early return for invalid cases
            }

            int triplets = count / 3;
            operations += triplets;
            count -= triplets * 3;

            int pairs = count / 2;
            operations += pairs;
            count -= pairs * 2;

            // Handle remaining singletons
            operations += count;
        }

        return operations;
}*/
    int main ()
    {
        vector<int> nums = {19,19,19,19,19,19,19,19,19,19,19,19,19};
        cout << "Minimum number of operations required to make all elements equal is :"<<minOperations(nums);
    }