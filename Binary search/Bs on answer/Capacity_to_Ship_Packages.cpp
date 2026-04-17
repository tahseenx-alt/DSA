#include<iostream>
#include<vector>
using namespace std;
int find_max(vector<int>arr){
    int n = arr.size();
    int maxi = INT_MIN;
    for (int i =0;i<n; i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}
int sum_of_array(vector<int>arr){
    int sum =0;
    for( int i =0; i<arr.size(); i++){
        sum = sum + arr[i];
    }
    return sum;
}
int days_req(vector<int>arr,int capacity){
    int days =1,load =0;
    for(int i=0; i<arr.size(); i++){
       if(load + arr[i] > capacity){
         days = days+1;
         load = arr[i];
       }
       else{
        load = load +arr[i];
       }
    }
    return days;
}
int shipping( vector<int>arr,int days,int n){
   int low = find_max(arr);
   int high = sum_of_array(arr);
   int ans = high;
   while(low<=high){
    int mid = (low+high)/2;
    if(days_req(arr,mid) <= days){
        ans = mid;
        high= mid-1;
    }
    else{
        low = mid+1;
    }
 }
     return ans;
}
int main(){
    int n;
    vector<int>arr;
    cin>>n;
    for(int i = 0;i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int days;
    cin>>days;
    cout<<shipping(arr,days,n);

    return 0;
}
