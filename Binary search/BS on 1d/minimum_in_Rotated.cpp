#include<iostream>
#include<vector>
using namespace std;
int minimum_sorted(vector<int>arr,int n){
    int low = 0,high = n-1,ans = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]<=arr[mid]){
            ans = min(ans,arr[low]);
            low = mid+1;
        }
        else{
            ans = min(ans,arr[mid]);
            high = mid+1;
        }
    }
    return ans;
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
    int ans = minimum_sorted(arr,n);
    cout<<ans;
    
    return 0;
}

