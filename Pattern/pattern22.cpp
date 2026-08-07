#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<2*n-1; i++){
        for(int j = 0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j; // Fixed the typo here
            int down = (2*n-2)-i;
            
            int x = n - min(min(top,down), min(right,left));
            
            cout << x << " "; 
        }
        cout << endl; 
    }
    return 0;
}
