
#include<iostream>
#include<vector>
using namespace std;
int peak_element(vector<int>&arr,int n){
    if(n==1) return 0;
    if(arr[0]>arr[1]) return 1;
    if(arr[n-1]>arr[n-2]) return n-1;
    int low =1,high = n-2;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]>arr[mid-1]){
            low = mid+1;
        }
        else if(arr[mid] >arr[mid+1]){
            high = mid-1;
        }
     }
     return -1;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int ans = peak_element(arr,n);
    cout<<ans;
    
    return 0;
}



