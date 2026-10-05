#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int n = min(n1,n2);
    for(int i=0;i<n;i++){
        if(n1%i == 0 && n2%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}