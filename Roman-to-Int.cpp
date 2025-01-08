#include <bits/stdc++.h>
using namespace std;
// Roman to int 
// Time complexicity O(n)

void solve(string &str,int n){
    unordered_map<char,int>mp= {{'I', 1}, {'V', 5}, 
                                {'X', 10}, {'L', 50},
                                {'C', 100}, {'D', 500}, 
                                {'M', 1000}};
                                
   int res=mp[str[n-1]];
   for(int i=n-2;i>=0;i--){
         // If current character's value is less than the next character, subtract it
       if(mp[str[i]]<mp[str[i+1]]){
           res=res-mp[str[i]];
       }
       else{
           res=res+mp[str[i]];
       }
   }
   cout<<res;
}
int main(){
    string str="IX";
    int n=str.length();
    solve(str,n);
}
