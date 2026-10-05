/*
Koko Eating Bananas
Problem Statement: A monkey Koko is given ‘n’ piles of bananas,
 whereas the 'ith' pile has ‘a[i]’ bananas. An integer ‘h’ is
 also given, which denotes the time (in hours) for all the
  bananas to be eaten.

Each hour, the monkey chooses a non-empty pile of bananas
and eats ‘k’ bananas. If the pile contains less than ‘k’
 bananas, then the monkey consumes all the bananas and won’t
 eat any more bananas in that hour.

Find the minimum number of bananas ‘k’ to eat per hour so
that the monkey can eat all the bananas within ‘h’ hours.

Examples
Input: N = 4, a[] = {7, 15, 6, 3}, h = 8
Output: 5
Explanation:  If Koko eats 5 bananas/hr, he will take 2, 3, 2,
and 1 hour to eat the piles accordingly. So, he will take 8
 hours to complete all the piles.
Input: N = 5, a[] = {25, 12, 8, 14, 19}, h = 5
Output: 25
Explanation: If Koko eats 25 bananas/hr, he will
take 1, 1, 1, 1, and 1 hour to eat the piles accordingly.
*/
#include <vector>
#include <iostream>
using namespace std;
int find_max(vector<int> arr)
{
    int maxi = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}
int totalHours(vector<int> arr, int k)
{
    int totalH = 0;
    for (int bananas : arr)
    {
        totalH += ceil((double)bananas / k);
    }
    return totalH;
}
int koko_eating(vector<int> arr, int n, int h)
{
    int ans = 0;
    int low = 1;
    int high = find_max(arr);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (totalHours(arr, mid) <= h)
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
    int n, h;
    vector<int> arr;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << koko_eating(arr, n, h);
    return 0;
}