#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        int left = 0;
        int right = (left+(n-1)/2);
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        for(auto x:arr){
            cout<<x<<" ";
        }

    return 0;
}