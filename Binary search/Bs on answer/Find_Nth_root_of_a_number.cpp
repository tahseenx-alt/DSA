/*
Nth Root of a Number using Binary Search
Problem Statement: Given two numbers N and M,
 find the Nth root of M. The nth root of a number M
 is defined as a number X when raised to the power N
  equals M. If the 'nth root is not an integer, return -1.

Examples
Input: N = 3, M = 27
Output: 3
Explanation: The cube root of 27 is equal to 3.
Input : N = 4, M = 69
Output: -1
Explanation : The 4th root of 69 does not exist. So, the answer is -1.
*/
#include <iostream>
using namespace std;
double multiply(double number, int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * number;
    }
    return ans;
}
double getNthRoot(int n, int m)
{
    double low = 1;
    double high = m;
    double e = 1e-6;
    while ((high - low) > e)
    {
        double mid = (low + high) / 2.0;
        if (multiply(mid, n) < m)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    cout << low << "   " << high << endl;
    cout << pow(m, (double)(1.0 / (double)n));
}
int main()
{
    int n, m;
    cin >> n >> m;
    getNthRoot(n, m);
    return 0;
}