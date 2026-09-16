#include<iostream>
using namespace std;
int print_all_divisor(int n){
    for(int i =1;i<=n;i++){
        if(n %  i == 0){
        cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    print_all_divisor(n);
    return 0;
}