#include<iostream>
#include<vector>
using namespace std;

int floor(int n, vector<int>arr, int low, int high, int target){
  int ans = -1; 
  
  while(low <= high){ 
    int mid = (low+high)/2;
    
    if(arr[mid] <= target){
      ans = arr[mid]; 
      low = mid + 1;
    }
    else{
      high = mid - 1;
    }
  }
  return ans;
}

int ceil(int n, vector<int>arr, int low, int high, int target){
    int ans = -1; 
    
    while(low <= high){ 
        int mid = (low+high)/2;
        
        if(arr[mid] >= target){
            ans = arr[mid]; 
            high = mid - 1; 
        }
        else{
            low = mid + 1; 
        }
    }
    return ans;
}

int main(){
    vector<int>arr;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
      int x;
      cin>>x;
      arr.push_back(x);
    }
    int target;
    cin>>target;
    int low = 0, high = n-1;
    
    int Floor = floor(n, arr, low, high, target);
    int Ceil = ceil(n, arr, low, high, target);
    
    cout << Floor << " " << Ceil;
    return 0;
}

/*
Floor and Ceil in Sorted Array

Problem Statement: ou're given an sorted array arr of n integers and an integer x. Find the floor and ceiling of x in arr[0..n-1]. The floor of x is the largest element in the array which is smaller than or equal to x. The ceiling of x is the smallest element in the array greater than or equal to x

Examples

Example 1:
Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 5
Result: 4 7
Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.

Example 2:
Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 8
Result: 8 8
Explanation: The floor of 8 in the array is 8, and the ceiling of 8 in the array is also 8.
*/