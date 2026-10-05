#include<iostream>
#include<vector>
using namespace std;

int secondLargest(vector<int>arr, int n) {

    if (n < 2)
        return -1;

    int large = INT_MIN, second_large = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        } 
        else if (arr[i] > second_large && arr[i] < large) {
            second_large = arr[i];
        }
    }
    return second_large; 
}

int main(){
    int n;
   cin>>n;
   vector<int>arr;
   for(int i=0;i<n; i++){
    int x;
    cin>>x;
    arr.push_back(x);
   }
    int ans = secondLargest(arr,n);
    cout<<ans;
    return 0;
}