// find the Longest substring without the repeating char
// use sliding window approach here
// use hashset here for conatin the unique char

#include<bits/stdc++.h>
using namespace std;

int solve(string str){
    unordered_set<char>st;
    int left=0;
    int maxLength=0;

    for(int right=0;right<str.length();right++){
        while(st.find(str[right])!=st.end()){
            st.erase(str[left]);
            left++;
        }
        st.insert(str[right]);
        maxLength=max(maxLength, right-left+1);

    }
    return maxLength;
}
int main(){
    string str="abcabcbb";

    int ans=solve(str);
    cout<<ans;
}