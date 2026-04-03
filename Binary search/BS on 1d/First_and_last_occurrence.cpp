#include <iostream>
#include <vector>
using namespace std;

int lower_bound(vector<int>arr,int n, int target){
     int low = 0;
    int high = n - 1;
    int ans = n; 
    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (arr[mid] >= target) {
            ans = mid;       
            high = mid - 1; 
        } else {
            low = mid + 1;   
        }
    }
    return ans;
}
int upper_bound(vector<int>arr,int n, int target){
    int low = 0, high = n - 1;
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
int main()
{
  int n;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    arr.push_back(x);
  }
  int target;
  cin >> target;
  int first = lower_bound(arr,n,target);
  int last = upper_bound(arr,n,target) - 1 ;
  cout<<first<<" " << last ;
  return 0;
}