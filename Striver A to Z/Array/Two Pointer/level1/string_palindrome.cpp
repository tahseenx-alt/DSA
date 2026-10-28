#include<iostream>
using namespace std;
class solution{
    public :
    bool ispalindrome (string s){
        int left = 0;
        int right = s.size()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
int  main(){
    string s;
    cin>>s;
    solution sol;
    if(sol.ispalindrome(s)){
        cout<<"String is a  palindorme "<<endl;
    }
    else{
        cout<<"String is not a  palindorme "<<endl;
    }
}