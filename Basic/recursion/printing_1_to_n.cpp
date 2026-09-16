#include<iostream>
using namespace std;
int i=1;
int print(int i,int n){
    if(i>n){
        return 0;
    }
    cout<<i<<" ";
    print(i+1,n);
}
int main(){
    int n;
    cin>>n;
    print(i,n);
    return 0;
}