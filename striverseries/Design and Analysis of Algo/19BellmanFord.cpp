// Bellman ford algorithm
#include<bits/stdc++.h>
using namespace std;

vector<int> bellmanFord(int V, vector<vector<int>> &edges, int start) {
  vector<int> dist(V, INT_MAX);
  dist[start] = 0;
  for (int i = 0; i < V - 1;i++){
    for (auto it : edges){
      int u = it[0];
      int v = it[1];
      int wt = it[2];
      // Relaxation step 
      if (dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
        dist[v] = dist[u] + wt;
      }
    }
  }

  // Check for negative weight cycles
  for (auto it : edges) {
    int u = it[0];
    int v = it[1];
    int wt = it[2];
    if (dist[u] != INT_MAX && dist[u] + wt < dist[v]) {
      cout << "Negative weight cycle detected!" << endl;
      return {}; // Return empty vector to indicate failure
    }
  }
  return dist;
}


int main(){

  int V, E;
  cout << "Enter number of vertices and edges: ";
  cin >> V >> E;
  vector<vector<int>> edges(E, vector<int>(3));
  cout << "Enter edges (u v w): " << endl;
  for (int i = 0; i < E; i++) {
    cin >> edges[i][0] >> edges[i][1] >> edges[i][2]; // u, v, w
  }
  int start;
  cout << "Enter starting vertex: ";
  cin >> start;
  vector<int> distances = bellmanFord(V, edges, start);
  cout << "Shortest distances from starting vertex: " << endl;
  for (int i = 0; i < V; i++) {
    if (distances[i] == INT_MAX) {
      cout << "INF" << " ";
    } else {
      cout << distances[i] << " ";
    }
  }
  cout << endl;
  return 0;
}