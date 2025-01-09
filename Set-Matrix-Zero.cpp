// Set Matrix zero 
// Given a matrix mat[][] of size nxm, the task is to update the matrix such that if an element is zero, set its entire row and column to zeroes.

#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>&mat,int n,int m){
   
    
    vector<int>row(n,false);
    vector<int>col(m,false);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                row[i]=true;
                col[j]=true;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]|| col[j]){
                mat[i][j]=0;
            }
        }
    }
    
}

int main() {
    // Write C code here
    vector<vector<int> > mat = { { 0, 1, 2, 0 },
                                 { 3, 4, 0, 2 },
                                 { 1, 3, 1, 5 } };
    int n=mat.size();
    int m=mat[0].size();
    
    solve(mat,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
    }

    return 0;
}
