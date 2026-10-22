#include<iostream>
#include<unordered_map>
#include<unordered_set>
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
    for(int i=0;i<n;i++){
        if(mp[arr[i]]==1){
            cout<<arr[i];
            found = true;
            break;
        }
    }
    if(found == false){
        cout<<"There no non repeating element ";
    }


    return 0;
}