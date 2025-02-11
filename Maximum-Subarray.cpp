// we have to find the maximum subarray sum
// Time complexcity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    int tempsum=0;
    int maxx=nums[0];

    for(int x:nums){
        tempsum=tempsum+x;
        maxx=max(tempsum,maxx);

        if(tempsum < 0){
            tempsum=0;
        }
    }

    cout<<"The maximum subarray sum is: "<<maxx;

}