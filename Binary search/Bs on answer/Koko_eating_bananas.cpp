#include<vector>
#include<iostream>
using namespace std;
int find_max(vector<int>arr){
    int maxi =INT_MIN;
    int n = arr.size();
    for( int i = 0; i<n; i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}
int totalHours( vector<int>arr, int k){
  int totalH = 0;
        for (int bananas : arr) {
            totalH += ceil((double)bananas / k);
        }
        return totalH;
}
int koko_eating(vector<int>arr,int n,int h){
    int ans= 0;
    int low = 1;
    int high = find_max(arr);
    while(low<=high){
        int mid = (low+high)/2;
        if(totalHours(arr,mid)<=h){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    int n,h;
    vector<int>arr;
    cin>>n>>h;
    for( int i =0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<koko_eating(arr,n,h);
   return 0;
}