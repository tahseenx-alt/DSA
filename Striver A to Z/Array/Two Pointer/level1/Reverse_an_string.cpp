#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n = str.length();
    int left =0;
    int right = n-1;
    while(left<right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
    cout<<str;
    return 0;
}