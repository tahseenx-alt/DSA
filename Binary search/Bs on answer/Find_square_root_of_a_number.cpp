#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int ans =1 ;
    int low = 0 , high = n;
    while(low<=high){
        int mid = (low +high)/2;
        if(mid * mid == n){
            ans = mid;
            break;
        }
        else if( mid * mid < n){
            ans = mid;
            low = mid+1;
           
        }
        else{
             high = mid-1;
        }
    }
    cout<<ans;
}