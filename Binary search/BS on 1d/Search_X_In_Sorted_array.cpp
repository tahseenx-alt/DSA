#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for( int i =0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int target;
    cin>>target;

    int ans ,low = 0, high = n-1;
    while(low<=high){
      int mid = (low+high)/2;
      if(arr[mid] == target) {
        ans = mid;
        break;
    }
      else if (target < arr[mid]){
         high = mid-1;
      }
      else{ low = mid +1 ;}
    }
    cout<<ans;
}