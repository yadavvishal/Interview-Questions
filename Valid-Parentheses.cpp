#include <bits/stdc++.h>
using namespace std;

// Valid Parentheses in an Expression

bool solve(string &s, stack<int>&st){
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(!st.empty() && st.top()=='(' && s[i]==')' || st.top()=='{' && s[i]=='}' || st.top()=='[' && s[i]==']'){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return true;
}

int main() {
    
    string s = “[()]{}{[()()]()}” ;
    stack<int>st;
    
    bool ans=solve(s,st);
    cout<<ans;
    
    return 0;
}
