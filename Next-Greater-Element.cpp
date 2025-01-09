// Next Greater Element if not then place -1

#include <bits/stdc++.h>
using namespace std;

vector<int>solve(vector<int>arr, int n){
    vector<int> ans(n, -1);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                ans[i]=arr[j];
                break;
            }
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {6, 8, 0, 1, 3};
    int n=arr.size();
    vector<int>res=solve(arr,n);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
