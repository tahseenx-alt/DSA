#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>str(n);
    for(int i=0 ;i<n;i++){
        cin>>str[i];
    }
    stack<string>st;
    for(int i=0;i<n;i++){
        if(str[i]=="../"){
            if(!st.empty()){
                st.pop();
            }
        }
        else if(str[i] == "./"){
            continue;
        }
        else{
            st.push(str[i]);
        }
    }
    int count = 0;
    while(!st.empty()){
        st.pop();
        count++;
    }
    cout<<count;
    return 0;
}