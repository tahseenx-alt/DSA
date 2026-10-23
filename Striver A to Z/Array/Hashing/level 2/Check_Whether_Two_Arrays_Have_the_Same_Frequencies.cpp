#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    unordered_map<int,int>mp1;
    unordered_map<int,int>mp2;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        mp1[arr1[i]]++;
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        mp2[arr2[i]]++;
    }
    if(mp1==mp2){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }

    return 0;
}