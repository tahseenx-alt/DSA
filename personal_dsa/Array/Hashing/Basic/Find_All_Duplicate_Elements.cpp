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
    for(auto x:mp){
        if(x.second>1){
            cout<<x.first<<"->"<<x.second<<endl;
        }
    }
    return 0;
}