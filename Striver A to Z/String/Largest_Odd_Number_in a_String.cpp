#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string largestOddNumber(string s) {
    for (int i = s.length() - 1; i >= 0; i--) {
        if ((s[i] - '0') % 2 != 0) {
            return s.substr(0, i + 1);
        }
    }
    return "";
}

int main() {
    string s;
    if (!(cin >> s)) return 0;

    cout << largestOddNumber(s) << endl;

    return 0;
}