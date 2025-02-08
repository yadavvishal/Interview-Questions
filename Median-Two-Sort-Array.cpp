// Median of Two Sorted Arrays

#include<bits/stdc++.h>
using namespace std;

double solve(vector<int>&num1,vector<int>&num2){
    vector<int>ans;
    for(int i=0;i<num1.size();i++){
        ans.push_back(num1[i]);
    }

    for(int i=0;i<num2.size();i++){
        ans.push_back(num2[i]);
    }
    sort(ans.begin(),ans.end());
    int n=ans.size();
    double result;

    if(n%2==0){
        int a=ans[n/2];
        int b= ans[n/2 -1];
        result= (a+b)/2.0;

    }
    else{
        result=ans[n/2];
    }
    return result;
}

int main(){
    vector<int>num1={1,3};
    vector<int>num2={2};

    double ans=solve(num1,num2);
    cout<<ans;
}