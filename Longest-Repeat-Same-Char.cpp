// find the Longest Repeat char Replacement after perform k operations;
// sliding approach use here
// O(N)

#include<bits/stdc++.h>
using namespace std;

int solve(string str,int k){
    unordered_map<char,int>mp;
    int maxFreq=0;
    int maxLen=0;
    int left=0;

    for(int right=0;right<str.length();right++){
         mp[str[right]]++;

         maxFreq=max(maxFreq,mp[str[right]]);
        if((right-left+1 )-maxFreq > k){
            mp[str[left]]--;
            left++;
        }

        maxLen=max(maxLen,right-left+1);

    }
    return maxLen;
}
int main(){
    string str="AABABBA";
    int k=2;
    int maxLen=solve(str,k);
    cout<<maxLen;
}