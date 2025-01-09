// 3 Sum – Pythagorean Triplet in an array,  a2 + b2 = c2.
// solve using the two pointer approach

#include <bits/stdc++.h>
using namespace std;

bool solve(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        int l=0;
        int r=n-1;
        while(l<r){
            if(arr[l]+arr[r]==arr[i]){
                return true;
            }
            else if (arr[l]+arr[r]< arr[i])
            {
                l++;
            }
            else{
                r--;
            }
        }
    }
    return false;
}
int main(){
    int arr[] = {10, 4, 6, 12, 5}  ;
    int n=5;
    bool ans=solve(arr,n);
    cout<<ans;    
}
