#include <iostream>
#include <vector>
using namespace std;
int rotated_array(vector<int>arr,int n , int target){
    int low =0,high = n-1;
    int ans =-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            ans = mid;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<=arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid]<=target && target<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
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
  int ans = rotated_array(arr,n,target);
  cout<<ans;
  return 0;
}