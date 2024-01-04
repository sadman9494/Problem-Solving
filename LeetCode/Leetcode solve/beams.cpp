

#include <iostream>
#include <vector>
using namespace std;


    int numberOfBeams(vector<string>& bank) {
        int total =0;
        int r1 =0;
        for (int i =0; i< bank.size(); i++)
        {
            int r2 =0;
            for (char j:bank[i])
            {
                if( j == '1'){r2++;}
            }
            total = total+r1*r2;
           r1 = (r2 == 0) ? r1 : r2;
        }
        return total;
    }




int main() {
    // Example usage of the Solution class
  

    // Sample vector of strings (bank)
    std::vector<std::string> bank = {
       "011001","000000","010100","001000"
    };

    // Call the numberOfBeams function and print the result
    int result = numberOfBeams(bank);
    std::cout << "Total number of beams: " << result << std::endl;

    return 0;
}