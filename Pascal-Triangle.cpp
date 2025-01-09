// Pascal Triangle - nth row value find
// Time complexicity - n*n

#include <bits/stdc++.h>
using namespace std;
vector<int>solve(int n){
    //n=5
    // 1d vector which store the value (n+1,1) = [1,1,1,1,1,1]
    vector<int>row(n+1,1);
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            row[j]=row[j]+row[j-1];
        }
    }
    return row;
}

int main(){
    int n=5;
    vector<int>ans=solve(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}
