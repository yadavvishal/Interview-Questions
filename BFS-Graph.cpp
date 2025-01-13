// BFS traversal of graph - using the queue and visited array

//Time Complexity: O(V+E), where V is the number of nodes and E is the number of edges.
// Space: O(V) 

#include<bits/stdc++.h>
using namespace std;

void BFS(vector<vector<int>>adj,int source){

    vector<bool>visited(adj.size(),false);

    queue<int>q;
    // push source node in queue

    q.push(source); 
    // in visited array , mark source is true

    visited[source]=true;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        cout<<temp<<" ";

// Get all the adjacent vertices of temp if adjacent are not visited
// make them visited and push to queue

        for(auto x:adj[temp]){
            if(!visited[x]){
                q.push(x);
                visited[x]=true;
            }
        }
    }

}
// Function to add an edge to the graph
// undirected graph

void addEdge(vector<vector<int>>& adj,int u,int v){
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
    cout<<"BFS traversal of grpah are:"<<endl;
    BFS(adj,0);
}