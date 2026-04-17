#include<iostream>
using namespace std;
double multiply(double number ,int n){
    int ans=1;
    for( int i =1; i<=n; i++){
        ans = ans * number;
    }
    return ans;
}
double getNthRoot(int n, int m){
  double low = 1;
  double high = m;
  double e = 1e-6;
  while((high - low )> e){
    double mid = (low + high)/2.0;
    if(multiply(mid , n) < m){
        low = mid;
    }
    else{
        high = mid;
    }
  }
  cout<<low<<"   "<< high<<endl;
  cout<<pow(m,(double)(1.0/(double)n));
}
int main(){
    int n,m;
    cin>>n>>m;
    getNthRoot(n,m);
    return 0;
}