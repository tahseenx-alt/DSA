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
    int target;
    cin>>target;
    if(mp.find(target)==mp.end()){
        cout<<"Element is not in the array"<<endl;
    }
    else{
        cout<<mp[target];
    }
    return 0;
}