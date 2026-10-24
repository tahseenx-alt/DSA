#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left =0;
    int right = n-1;
    int found =0;
    if(n==1){
        cout<<"The array is palindorme"<<endl;
        return 0;
    }
    bool ispalindrome = false;
    if(n>1){
        while(left<right){
            if(arr[left]!=arr[right]){
                ispalindrome = false;
                break;
            }
            else{
                ispalindrome= true;
                left++;
                right--;
            }
        }
        if(ispalindrome){
            cout<<"The array is palindrome"<<endl;
        }
        else{
            cout<<"The array is not palindrome"<<endl;
        }
    }
    else{
        cout<<"Array is empty";
        return -1;
    }
    return 0;
}