#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n= s.size();
    vector<char> MinToCharRight(n);
    
    MinToCharRight[n-1] = s[n-1];
    for(int i = n-2; i>=0 ; i--){
        MinToCharRight[i] = min(s[i], MinToCharRight[i+1]);
    }
    
    string t ="";
    string paper ="";
    int i=0;
    while(i<n){
        t.push_back(s[i]);
        char minchar = (i+1)<n ? MinToCharRight[i+1] : s[i]; //. to prevent out of bound
        while(!t.empty() && t.back() <= minchar){
            paper += t.back();
            t.pop_back();
        }
        i++;
    }

    while(!t.empty()){
        paper += t.back();
        t.pop_back();
    }
    cout<<paper;
    
    return 0;
}