// Binary Search Algorithm - Seacrh element in sorted array
// log(n)

#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int n,int target){
    int l=0;
    int r=n-1;
   
    while(l<=r){
         int mid=(l+r)/2;
        if(arr[mid]==target){
            cout<<"The target element is present in the give array";
            return;
        }
        else if(arr[mid]<target){
            l=mid+1;
            
        }
        else{
            r=mid-1;
        }
    }
    cout<<"The target element is not found in the given array";
}

int main() {
    int arr[]={1,4,6,7,9,10,11,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=13;
    
    solve(arr,n,target);
    return 0;
}
