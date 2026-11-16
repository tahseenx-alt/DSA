#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>operations(n);
    for(int i=0 ;i<n;i++){
        cin>>operations[i];
    }
    stack<int>st;
    int ans;
    for(int i= 0; i<n;i++){
       if(operations[i] == "C"){
            st.pop();
       }
       else if( operations[i] == "D"){
         int ans1;
         ans1 = st.top() * 2;
         st.push(ans1);
       }
       else if(operations[i] == "+"){
        ans = st.top();
        st.pop();
        int ans1 = ans + st.top(); 
        st.push(ans);
        st.push(ans1);
       }
       else{
        st.push(stoi(operations[i])); //. you have to convert it to integer
       }
    }
    int result = 0;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    cout << result;

    return 0;
}