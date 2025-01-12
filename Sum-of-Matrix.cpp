// Problem - find the sum of matrix,  where we add elements of col of matrix

#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>mat){
    int sum=0;
    
    for(auto &it:mat){
        sort(it.begin(),it.end());
    }
    for(int j=0;j<mat[0].size();j++){
        int maxInCol=INT_MIN;
        for(int i=0;i<mat.size();i++){
            maxInCol=max(maxInCol,mat[i][j]);
        }
        sum+=maxInCol;
    }
    
    cout<<"The sum in Matrix are:"<<sum;

}

int main() {
    
    vector<vector<int>> mat = { 
        { 0, 1, 2, 0 },
        { 3, 4, 0, 2 },
        { 1, 3, 1, 5 },
        { 8, 9, 10, 11 } 
    };
    
    solve(mat);

    return 0;
}
