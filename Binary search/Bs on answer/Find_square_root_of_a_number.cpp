/*
Finding Sqrt of a number using Binary Search
Problem Statement: You are given a positive integer n.
Your task is to find and return its square root. If ‘n’
is not a perfect square, then return the floor value of sqrt(n).

Examples
Input: N = 36
Output: 6
Explanation: Square root of 36 is 6.
Input: N = 28
Output: 5
Explanation: Square root of 28 is approximately 5.292.
 So, the floor value will be 5.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 1;
    int low = 0, high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (mid * mid == n)
        {
            ans = mid;
            break;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans;
}