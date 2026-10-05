/*
Aggressive Cows : Detailed Solution
Problem Statement: You are given an array 'arr' of size 'n'
 which denotes the position of stalls. You are also given an
 integer 'k' which denotes the number of aggressive cows.
You are given the task of assigning stalls to 'k' cows such
 that the minimum distance between any two of them is the
 maximum possible. Find the maximum possible minimum distance.
Examples
Example 1:
Input Format:
 N = 6, k = 4, arr[] = {0,3,4,7,10,9}
Result:
 3
Explanation:
 The maximum possible minimum distance between any two
 cows will be 3 when 4 cows are placed at positions
 {0, 3, 7, 10}. Here the distances between cows
  are 3, 4, and 3 respectively. We cannot make the
  minimum distance greater than 3 in any ways.
Example 2:
Input Format:
 N = 5, k = 2, arr[] = {4,2,1,3,6}
Result:
 5
Explanation:
 The maximum possible minimum distance between any two cows
  will be 5 when 2 cows are placed at positions {1, 6}.
*/
#include <iostream>
#include <vector>
using namespace std;

bool can_we_place(vector<int> arr, int dist, int cow)
{
    int countcows = 1, last = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - last >= dist)
        {
            countcows++;
            last = arr[i];
        }
    }
    if (countcows >= cow)
        return true;
    else
        return false;
}

int cows(vector<int> arr, int cow)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int ans;
    int low = 1, high = arr[n - 1] - arr[0];
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (can_we_place(arr, mid, cow) == true)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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
    int k;
    cin >> k;
    cout << cows(arr, k);
    return 0;
}
