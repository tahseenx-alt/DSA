#include<iostream>
#include<algorithm>
using namespace std;
int swap_number(int n1,int n2){
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout<<n1<<" "<<n2;
}
int main(){
int n1,n2;
cin>>n1>>n2;
cout<<n1<<" "<<n2<<endl;
swap_number(n1,n2);
}