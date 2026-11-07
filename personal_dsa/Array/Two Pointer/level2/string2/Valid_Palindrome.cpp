#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    int l =0,r = n-1;
    bool ispalindrome = true;
    while(l<r){
        if(!isalnum(s[l])){
            l++;
        }
        else if(!isalnum(s[r])){
            r--;
        }
        if(tolower(s[l])!=tolower(s[r])){
            ispalindrome = false;
            break;
        }
        l++;
        r--;
    }
    if(ispalindrome){
        cout<<"string is palindrome";
    }
    else{
        cout<<"String is not a palindrome";
    }
    return 0;
}