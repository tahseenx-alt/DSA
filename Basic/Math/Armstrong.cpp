#include<iostream>
using namespace std;
int armstrong(int n){
    int number;
    int sum=0;
    while(n>0){
        number = n%10;
        sum = sum+(number*number*number);
        n = n/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int dubnumber = n;
    int checker = armstrong(n);
    if(checker == dubnumber){
        cout<<"The Given Number is Armstrong number";
    }
    else{
        cout<<"The Given Number is Not a Armstrong number";
    }
    return 0;
}