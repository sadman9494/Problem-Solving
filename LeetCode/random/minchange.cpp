#include <iostream>
#include <string>

using namespace std;

int minOperations(string s) {
    int count ;
    std::size_t found = s.find("00");

    if(s[0] == '0' || found != string::npos )
    {
        return 0;
    }
    for (int i =0; i<s.length();i++)
    {
        if(s[i] == '0' && (s[i-1]-'0') >2)
        {
           return 0;
        }
    }
    return count;
}

int main() {
    // Example usage of minOperations function
    string inputString;

    // Input a binary string
    cout << "Enter a binary string: ";
    cin >> inputString;

    // Call the minOperations function and output the result
    int result = minOperations(inputString);
    cout << "Minimum operations required: " << result << endl;

    return 0;
}
