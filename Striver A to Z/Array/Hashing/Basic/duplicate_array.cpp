#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    bool found = false;
    for(auto x:mp){
        if(x.second>1){
           found = true;
           break;
        }
    }
    if(found){
        cout<<"Contain duplicate";
    }
    else{
        cout<<"No duplicate";
    }
    
    return 0;
}