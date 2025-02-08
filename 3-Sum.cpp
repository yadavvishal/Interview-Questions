// 3 SUM problem
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>solve(vector<int>&nums){
    sort(nums.begin(),nums.end());
    int target=0;
    vector<vector<int>>ans;
    int n=nums.size();
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        int start=i+1;
        int end=n-1;
        while(start<end){
            int sum=nums[i]+nums[start]+nums[end];
            if(sum==target){
                st.insert({nums[i],nums[start],nums[end]});
                start++;
                end--;
                
            }
            else if(sum >target){
                end--;
            }
            else{
                start++;
            }
        }
    }
    for(auto it:st){
        ans.push_back(it);
    }
    return ans;
}
int main(){

    vector<int>nums={-1,0,1,2,-1,-4};
    vector<vector<int>>result=solve(nums);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[0].size();j++){
            cout<<result[i][j]<<" ";
        }
    }
}