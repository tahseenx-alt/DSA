#include<iostream>
#include<vector>
using namespace std;
int sum (vector<int>arr, int n){
    int sum =0;
    for(int i =0 ;i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}
bool ispossible(vector<int>arr, int barrier, int k){
    int allocated = 1, ArraySum = 0;
    int n = arr.size();
    for( int i =0; i<n; i++){
        if(arr[i]>barrier) return false;
        if(ArraySum + arr[i] >barrier){
            allocated++;
            ArraySum += arr[i];
        }
        else{
            ArraySum += arr[i];
        }
    } 
    if(allocated>k) return false;
    else return true;
}
int allocation(vector<int>arr,int n , int k){
    int low = arr[0];
    int high = sum(arr,n);
    int ans =-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(ispossible(arr,mid,k)){
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
    int n;
    vector<int>arr;
    cin>>n;
    for(int i = 0;i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int k ;
    cin>>k;
    cout<<allocation(arr,n,k);
    
    return 0;
}
