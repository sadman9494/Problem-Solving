#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

char checkstr(const string& a) {
    if (a.find('A') == string::npos) {
        return 'A';
    } else if (a.find('B') == string::npos) {
        return 'B';
    }
    return 'C';
}

int main() {
    BOOST;
    int testcase;
    cin >> testcase;
    string a, b, c;
    for (int t = 1; t <= testcase; t++) {
        cin >> a >> b >> c;
        if (a.find('?') != string::npos) {
            cout << checkstr(a) << endl;
        } else if (b.find('?') != string::npos) {
            cout << checkstr(b) << endl;
        } else {
            cout << checkstr(c) << endl;
        }
    }
    return 0;
}
