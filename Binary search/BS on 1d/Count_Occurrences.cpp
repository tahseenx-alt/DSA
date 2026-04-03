#include <iostream>
#include <vector>
using namespace std;
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
   int count =0;
  for( int i =0; i<n;i++){
    if(arr[i] == target){
        count++;
    }
  }
   cout<<count;
  return 0;
}