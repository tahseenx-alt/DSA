#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l = 0;
    int r =n-1;
    int target ;
    cin>>target;
    int sum = 0;
    bool issum = false;
    while(l<r){
        sum = arr[l]+arr[r];
        if(sum==target){
            issum= true;
            break;
        }
        else if(sum<target){
            l++;
        }
        else{
            r--;
        }
    }
    if(issum){
        cout<<"Target found";
    }
    else{
        cout<<"Target not found";
    }
    return 0;
}