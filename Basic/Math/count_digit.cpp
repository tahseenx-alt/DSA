#include<iostream>
using namespace std;
int countdigit(long long n){
    int count =0;
    while(n>0){
        count +=1;
        n =n/10;
    }
    return count;
}
int main(){
    long long  n;
    cin>>n;
    int digit = countdigit(n);
    cout<<"The number of digit are : "<<digit<<endl;
    return 0;
}