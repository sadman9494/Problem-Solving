#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void generateParenthesisHelper(string gg, int ind, int indd, vector<string>& res) {
        if (indd == 0 and ind == 0) {
            res.push_back(gg);
            return;
        }
        if (ind > 0) {
            generateParenthesisHelper(gg + '(', ind - 1, indd + 1, res);
        }
        if (indd > 0) {
            generateParenthesisHelper(gg + ')', ind, indd - 1, res);
        }
        return;
    }

    vector<string> generateParenthesis(int n) {
        string g = "";
        vector<string> res;
        generateParenthesisHelper(g, n, 0, res);
        return res;
    }
};

int main() {
    Solution solution;
    int n = 2; // Replace with your desired value for n
    vector<string> result = solution.generateParenthesis(n);
    for (const string& s : result) {
        cout << s << endl;
    }
    return 0;
}
