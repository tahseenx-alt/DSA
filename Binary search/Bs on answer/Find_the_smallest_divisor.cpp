/*
Find the Smallest Divisor Given a Threshold
Problem Statement: You are given an array of integers 'arr'
and an integer i.e. a threshold value 'limit'. Your task is
 to find the smallest positive integer divisor, such that
  upon dividing all the elements of the given array by it,
  the sum of the division's result is less than or equal to
  the given threshold value.

Examples
Example 1:
Input Format: N = 5, arr[] = {1,2,3,4,5}, limit = 8
Result: 3
Explanation: We can get a sum of 15(1 + 2 + 3 + 4 + 5) if we
 choose 1 as a divisor.
The sum is 9(1 + 1 + 2 + 2 + 3)  if we choose 2 as a divisor.
 Upon dividing all the elements of the array by 3, we get
  1,1,1,2,2 respectively. Now, their sum is equal to 7 <= 8
  i.e. the threshold value. So, 3 is the minimum possible answer.

Example 2:
Input Format: N = 4, arr[] = {8,4,2,3}, limit = 10
Result: 2
Explanation: If we choose 1, we get 17 as the sum.
 If we choose 2, we get 9(4+2+1+2) <= 10 as the answer.
  So, 2 is the answer.
*/
#include <iostream>
#include <vector>
using namespace std;
int find_max(vector<int> arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}
int find_min(vector<int> arr)
{
    int n = arr.size();
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
    }
    return mini;
}
int sum_of_D(vector<int> arr, int k)
{
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + ceil((double)(arr[i]) / (double)(k));
    }
    return sum;
}
int smallest_divisor(vector<int> arr, int thresold, int n)
{
    if (n > thresold)
        return -1;
    int low = find_min(arr);
    int high = find_max(arr);
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (sum_of_D(arr, mid) <= thresold)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n, thresold;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cin >> thresold;
    cout << smallest_divisor(arr, thresold, n);
    return 0;
}
