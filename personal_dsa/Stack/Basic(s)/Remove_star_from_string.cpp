#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(!st.empty()){
            if(s[i] == '*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        else{
            st.push(s[i]);
        }
    }
    string ans;
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}