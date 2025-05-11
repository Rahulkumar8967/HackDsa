#include<bits/stdc++.h>
using namespace std;
 // bfs algorithm
// Time complexity: O(V + E) where V is the number of vertices and E is the number of edges
// Space complexity: O(V) for the queue and visited array

vector<int> bfsOfAlgo(vector<int> adj[], int V) {
  vector<int> vis(V,0);   // queue,vis, adjList chaiye
  vis[0] = 1;
  queue<int> q;
  q.push(0);
  vector<int> ans;
  while(!q.empty()){
    int node = q.front();
    q.pop();
    ans.push_back(node); 
    for(auto it: adj[node]){
      if(!vis[it]){
        vis[it] = 1;
        q.push(it);
      }
    }
  }
  return ans;
}

// int main(){
//   int V, E;
//   cout << "Enter number of vertices and edges: ";
//   cin >> V >> E; 
//   vector<int> adj[V];
//   for(int i = 0; i < E; i++){
//     int u, v;
//     cout << "Enter edge (u v): ";
//     cin >> u >> v; // input edge
//     adj[u].push_back(v); // add edge to adjacency list
//     adj[v].push_back(u); // add edge to adjacency list (for undirected graph)
//   }
//   vector<int>bfs = bfsOfAlgo(adj, V); 
//   for(int i = 0; i < bfs.size(); i++){
//     cout << bfs[i] << " "; // print bfs traversal
//   }
//   cout << endl;
  
//   return 0;
// }


int main(){
  int v = 5;
  vector<int> adj[v];
  adj[0].push_back(1);
  adj[0].push_back(2);
  adj[1].push_back(3);
  adj[2].push_back(4);

  adj[1].push_back(0);
  adj[2].push_back(0);
  adj[3].push_back(1);
  adj[4].push_back(2);

  vector<int>bfs = bfsOfAlgo(adj, v); 
  for(int i = 0; i < bfs.size(); i++){
    cout << bfs[i] << " "; // print bfs traversal
  }
  cout << endl;
  
  return 0;
}