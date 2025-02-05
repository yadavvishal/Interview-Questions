// Longest Palindrome Substring
// N^2 complexcity
// Use 2D DP here to solve problem

#include<bits/stdc++.h>
using namespace std;


int main(){
    string str="babad";
    int start=0;
    int end = 0;
    int maxLen=1;
    vector<vector<bool>>dp(str.length(),vector<bool>(str.length(),false));
    for(int i=0;i<str.length();i++){

        // one char is always palindrome
        dp[i][i]=true;
        for(int j=0;j<i;j++){
            if(str[i]==str[j] && (i-j<=2 || dp[j+1][i-1])){
                dp[j][i]=true;

                if(i-j+1 > maxLen){
                    maxLen=i-j+1;
                    start=j;
                    end=i;
                }
            }
        }
    }
    string ans=str.substr(start,end-start+1);
    cout<<ans;
}