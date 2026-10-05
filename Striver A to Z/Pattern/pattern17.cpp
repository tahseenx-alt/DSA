#include<iostream>
using namespace std;
void alternative(int n){
        for(int i = 1; i<=n; i++){
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }
        for(char j = 'A'; j<'A'+i; j++){
            cout<<j;
        }
        for(char j = 'A' + i - 2; j >= 'A'; j--){
            cout << j;
        }

        for(int j=n-i; j>0; j--){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }
        cout<<endl;
    }
    alternative(5);
    return 0;
}