#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    int n,n1;
    cin>>n>>n1;
    vector<int>target(n1);
    for(int i =0; i<n1;i++){
        cin>>target[i];
    }
    int stream = 1;
    int i=0;
    vector<string>result;
    while(i<target.size() && stream<=n){
        result.push_back("push");
        if(stream == target[i]){
            i++;
        }
        else{
            result.push_back("pop");
        }
        stream++;
    }
    for(auto x : result){
        cout<<x<<" ";
    }
    return 0;
}