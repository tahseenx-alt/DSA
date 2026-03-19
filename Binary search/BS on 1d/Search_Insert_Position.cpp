#include<iostream>
#include<vector>
using namespace std;
int search_at_any_position(int n, vector<int>arr,int low, int high, int target){
    int ans = n;
   while(low<high){
    int mid = (low+high)/2;
     if(arr[mid]>=target){
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
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int target;
    cin>>target;
    int low = 0, high = n;
    int Search = search_at_any_position(n,arr,low,high,target);
    cout<<Search;

}


/*

Search Insert Position


10

Problem Statement: You are given a sorted array arr of distinct values and a target value x. You need to search for the index of the target value in the array.

Examples
Example 1:
Input Format: arr[] = {1,2,4,7}, x = 6
Result: 3
Explanation: 6 is not present in the array. So, if we will insert 6 in the 3rd index(0-based indexing), the array will still be sorted. {1,2,4,6,7}.

Example 2:
Input Format: arr[] = {1,2,4,7}, x = 2
Result: 1
Explanation: 2 is present in the array and so we will return its index i.e. 1.
*/