#include <bits/stdc++.h>
using namespace std;
// tc =  O(ElogV), sc =  
// Prim's algorithm using Min Heap
int PrimAlgo(int V, vector<vector<int>> adj[])
{
 // wt, node , parent
  priority_queue<pair<int, pair<int, int>>,
   vector<pair<int, pair<int, int>>>,
    greater<pair<int, pair<int, int>>>> pq;
    vector<int> vis(V, 0);
    pq.push({0, {0, -1}}); // starting from node 0
    while(!pq.empty()){
      auto it = pq.top();
      pq.pop();
      int wt = it.first;
      int node = it.second.first;
      int parent = it.second.second;

      if (vis[node]) continue; 
      vis[node] = 1;

      if (parent != -1) {
        cout << "Edge: " << parent << " - " << node << " with weight: " << wt << endl;
      }

      for (auto it : adj[node]) {
        int adjNode = it[0];
        int edgeWt = it[1];
        if (!vis[adjNode]) {
          pq.push({edgeWt, {adjNode, node}});
        }
      }   
    }
}

int main()
{
  int V = 5;
  vector<vector<int>> edges = {
  {0,1,2},{0,2,1},{1,2,1},{2,4,2},{2,3,2},{3,4,1}   
  };

  vector<vector<int>> adj[V];

  for (auto it : edges)
  {
    int u = it[0];
    int v = it[1];
    int wt = it[2];
    adj[u].push_back({v, wt});
    adj[v].push_back({u, wt});
  }

  PrimAlgo(V, adj);

  return 0;
}
