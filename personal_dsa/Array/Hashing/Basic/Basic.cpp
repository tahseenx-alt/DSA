#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int>st;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        st[arr[i]]++;
    }
    for(auto pair:st){
        cout<<pair.first<<"->"<<pair.second<<" "<<endl;
    }
    return 0;
}
