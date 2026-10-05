#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    int largest =arr[0];
    int secondlargest;
    for(int i=1; i<n; i++){
        if(largest < arr[i]){
            secondlargest = largest;
            largest = arr[i];
        }
    }
    cout<<largest<<" "<<secondlargest<<endl;

    return 0;
}