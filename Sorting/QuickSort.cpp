#include<iostream>
#include<vector>
using namespace std;
int partitionIndex(vector<int>& arr,int low,int high){
    int pivot = arr[low];
    int i= low;
    int j = high;
    while(i<j){
       while(arr[i]<=pivot && i<=high-1){
        i++;
       }
       while(arr[j]>pivot && j>=low+1){
        j--;
       }
       if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(vector<int>&arr, int low,int high){
    if(low<high){
        int Pindex = partitionIndex(arr,low,high);
        quicksort(arr,low,Pindex-1);
        quicksort(arr,Pindex+1,high);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    quicksort(arr,0,arr.size()-1);
    for( int x:arr){
        cout<<x<<" ";
    }
    return 0;
}