// Find the minimum in sorted array

#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>&nums){
    int start=0;
    int end=nums.size()-1;
    if(nums[start]<=nums[end]){
        return nums[start];
    }
    else{
        while(start<=end){
            int mid=(start+end)/2;

        // Check if nums[mid] is the Minimum

            if(mid-1>=0 && nums[mid]<nums[mid-1]){
                return nums[mid];
            }
            else if (nums[mid] >nums[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
}
int main(){
    vector<int>nums={4,5,6,7,0,1,2};

    int ans =findMin(nums);
    cout<<ans;
}