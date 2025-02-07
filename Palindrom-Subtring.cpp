// find the all palindrome substrings of string
// Brute force approach use here
// Time complexicty - O(N^3)

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){

    int start=0;
    int end=str.length()-1;
    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
void substrings(string str){
    int n=str.length();
    //int count =0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            string ans=str.substr(i,j-i+1);
                if(isPalindrome(ans)){
                    cout<<ans<<" ";
                    //count++;
                }
            
        }
    }
}
int main(){
    string str="abc";

    substrings(str);
}