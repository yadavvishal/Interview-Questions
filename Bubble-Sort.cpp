// Bubble Sort - using two for loop
// Time complexcity - O(n^2)

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[j]> arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; 
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} 
int main(){
    int arr[]={1,7,2,9,4,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);
}