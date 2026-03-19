#include<iostream>
#include<vector>
using namespace std;
int Higher_Bound(int n, vector<int>arr, int low, int high, int target){
   int ans = 0;
   while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]>target){
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
    vector<int>arr;
    int n ;
    cin>>n;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int target;
    cin>>target;
    int low = 0, high = n-1;
    int high_bound = Higher_Bound(n,arr,low,high,target);
    cout<<high_bound;
    return 0;
}

/*

Plus
Track
Command Palette
Search for a command to run...

Blog
Discussion
Implement Upper Bound


7

Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the upper bound of x.

What is Upper Bound?
The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than the given key i.e. x.

The upper bound is the smallest index, ind, where arr[ind] > x.

Examples
Example 1:
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 3
Explanation: Index 3 is the smallest index such that arr[3] > x.

Example 2:
Input Format: N = 6, arr[] = {3,5,8,9,15,19}, x = 9
Result: 4
Explanation: Index 4 is the smallest index such that arr[4] > x.
*/