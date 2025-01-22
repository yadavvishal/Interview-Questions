// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

#include<bits/stdc++.h>
using namespace std;
void solve(int open_rem, int close_rem, string s, vector<string>&ans){
    if(open_rem==0 && close_rem==0){
        ans.push_back(s);
        return ;
    }
    if(open_rem > 0){
        string current= s+'(';
        solve(open_rem-1,close_rem,current,ans);
    }
    if(open_rem < close_rem){
        string current=s+')';
        solve(open_rem, close_rem-1,current,ans);
    }
    
}
int main(){
    
    int n=3;

    vector<string>ans;
    string s="";
    solve(n,n,s,ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}