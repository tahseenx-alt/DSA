#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }
        for(char j = 'A'; j<'A'+i; j++){
            cout<<j<<" ";
        }
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}