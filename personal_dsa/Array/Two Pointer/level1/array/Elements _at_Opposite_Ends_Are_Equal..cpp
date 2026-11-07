#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left =0;
    int right = n-1;
    bool isequal = true;
    while(left <right){
        if(arr[left] != arr[right]){
            isequal = false;
            break;
        }
        left++;
        right--;
    }
    if(isequal){
        cout<<"Both opposite end is equal ";
    }
    else{
        cout<<"Both opposite end is not equal";
    }
    return 0;
}