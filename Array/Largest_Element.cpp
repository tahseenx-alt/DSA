#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i =0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    
    int max= arr[0];
    for(int i=1; i<n; i++){
        if(max<arr[i+1]){
            max = arr[i+1];
        }
    }
   cout<<max;
    return 0;
}