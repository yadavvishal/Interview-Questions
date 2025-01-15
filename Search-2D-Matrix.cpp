// Search in 2D Matrix
// The row index in the 2D matrix is determined by mid / m (integer division).
//The column index in the 2D matrix is determined by mid % m (remainder).

// Time Complexicty = O(log(m*n))

#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>>&mat,int target){
    int n=mat.size();
    int m=mat[0].size();

    int start=0;
    int end=n*m-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(mat[mid/m][mid%m]==target){
            return true;
        }
        if(target > mat[mid/m][mid%m]){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
    }

}
int main(){
    int target=3;
     vector<vector<int>> mat = { 
        { 1, 3, 5, 7 },
        { 10, 11, 16, 20 },
        { 23, 30, 34, 60} 
    };

    bool ans=search(mat,target);
    cout<<ans;
}