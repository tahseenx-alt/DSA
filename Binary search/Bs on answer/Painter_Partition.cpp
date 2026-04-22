/*
Painter's Partition Problem
Problem Statement: Given an array/list of length ‘N’, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some ‘K’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint. You are supposed to return the area of the minimum time to get this job done of painting all the ‘N’ boards under the constraint that any painter will only paint the continuous sections of boards.

Examples
Example 1:
Input Format: N = 4, boards[] = {5, 5, 5, 5}, k = 2
Result: 10
Explanation: We can divide the boards into 2 equal-sized partitions, so each painter gets 10 units of the board and the total time taken is 10.

Example 2:
Input Format: N = 4, boards[] = {10, 20, 30, 40}, k = 2
Result: 60
Explanation: We can divide the first 3 boards for one painter and the last board for the second painter.
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
