#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string a;
  getline(cin,a);   
  int n= a.length();
  string ans ="";
  reverse(a.begin(),a.end());
  for( int i = 0; i<n; i++){
    string word = "";
    while(i<n && a[i] != ' '){
        word += a[i];
        i++;
    }

    reverse(word.begin(),word.end());
    if(word.length()>0){
      ans += " "+word;
    }

  }
  cout<<ans.substr(1);
}