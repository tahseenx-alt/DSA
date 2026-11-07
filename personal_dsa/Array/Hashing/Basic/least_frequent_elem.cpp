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
    int leastfreq=INT_MAX;
    int leastnum=INT_MAX;
    for(auto x:mp){
        if(x.second<leastfreq){
            leastfreq = x.second;
            leastnum = x.first;
        }
    }
    cout<<leastnum<<" "<<leastfreq;

}