// Remove Duplicates from Sorted Array

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&nums){
    unordered_set<int>st;
    for(auto it:nums){
        st.insert(it);
    }
    nums.clear();
    for(auto it:st){
        nums.push_back(it);
    }
    sort(nums.begin(),nums.end());

}
int main(){
    vector<int>nums={1,1,2};

    solve(nums);

    for(auto it:nums){
        cout<<it<<" ";
    }
}