#include<iostream>
using namespace std;
int reverse_a_number(int n){
    int number;
    int revnumber=0;
    while(n>0){
        number = n%10;
        revnumber = revnumber*10+number;
        n = n/10;
    }
    return revnumber;
}
int main(){
    int n;
    cin>>n;
    cout<< reverse_a_number(n);
    return 0;
}