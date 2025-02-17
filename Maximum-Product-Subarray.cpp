// The Maximum Product Subarray

#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>nums={2,3,-2,4};

    int prefix=1;
    int suffix=1;
    int maxproduct=nums[0];
    int n=nums.size();

    for(int i=0;i<nums.size();i++){
        if(prefix==0){
            prefix=nums[i];
        }
        else{
            prefix=prefix*nums[i];
        }

        if(suffix==0){
            suffix=nums[n-i-1];
        }
        else{
            suffix=suffix*nums[n-i-1];
     }

        maxproduct=max(max(prefix,suffix),maxproduct);
    }

    cout<<maxproduct;
}