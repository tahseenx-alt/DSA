#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr1[n],arr2[m];
    unordered_set<int>st1;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        st1.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        if(st1.count(arr2[i])==1){
            cout<<arr2[i];
            st1.erase(arr2[i]);
        }
    }

}