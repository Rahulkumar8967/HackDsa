#include <bits/stdc++.h>
using namespace std;

// Dijkstra's algorithm
// Time complexity: O(E log V), Space complexity: O(V)

vector<int> DijkstraAlgo(int V, vector<vector<int>> adj[],int start)
{
  priority_queue<pair<int, int>, // pair<int, int> = {distance, node}
  vector<pair<int, int>>,     // vector of pairs
  greater<pair<int, int>>> pq;  // min heap

  vector<int> dist(V, INT_MAX);
  pq.push({0, 0}); // {dist, node}
  dist[start] = 0;

  while (!pq.empty())
  {
    auto it = pq.top();
    pq.pop();
    int node = it.second;
    int dis = it.first;

    for (auto it : adj[node])
    {
      int adjNode = it[0];
      int edgeWt = it[1];

      if (dis + edgeWt < dist[adjNode])
      {
        dist[adjNode] = dis + edgeWt;
        pq.push({dist[adjNode], adjNode});
      }
    }
  }
return dist;
}

int main()
{
  int V = 5;

  vector<vector<int>> edges = {
      {0, 1, 2},
      {0, 3, 6},
      {1, 2, 3},
      {1, 3, 8},
      {1, 4, 5},
      {2, 4, 7},
      {3, 4, 9}};

  vector<vector<int>> adj[V];

  for (auto it : edges)
  {
    int u = it[0];
    int v = it[1];
    int wt = it[2];
    adj[u].push_back({v, wt});
    adj[v].push_back({u, wt});
  }

  vector<int> distances = DijkstraAlgo(V, adj, 0);

  cout << "Shortest distances from source node 0:" << endl;
  for (int i = 0; i < V; i++)
  {
    cout << "Node " << i << ": " << distances[i] << endl;
  }
  return 0;
}
