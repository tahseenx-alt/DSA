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
    int maxfreq = 0;
    int mostfrequ = 0;
    for(auto x:mp){
        if(x.second>maxfreq){
            maxfreq = x.second;
            mostfrequ = x.first;
        }
    }
    cout<<mostfrequ<<" "<<maxfreq;
    
}