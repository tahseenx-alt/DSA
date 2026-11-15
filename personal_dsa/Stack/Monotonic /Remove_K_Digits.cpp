#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n ;
    n = s.size();
    stack<char>st;
    for(int i=0;i<n;i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else{
            if(st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }
    string ans;
    while(!st.empty()){
        ans +=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}