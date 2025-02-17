// find the Container with most water
// time complexcity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};  

    int left=0;
    int right=height.size()-1;
    int maxArea=0;

    while(left<right){

        int width=right-left;
        int minheight=min(height[left],height[right]);

        int area=width*minheight;
        maxArea=max(area,maxArea);

        if(height[left]< height[right]){
            left++;
        }
        else{
            right--;
        }

    }
    cout<<maxArea;

}