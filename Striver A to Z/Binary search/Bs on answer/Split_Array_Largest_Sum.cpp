/*
Split Array - Largest Sum
Problem Statement: Given an integer array ‘A’ 
of size ‘N’ and an integer ‘K'. Split the array ‘A’ 
into ‘K’ non-empty subarrays such that the largest
 sum of any subarray is minimized. Your task is to
  return the minimized largest sum of the split.
   A subarray is a contiguous part of the array.

Examples
Example 1:
Input Format: N = 5, a[] = {1,2,3,4,5}, k = 3
Result: 6
Explanation: There are many ways to split the array a[] 
into k consecutive subarrays. The best way to do this
 is to split the array a[] into [1, 2, 3], [4], and [5],
  where the largest sum among the three subarrays is only 6.

Example 2:
Input Format: N = 3, a[] = {3,5,1}, k = 3
Result: 5
Explanation: There is only one way to split the array
 a[] into 3 subarrays, i.e., [3], [5], and [1].
  The largest sum among these subarrays is 5.
*/

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
