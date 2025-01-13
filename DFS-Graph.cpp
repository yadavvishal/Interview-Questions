// DFS traversal of Graph using the stack and visited array
//Time Complexity: O(V+E), where V is the number of nodes and E is the number of edges.
// Space: O(V) 


#include<bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>>adj,int source){
    vector<bool>visited(adj.size(),false);
    
    stack<int>st;
    st.push(source);
    visited[source]=true;
    while(!st.empty()){
        int temp=st.top();
        st.pop();
        cout<<temp<<" ";

// check if adjacent of temp is visited or not if not then push in stack and mark as visited

        for(auto it:adj[temp]){
            if(!visited[it]){
                st.push(it);
                visited[it]=true;
            }
        }
    }
    
}

void addEdge(vector<vector<int>>&adj, int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main(){
    // Number of vertices in the graph
    int vertex=5;

    // Adjacency list representation of the graph
    vector<vector<int>>adj(vertex);

     // Add edges to the graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 4);
    cout<<"The DFE traversal of graph are:"<<endl;
    DFS(adj,1);
}