// find the Longest substring without the repeating char
// use sliding window approach here
// use hashset here for conatin the unique char

#include<bits/stdc++.h>
using namespace std;

int solve(string str){
    unordered_set<char>st;
    int j=0;
    int maxLength=0;

    for(int i=0;i<str.length();i++){
        while(st.find(str[i])!=st.end()){
            st.erase(str[j]);
            j++;
        }
        st.insert(str[i]);
        maxLength=max(maxLength, i-j+1);

    }
    return maxLength;
}
int main(){
    string str="abcabcbb";

    int ans=solve(str);
    cout<<ans;
}