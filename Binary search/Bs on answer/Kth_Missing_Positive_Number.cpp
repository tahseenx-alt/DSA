#include<iostream>
#include<vector>
using namespace std;

int missing_number(vector<int>arr,int n, int k){
    int low = 0 , high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int missing = arr[mid] - (mid+1);
        if(missing<k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return k+high+1;
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
    cout<<missing_number(arr,n,k);

    return 0;
}
