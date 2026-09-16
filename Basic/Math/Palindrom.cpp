#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int checker = n;
    int number,revnumber=0;
    while(n>0){
        number = n%10;
        revnumber = revnumber*10+number;
        n= n/10;
    }
    cout<<revnumber<<endl;
    if(checker==revnumber){
        cout<<"The number is palindrome"<<endl;
    }
    else{
        cout<<"The given number is not a palindrome"<<endl;
    }
    return 0;
}