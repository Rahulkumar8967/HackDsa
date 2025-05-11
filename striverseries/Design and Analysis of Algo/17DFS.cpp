#include <bits/stdc++.h>
using namespace std;
// dfs algorithm  // adjList, vis , start chaiye
// tc = O(V + E) , sc = O(V) for the visited array
void dfs(int node, vector<int> &vis, vector<int> &ans, vector<int> adj[]){
  vis[node] = 1;
  ans.push_back(node);
  for (auto it : adj[node])
  {
    if (!vis[it])
    {
      dfs(it, vis, ans, adj);
    }
    }
  }
  
  vector<int> dfsOfAlgo(vector<int> adj[], int V)
  {
    vector<int> vis(V, 0);
    int start = 0; // starting node
    vector<int> ans;
    dfs(start, vis, ans, adj);
    return ans;
  }
  int main()
  {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++)
    {
      int u, v;
      cout << "Enter edge (u v): ";
      cin >> u >> v;
      adj[u].push_back(v); // add edge to adjacency list
      adj[v].push_back(u); // add edge to adjacency list (for undirected graph)
    }
    vector<int> dfs = dfsOfAlgo(adj, V);
    for (int i = 0; i < dfs.size(); i++)
    {
      cout << dfs[i] << " ";
    }
    cout << endl;
    return 0;
  }