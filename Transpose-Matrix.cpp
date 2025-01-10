// Here we are solving the transpose matrix problem

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>solve(vector<vector<int>>matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>v(m, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[j][i]=matrix[i][j];
            }
        }
        return v;
}
int main() {
     vector<vector<int> > matrix = { { 0, 1, 2, 0 },
                                 { 3, 4, 0, 2 },
                                 { 1, 3, 1, 5 },
                                 {8,9,10,11}};
                                 
    vector<vector<int>>ans=solve(matrix);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
       
    }

    return 0;
}
