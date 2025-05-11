// Ford -fulkerson algorithm: This project implements the Ford-Fulkerson algorithm for computing the maximum flow in a flow network.

#include<bits/stdc++.h> 
using namespace std;
// Ford-Fulkerson algorithm to find maximum flow in a flow network

// Time complexity: O(E * V^2) , Space complexity: O(V^2)



int main(){

  int V, E;
  cout << "Enter number of vertices and edges: ";
  cin >> V >> E;
  vector<vector<int>> graph(V, vector<int>(V, 0)); // Initialize the graph with 0s
  cout << "Enter edges (u v w): " << endl;
  for (int i = 0; i < E; i++) {
    int u, v, w;
    cin >> u >> v >> w; // u, v, w
    graph[u][v] = w; // Set the capacity of the edge
  }
  
  int source, sink;
  cout << "Enter source and sink: ";
  cin >> source >> sink;

  // Implementing Ford-Fulkerson algorithm using DFS
  int maxFlow = 0;
  
  // Your implementation here

  cout << "The maximum possible flow is: " << maxFlow << endl;
  
  return 0;
}