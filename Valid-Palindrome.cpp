#include<bits/stdc++.h>
using namespace std;

string solve(string str){
    string ans="";
    int start=0;
    int end=str.length()-1;
    while(start<end)
    {
        if(isalnum(str[start])){
            ans+=tolower(str[start]);
           
        }
        start++;
        
    }
    return ans;
}
int main(){
    string str="A man, a plan, a canal: Panama";

    string ans=solve(str);
    cout<<ans;
}