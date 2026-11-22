#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>asteroids(n);
    for(int i=0; i<n; i++){
        cin>>asteroids[i];
    }
    stack<int>st;
    for( auto &a :asteroids){
        while(!st.empty() && a<0 && st.top()>0){
            int sum = a + st.top();
            if(sum<0){
                st.pop();
            }
            else if(sum>0){
                a =0;
            }
            else{
                st.pop();
                a= 0;               
            }
        }
        if(a != 0){
            st.push(a);
        }
    }
    vector<int>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    for(auto x: ans){
        cout<<x<<" ";
    }
    return 0;
}