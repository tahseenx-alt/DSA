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
int find_min(vector<int>arr){
    int n = arr.size();
    int mini = INT_MAX;
    for (int i =0;i<n; i++){
        mini = min(mini,arr[i]);
    }
    return mini;
}
int sum_of_D(vector<int>arr,int k){
    int n= arr.size();
    int sum=0;
    for(int i =0; i<n; i++){
        sum = sum + ceil((double)(arr[i])/(double)(k));
    }
    return sum;
}
int smallest_divisor(vector<int>arr,int thresold,int n){
    if(n>thresold) return -1;
    int low = find_min(arr);
    int high = find_max(arr);
    int ans =-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(sum_of_D(arr,mid)<=thresold){
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
    int n,thresold;
    vector<int>arr;
    cin>>n;
    for(int i = 0;i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cin>>thresold;
    cout<<smallest_divisor(arr,thresold,n);
    return 0;
}
