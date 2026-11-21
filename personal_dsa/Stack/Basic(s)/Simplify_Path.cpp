#include <iostream>
#include <stack>
#include<vector>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<string>st;
    string temp ="";
    for(int i=0 ;i<s.size();i++){
        if(s[i] == '/'){
            continue;
        }
        string token = "";
        while(i<s.size() && s[i] != '/' ){
            token += s[i];
            i++;
        }
        if(token == "."){
            continue;
        }
        else if(token == ".."){
            if(!st.empty()){
                st.pop_back();
            }
        }
        else{
            st.push_back(token);
        }
    }
    string ans = "";
   for (int i = 0; i < st.size(); i++){
        ans += "/" + st[i];
    }
    if(ans.empty()){
        cout<<"/";
    }
    else{
        cout<<ans;
    }

    return 0;
}    