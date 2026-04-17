#include<vector>
#include<iostream>
using namespace std;
int find_Max(vector<int>arr){
    int maxi = INT_MIN;
    int n = arr.size();
    for (int i =0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}
int find_Min(vector<int>arr){
    int mini = INT_MAX;
    int n = arr.size();
    for(int i=0 ;i<n;i++){
        mini = min(mini,arr[i]);
    }
    return mini;
}
int possible(vector<int>arr,int days, int m ,int k){
    int n = arr.size();
    int count =0;
    int no_of_booke =0;
    for( int i =0; i<n; i++){
        if(arr[i]<=days){
            count++;
        }
        else{
            no_of_booke += (count/k);
            count = 0;
        }
    }
    no_of_booke += (count/k);
    if(no_of_booke>=m) return true;
    else return false;
}
int Boolem_day(vector<int>arr,int m, int k,int n){
  if (1LL * m * k > n) return -1;
  int low = find_Min(arr);
  int high = find_Max(arr);
  int ans = high;
  while(low<=high){
    int mid = (low+high)/2;
    if(possible(arr,mid,m,k)==true){
        ans = mid;
        high = mid-1;
    }
    else{
        low = mid+1;
    }
  }
  return ans;
}

int main(){
    int n;
    vector<int>arr;
    cin>>n;
    for( int i =0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int m,k;
    cin>>m>>k;
    cout<<Boolem_day(arr,m,k,n);
   return 0;
}