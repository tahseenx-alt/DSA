#include <iostream>
#include <stack>
#include <string>
#include <algorithm> // Needed for std::reverse

using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;

    stack<pair<char, int>> st;

    for (int i = 0; i < s.size(); i++) {
        // If the current character matches the top of the stack, increment its count
        if (!st.empty() && st.top().first == s[i]) {
            st.top().second++;
            
            // If the count reaches k, remove the group from the stack
            if (st.top().second == k) {
                st.pop();
            }
        } 
        // Otherwise, push the new character with a count of 1
        else {
            st.push({s[i], 1});
        }
    }

    // Reconstruct the remaining string from the stack
    string ans = "";
    while (!st.empty()) {
        // Append the character 'st.top().second' times
        ans.append(st.top().second, st.top().first);
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    cout << ans << "\n";

    return 0;
}
