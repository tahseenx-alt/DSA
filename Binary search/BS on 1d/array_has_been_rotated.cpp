//Find out how many times the array has been rotated

#include<iostream>
#include<vector>
using namespace std;
int minimum_sorted(vector<int>arr,int n){
    int low = 0,high = n-1,ans = INT_MAX;
    int index =-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]<=arr[mid]){
          if(arr[low]<ans){
            index = low;
            ans = arr[low];
          }
          low = mid+1;
        }
        else{
            if(arr[mid]<ans){
                index = mid;
                ans = arr[mid];
            }
            high = mid-1;
        }
    }
    return index;
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



