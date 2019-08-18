#include <bits/stdc++.h>
using namespace std;

void printBFS(int **edges, int n, int sv) {
  queue<int> pendingVertices;
  bool *visited = new bool[n];
  for (int i = 0; i < n; i++)
    visited[i] = false;

  pendingVertices.push(sv);
  visited[sv] = true;
  while (!pendingVertices.empty()) {
    int currentVertex = pendingVertices.front();
    pendingVertices.pop();
    cout << currentVertex << ' ';
    for (int i = 0; i < n; i++) {
      if (i == currentVertex)
        continue;
      if (edges[currentVertex][i] == 1 && !visited[i]) {
        pendingVertices.push(i);
        visited[i] = true;
      }
    }
  }
  cout << endl;
  delete[] visited;
}

int main() {
  int n, e;
  cin >> n >> e;

  // creating 2D array for adjacency matrix
  int **edges = new int *[n];
  for (int i = 0; i < n; i++) {
    edges[i] = new int[n];
    for (int j = 0; j < n; j++) {
      edges[i][j] = 0;
    }
  }

  // taking inputs for each edge
  for (int i = 0; i < e; i++) {
    int f, s;
    cin >> f >> s;
    edges[f][s] = 1;
    edges[s][f] = 1;
  }

  // visited array
  bool *visited = new bool[n];
  for (int i = 0; i < n; i++) {
    visited[i] = false;
  }

  printBFS(edges, n, 0);

  for (int i = 0; i < n; i++) {
    delete[] edges[i];
  }
  delete[] edges;

  return 0;
}