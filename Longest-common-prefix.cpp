#include <bits/stdc++.h>
using namespace std;
// find the longest common prefix
// Time complexicty of O(n*m*log n) using sorting approach

int main() {
    
   vector<string>str= {"geeksforgeeks", "geeks",
                           "geek", "geezer"};
                           
    sort(str.begin(),str.end());
 
    string a=str[0];
    string b=str[str.size()-1];
    
    int index=0;
    for(int i=0;i<a.length();i++){
        if(a[i]==b[i]){
            index++;
        }
        
    }
    string ans=a.substr(0,index);
    cout<<ans;
                           
    
}
