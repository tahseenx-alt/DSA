#include<iostream>
using namespace std;
int prime_number(int n){
    int count =0;
    for(int i= 1; i<=n;i++){
        if(n % i == 0){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int check =prime_number(n);
    if(check>2){
        cout<<"It is not a prime Number";
    }
    else{
        cout<<"It is a prime Number";
    }
    return 0;
}