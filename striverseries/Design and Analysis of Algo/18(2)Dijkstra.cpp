#include <bits/stdc++.h>
using namespace std;
// dijkstra algorithm
// Time complexity: O(ElogV) , Space complexity: O(V)
// using set

vector<int> DijkstraAlgo(int V, vector<vector<int>> adj[], int start)
{
  vector<int> dist(V, INT_MAX);
  dist[start] = 0;
  set<pair<int, int>> st; // {distance, node}
  st.insert({0, start}); // {dist, node}

  while (!st.empty())
  {
    auto it = *(st.begin());
    int node = it.second;
    int dis = it.first;
    st.erase(it);

    for (auto it : adj[node])
    {
      int adjNode = it[0];
      int edgeWt = it[1];

      if (dis + edgeWt < dist[adjNode])
      {
        if (dist[adjNode] != INT_MAX)
          st.erase({dist[adjNode], adjNode});
        dist[adjNode] = dis + edgeWt;
        st.insert({dist[adjNode], adjNode});
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

  cout << "Shortest distances from source node 0:"<<endl;
  for (int i = 0; i < V; i++)
  {
    cout << "Node " << i << ": " << distances[i] << endl;
  }

  return 0;
}