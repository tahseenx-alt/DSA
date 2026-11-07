#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    unordered_set<int>st1;
    unordered_set<int>st2;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        st1.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        st1.insert(arr2[i]);
    }
    for(auto x:st1){
        cout<<x<<" ";
    }

    return 0;
}