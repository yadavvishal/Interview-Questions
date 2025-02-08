// Find First and Last Position of Element in Sorted Array

#include<bits/stdc++.h>
using namespace std;

vector<int>solve(vector<int>&nums,int target){
    int n=nums.size()-1;

    vector<int>ans;

    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            ans.push_back(i);
            break;
        }

    }
    for(int j=n;j>=0;j--){
        if(nums[j]==target){
            ans.push_back(j);
            break;
        }
    }
    if(ans.size()==0){
        return {-1,-1};

    }
    return ans;
}

int main(){
    vector<int>nums={5,7,7,8,8,10};
    int target=8;
    vector<int>ans=solve(nums,target);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}