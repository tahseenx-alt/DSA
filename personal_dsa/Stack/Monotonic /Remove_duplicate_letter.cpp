#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    vector<bool> taken(26, false);
    vector<int> lastindex(26);
    string result;
    
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        lastindex[ch - 'a'] = i;
    }
    
    for (int i = 0; i < n; i++) {
        char ch = s[i];
        int idx = ch - 'a';
        
        if (taken[idx] == true) {
            continue;
        }
        
        while (!result.empty() && result.back() > ch && lastindex[result.back() - 'a'] > i) {
            taken[result.back() - 'a'] = false;
            result.pop_back();
        }
        
        result.push_back(ch);
        taken[idx] = true;
    }
    
    cout << result;
    return 0;
}
