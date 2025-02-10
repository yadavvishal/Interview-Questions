// find the number of islands using the DFS appoach

#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<char>>&grid, int i, int j,int row,int col){
    if(i<0 || j<0|| i>=row || j>=col || grid[i][j]!='1'){
        return;
    }
    else{
        if(grid[i][j]=='1'){
            grid[i][j]='2';

            dfs(grid,i-1,j,row,col); // up
            dfs(grid,i,j-1,row,col); // left
            dfs(grid,i+1,j,row,col); // down
            dfs(grid,i,j+1,row,col); // right
        }
    }
}
int findIslands(vector<vector<char>>&grid){
    int n=grid.size();
    int m=grid[0].size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='1'){
                count++;
                dfs(grid,i,j,n,m);
            }
        }
    }
    return count;
}
int main(){

    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };
    int ans=findIslands(grid);

    cout<<"The number of islands are :"<<ans;
}