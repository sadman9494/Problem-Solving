#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*int main() {
    string str;
    cin >> str;
    long long result;

    long long num = 0;
    for (char c : str) {
        num = num * 10 + 1; // Append '1' to the end in each iteration
    }
 long long c = stoll(str, nullptr, 10) % num ;
    if ((stoll(str, nullptr, 10) % num) < 10) {
        result = (stoll(str, nullptr, 10) / num) + (stoll(str, nullptr, 10) % num);
    } else {
        result = (stoll(str) / num) + 1;
    }

    cout << result;

    return 0;
}*/
/*int count = 0;

int minPartitions(string n) {
    if (n.empty()) {
        return count;
    }

    long long num = 0;
    if (n.back() == '0')
        {
        num =pow(10, (n.length()-1)) ;
        }

    else{
       for (char c : n) {
        num = num * 10 + 1; // Append '1' to the end in each iteration
     }
    }
    

    long long currentNum = stoll(n, nullptr, 10)%num;
    
    if (currentNum % num == 0) {
        return count +(stoll(n) / num);
    }

    count = count +(stoll(n) / num) ;
    return minPartitions(to_string(currentNum));
}*/

int minPartitions(std::string n) {
    int maxDigit = 0;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] - '0' == 9) {
            return 9;
        }
        maxDigit = std::max(maxDigit, n[i] - '0');
    }
    return maxDigit;
}
int main()
{
    string str;
    cin>> str;
    cout<<minPartitions(str);

}
