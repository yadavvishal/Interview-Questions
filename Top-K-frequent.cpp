// Find the top -k frequent element

#include<bits/stdc++.h>
using namespace std;

vector<int>solve(vector<int>&nums,int k){
    unordered_map<int,int>mp;

    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }

    // priority queue - minHeap
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(auto it:mp){
        pq.push({it.second,it.first});
        if(pq.size()>k){
            pq.pop();
        }

    }
    vector<int>v;
    while(!pq.empty()){
        v.push_back(pq.top().second);
        pq.pop();
    }
    
    return v;


}
int main(){
    vector<int>nums={1,1,1,2,2,3};
    int k=2;

    vector<int>ans=solve(nums,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}