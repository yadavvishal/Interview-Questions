// Two Sum Problem
// return sum index in vector form

#include<bits/stdc++.h>
using namespace std;

vector<int>solve(vector<int>&nums,int target){
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        int temp= target-nums[i];
        if(mp.find(temp)!=mp.end()){
            return {mp[temp],i};
        }
        mp[nums[i]]=i;
    }
    return {};
}
int main(){
    vector<int>nums={1,3,9,4,5};
    int target=12;

    vector<int>ans=solve(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i] <<" ";
    }
}