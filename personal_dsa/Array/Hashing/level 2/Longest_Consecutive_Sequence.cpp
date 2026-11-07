#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        st.insert(arr[i]);
    }
    int ans =0;
    for(auto x:st){
        if(st.count(x-1)==0){
            int current = x;
            int lenght = 1;
            while(st.count(current+1)){
                current++;
                lenght++;
            }
            ans = max(ans,lenght);
        }
    }
    cout<<ans;
    return 0;
}