#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string LongestCommonPrefix(vector<string>& strs){
  
  sort(strs.begin(),strs.end());
  string first = strs[0];
  string last = strs[strs.size()-1];
  string ans ="";
  for(int i =0; i<min(first.size(),last.size()); i++){
    if(first[i]!=last[i]){
      break;
    }
    ans += first[i];
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  vector<string> strs(n);
  for(int i=0;i<n; i++){
    cin>>strs[i];
  }
  cout<<LongestCommonPrefix(strs);
  return 0;
}
