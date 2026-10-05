/*

Problem Statement: You are given 'N’ roses and you are
also given an array 'arr' where 'arr[i]' denotes that the
'ith' rose will bloom on the 'arr[i]th' day. You can only
pick already bloomed roses that are adjacent to make a bouquet.
 You are also told that you require exactly 'k' adjacent bloomed
  roses to make a single bouquet. Find the minimum number of
  days required to make at least ‘m' bouquets each containing
  'k' roses. Return -1 if it is not possible.

Examples
Example 1:
Input Format: N = 8, arr[] = {7, 7, 7, 7, 13, 11, 12, 7}, m = 2, k = 3
Result: 12
Explanation: On the 12th the first 4 flowers and the 
last 3 flowers would have already bloomed. So, we can
 easily make 2 bouquets, one with the first 3 and another 
 with the last 3 flowers.

Example 2:
Input Format: N = 5, arr[] = {1, 10, 3, 10, 2}, m = 3, k = 2
Result: -1
Explanation: If we want to make 3 bouquets of 2 flowers 
each, we need at least 6 flowers. But we are given only 5 
flowers, so, we cannot make the bouquets.
*/
#include <vector>
#include <iostream>
using namespace std;
int find_Max(vector<int> arr)
{
    int maxi = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}
int find_Min(vector<int> arr)
{
    int mini = INT_MAX;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
    }
    return mini;
}
int possible(vector<int> arr, int days, int m, int k)
{
    int n = arr.size();
    int count = 0;
    int no_of_booke = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= days)
        {
            count++;
        }
        else
        {
            no_of_booke += (count / k);
            count = 0;
        }
    }
    no_of_booke += (count / k);
    if (no_of_booke >= m)
        return true;
    else
        return false;
}
int Boolem_day(vector<int> arr, int m, int k, int n)
{
    if (1LL * m * k > n)
        return -1;
    int low = find_Min(arr);
    int high = find_Max(arr);
    int ans = high;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (possible(arr, mid, m, k) == true)
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
    int m, k;
    cin >> m >> k;
    cout << Boolem_day(arr, m, k, n);
    return 0;
}