#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_set<int>st;
    bool found = false;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(st.count(arr[i])==1){
            found = true;
            cout<<arr[i];
            break;
        }
        else {
            st.insert(arr[i]);
        }
    }
    if(found == false){
        cout<<"not found";
    }

    return 0;
}