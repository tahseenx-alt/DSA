#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;
    int n1 = s.size();
    int n2 = t.size();
    stack<char> st1;
    stack<char> st2;

    for (int i = 0; i < n1; i++) {
        if (s[i] == '#') {
            if (!st1.empty()) {
                st1.pop();
            }
        } else {
            st1.push(s[i]);
        }
    }

    for (int i = 0; i < n2; i++) {
        if (t[i] == '#') {
            if (!st2.empty()) {
                st2.pop();
            }
        } else {
            st2.push(t[i]);
        }
    }

    string ans1;
    while (!st1.empty()) {
        ans1 += st1.top();
        st1.pop();
    }
    reverse(ans1.begin(), ans1.end());

    string ans2;
    while (!st2.empty()) {
        ans2 += st2.top();
        st2.pop();
    }
    reverse(ans2.begin(), ans2.end());

    cout << ans1 << " " << ans2 << endl;
    if (ans1 == ans2) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}
