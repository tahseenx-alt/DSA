/*
Allocate Minimum Number of Pages
Problem Statement: Given an array ‘arr of integer numbers,
‘ar[i]’ represents the number of pages in the ‘i-th’ book.
There are a ‘m’ number of students, and the task is to allocate
 all the books to the students.
Allocate books in such a way that:

Each student gets at least one book.
Each book should be allocated to only one student.
Book allocation should be in a contiguous manner.
You have to allocate the book to ‘m’ students such that the
maximum number of pages assigned to a student is minimum.
If the allocation of books is not possible. return -1

Examples
Example 1:

Input Format: n = 4, m = 2, arr[] = {12, 34, 67, 90}
Result: 113
Explanation: The allocation of books will be 12, 34, 67 | 90.
 One student will get the first 3 books and the other will get
 the last one.


Example 2:
Input Format:
 n = 5, m = 4, arr[] = {25, 46, 28, 49, 24}
Result:
 71
Explanation: The allocation of books will be 25, 46 | 28 | 49 | 24.
*/
#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int> arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
bool ispossible(vector<int> arr, int barrier, int k)
{
    int n = arr.size();
    int allocatedstu = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > barrier)
            return false;
        if (pages + arr[i] > barrier)
        {
            allocatedstu += 1;
            pages += arr[i];
        }
        else
        {
            pages += arr[i];
        }
    }
    if (allocatedstu > k)
        return false;
    else
        return true;
}
int allocation(vector<int> arr, int n, int k)
{
    int low = arr[0];
    int high = sum(arr, n);
    int res = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (ispossible(arr, mid, k))
        {
            res = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return res;
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
    int student;
    cin >> student;
    cout << allocation(arr, n, student);
    return 0;
}
