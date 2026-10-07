#include<iostream>
using namespace std;
void swap_number(int &n1,int &n2){
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
int main(){
    int n;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left =0,right=n-1;
    while(left<right){
        swap_number(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}