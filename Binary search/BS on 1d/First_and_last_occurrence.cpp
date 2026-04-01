#include<iostream>
#include<vector>
using namespace std;
int first_and_last_occurrence(vector<int>arr,int n,int target,int low ,int high){
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid] == target) { return mid;}
    else if( mid < target) {return first_and_last_occurrence(arr,n,target,mid+1,high);}
    else {return first_and_last_occurrence(arr,n,target,low,mid-1);}
  }
  return -1;
}
int main(){
 int n;
 cin>>n;
 vector<int>arr;
 for( int i=0;i<n;i++){
    int x;
    cin>>x;
    arr.push_back(x); 
 }
  int target;
  cin>>target;
  int low = 0,high = n-1;
  int ans = first_and_last_occurrence(arr,n,target,low,high);
  cout<<ans;
  return 0;
}