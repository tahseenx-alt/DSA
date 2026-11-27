#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int>num(n);
    for(int i =0; i<n; i++){
        cin>>num[i];
    }
    stack<int>st;
    int num3 = INT_MIN;
    bool ans = false;
    for(int i =n-1; i>=0; i--){
        if(num[i] < num3){
            ans = true;
            break;
        }
        while(!st.empty() && st.top() < num[i]){
            num3 = st.top();
            st.pop();
        }
        st.push(num[i]);
    }
    if(ans){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}