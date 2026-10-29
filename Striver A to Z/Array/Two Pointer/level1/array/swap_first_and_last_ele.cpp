#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0,right=n-1;
    if(n>1){
        swap(arr[left],arr[right]);
    }
    for(auto x:arr){
        cout<<x<<" ";
     }
    return 0;
}