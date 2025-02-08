// Majority Element
// Given an array nums of size n, return the majority element The majority element is the element that appears more than ⌊n / 2⌋ times. 

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&nums){
    unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n=nums.size();
        int ans=-1;
        for(auto it:mp){
            if(it.second > n/2){
                ans=it.first;
            }
        }
        return ans;
    
}
int main(){
    vector<int>nums={3,2,3};

    int res=solve(nums);
    cout<<"The majority ELement is:"<<res;
}