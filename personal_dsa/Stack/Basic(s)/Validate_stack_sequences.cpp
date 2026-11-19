#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>pushed(n);
    vector<int>popped(n);
    for(int i=0;i<n;i++){
        cin>>pushed[i];
    }
    for(int i=0;i<n;i++){
        cin>>popped[i];
    }
    stack<int>st;
    int i =0;
    int j=0;
        while (i < n) {
        st.push(pushed[i]);
        i++;

        // Keep popping as long as the top matches the next element in popped
        while (!st.empty() && j < n && st.top() == popped[j]) {
            st.pop();
            j++;
        }
    }

    if(st.empty()){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}