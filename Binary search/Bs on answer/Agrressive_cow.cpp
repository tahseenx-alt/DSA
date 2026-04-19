#include<iostream>
#include<vector>
using namespace std;

bool can_we_place(vector<int>arr , int dist , int cow){
    int countcows = 1, last = arr[0];
    for(int i = 1; i<arr.size(); i++){
        if(arr[i] - last >= dist){
            countcows++;
            last = arr[i];
        }
    }
    if(countcows>=cow) return true;
    else return false;
}

int cows( vector<int>arr, int cow ){
    sort(arr.begin() ,arr.end());
    int n = arr.size();
    int ans;
    int low = 1 , high = arr[n-1] - arr[0];
    while(low<=high){
        int mid = (low+high)/2;
        if(can_we_place(arr,mid,cow) == true){
             ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    int n;
    vector<int>arr;
    cin>>n;
    for(int i = 0;i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
   int k;
   cin>>k;
   cout<<cows(arr,k);
    return 0;
}
