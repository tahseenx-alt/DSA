/*
K-th Element of two sorted arrays
Problem Statement: Given two sorted arrays a and b of size m and n respectively. Find the kth element of the final sorted array.
Examples
Example 1:
Input:
 a = [2, 3, 6, 7, 9], b = [1, 4, 8, 10], k = 5
Output:
 6
Explanation:
 The final sorted array would be [1, 2, 3, 4, 6, 7, 8, 9, 10]. The 5th element of this array is 6.

Example 2:
Input:
 a = [100, 112, 256, 349, 770], b = [72, 86, 113, 119, 265, 445, 892], k = 7
Output:
 256
Explanation:
 The final sorted array is [72, 86, 100, 112, 113, 119, 256, 265, 349, 445, 770, 892]. The 7th element of this array is 256.
*/
#include <iostream>
#include <vector>
using namespace std;
int FindMedian(vector<int> arr1, vector<int> arr2, int k)
{
    // In the case when n2>n1 we are changing n2 ->n1 and n1->n2
    // so that n1 is larger every time
    if (arr2.size() > arr1.size())
        return FindMedian(arr2, arr1, k);
    int n1 = arr1.size();
    int n2 = arr2.size();
    int low = max(0, k - n2), high = max(k, n1);
    while (low <= high)
    {
        int cut1 = (low + high) / 2;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;

        int left1 = cut1 == 0 ? INT_MIN : arr1[cut1 - 1];
        int left2 = cut2 == 0 ? INT_MIN : arr2[cut2 - 1];
        int right1 = cut1 == n1 ? INT_MAX : arr1[cut1];
        int right2 = cut2 == n2 ? INT_MAX : arr2[cut2];

        if (left1 <= right2 && left2 <= right1)
        {
            return max(left1, left2);
        }
        else if (left1 > right2)
        {
            high = cut1 - 1;
        }
        else
        {
            low = cut1 + 1;
        }
    }
    return 0;
}
int main()
{
    int n1;
    vector<int> arr1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    int n2;
    vector<int> arr2;
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    int k;
    cin >> k;
    cout << FindMedian(arr1, arr2, k);
    return 0;
}
