#include<iostream>
#include<vector>
using namespace std;
int sum (vector<int>arr, int n){
    int sum =0;
    for(int i =0 ;i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}
bool ispossible(vector<int>arr, int barrier,int k ){
    int n = arr.size();
    int allocatedstu = 1, pages =0;
    for(int i=0;i<n;i++){
        if(arr[i]>barrier) return false;
        if(pages+arr[i]>barrier){
             allocatedstu +=1;
             pages += arr[i];
        }
        else{
            pages += arr[i];
        }
    }
    if(allocatedstu>k) return false;
    else return true;
}
int allocation(vector<int>arr,int n, int k){
    int low = arr[0];
    int high = sum(arr,n);
    int res = -1;
    while(low<=high){
      int mid =(low+high)/2;
      if(ispossible(arr,mid,k)){
        res = mid;
        high = mid-1;
      }
      else{
        low = mid+1;
      }
    }
    return res;
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
    int student;
    cin>>student;
    cout<<allocation(arr,n,student);
    return 0;
}
