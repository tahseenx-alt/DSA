/*
Capacity to Ship Packages within D Days
Problem Statement: You are the owner of a Shipment company.
 You use conveyor belts to ship packages from one port to
 another. The packages must be shipped within 'd' days.
 The weights of the packages are given in an array 'of
  weights'. The packages are loaded on the conveyor belts
   every day in the same order as they appear in the array.
   The loaded weights must not exceed the maximum weight
   capacity of the ship. Find out the least-weight capacity
   so that you can ship all the packages within 'd' days .
Examples

Input: N = 5, weights = [5, 4, 5, 2, 3, 4, 5, 6], d = 5
Output: 9
Explanation: The minimum ship capacity needed to ship all packages within 5 days is 9.

Input: N = 3, weights = [1, 2, 3, 4, 5], d = 2
Output: 9
Explanation: With a capacity of 9, the packages can be shipped in 2 days as [1,2,3,4] and [5].
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
int sum_of_array(vector<int> arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int days_req(vector<int> arr, int capacity)
{
    int days = 1, load = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (load + arr[i] > capacity)
        {
            days = days + 1;
            load = arr[i];
        }
        else
        {
            load = load + arr[i];
        }
    }
    return days;
}
int shipping(vector<int> arr, int days, int n)
{
    int low = find_max(arr);
    int high = sum_of_array(arr);
    int ans = high;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (days_req(arr, mid) <= days)
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
    int n;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int days;
    cin >> days;
    cout << shipping(arr, days, n);

    return 0;
}
