/*
Find the row with maximum number of 1's
Problem Statement: You have been given a non-empty grid
 ‘mat’ with 'n' rows and 'm' columns consisting of only 
 0s and 1s. All the rows are sorted in ascending order. 
 Your task is to find the index of the row with the maximum 
 number of ones. Note: If two rows have the same number of ones,
  consider the one with a smaller index. If there's no row with
   at least 1 zero, return -1
Examples
Example 1:
Input Format: n = 3, m = 3, 
mat[] = 
1 1 1
0 0 1
0 0 0
Result: 0
Explanation: The row with the maximum number of ones is 0 (0 - indexed).

Example 2:
Input Format: n = 2, m = 2 , 
mat[] = 
0 0
0 0
Result: -1
Explanation:  The matrix does not contain any 1. So, -1 is the answer.
*/


#include <iostream>
#include <vector>
#include <algorithm> // Required for std::lower_bound

using namespace std;

// Pass by const reference to avoid expensive copies
int findrow(const vector<vector<int>>& matrix, int n, int m) {
    int max_index = -1;
    int max_ones = 0; // Track the maximum number of 1s found

    for (int i = 0; i < n; i++) {
        // std::lower_bound returns an iterator to the first '1'
        auto it = lower_bound(matrix[i].begin(), matrix[i].end(), 1);
        
        // Calculate the index by subtracting the beginning iterator
        int first_one_idx = distance(matrix[i].begin(), it);
        
        // The number of 1s is total columns minus the index of the first 1
        int count_ones = m - first_one_idx;

        // Strictly greater ensures we keep the smaller index in case of a tie
        if (count_ones > max_ones) {
            max_ones = count_ones;
            max_index = i;
        }
    }
    
    return max_index;
}

int main() { 
    int n, m;
    if (!(cin >> n >> m)) return 0; // Safe input checking
    
    vector<vector<int>> matrix(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {  
            cin >> matrix[i][j];      
        }
    }

    // Pass 'm' as well so we can calculate the count of 1s
    cout << findrow(matrix, n, m) << "\n";
    return 0;
}