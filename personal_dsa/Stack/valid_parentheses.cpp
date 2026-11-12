#include<iostream>
#include<stack>
using namespace std;
int main(){

    string str ;
    cin>>str;
    int n = str.size();
    stack<char>st;
    bool isvalid = true;
    for(int i = 0; i < n; i++) {

    // Case 1: Opening bracket
    if(str[i] == '(' || str[i] == '[' || str[i] == '{') {
        st.push(str[i]);
    }

    // Case 2: Closing bracket
    else {

        // Check if stack is empty
        if(st.empty()){
            isvalid  = false;
            break;
        }

        // Check whether top matches current bracket
        if(st.top() == '(' && str[i] == ')' || 
           st.top() == '{' && str[i] == '}' ||
           st.top() == '[' && str[i] == ']' 
          ){
            st.pop();
        }
        else{
            isvalid = false;
            break;
        }

        // If it matches, pop
        // Otherwise, invalid
    }
}

// After loop:
// If stack is not empty, invalid
    if(!st.empty()){
        isvalid = false;
    }
    if(isvalid){
        cout<<"The given string is  valid parenthese";
    }
    else{
        cout<<"The given string is not has valid parenthese";
    }
    return 0;
}