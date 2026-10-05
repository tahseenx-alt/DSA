#include <iostream>
#include <vector>
using namespace std;
int first_occurrence(vector<int> arr, int n, int target)
{
  int low = 0, high = n - 1;
  int first;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == target)
    {
      first = mid;
      high = mid - 1;
    }
    else if (arr[mid] < target)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return first;
}
int last_occurrence(vector<int>arr, int n , int target){
  int ans = first_occurrence(arr,n,target);
   int low =0, high = n-1;
   int last = ans;
   while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]== target){
        last = mid;
        low = mid+1;
    }
    else if( arr[mid]<target){
      low= mid+1;
    }
    else{
      high = mid-1;
    }
   }
   return last;
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
  int first = first_occurrence(arr,n,target);
  int last = last_occurrence(arr,n,target);
  cout<<first<<" "<<last;
  return 0;
}