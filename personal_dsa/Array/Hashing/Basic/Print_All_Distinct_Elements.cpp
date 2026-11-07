#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    unordered_set<int>st;
    for(auto x:arr){
        st.insert(x);
    }
    for(auto x:st){
        cout<<x<<" ";
    }
    return 0;
}