#include<iostream>
using namespace std;
int cnt=1;
int print_name(int cnt,int n){
    if(cnt>n){
        return 0;
    }
    cout<<"Tahseen "<<endl;
    print_name(cnt+1,n);
    return 0;
}
int main(){
    int n;
    cin>>n;
    print_name(cnt,n)
;    return 0;
}