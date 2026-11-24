#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0, k;
    cin >> k;
    stack<char> st;
    for (auto c : s) {
        while (!st.empty() && st.top() > c && count < k) {
            st.pop();
            count++;
        }
        if (!st.empty() || c != '0') {
            st.push(c);
        }
    }
    while (!st.empty() && count < k) {
        st.pop();
        count++;
    }
    string ans;
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << (ans.empty() ? "0" : ans);
    return 0;
}
