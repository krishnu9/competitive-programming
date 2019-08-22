#include <bits/stdc++.h>
using namespace std;

void DFS(int **graph, int n, int sv, int *visited) {
  visited[sv] = 1;

  for (int i = 0; i <= n; i++) {
    if (sv == i) {
      continue;
    }
    if (graph[i][sv] == 1 && !visited[i]) {
      DFS(graph, n, i, visited);
    }
  }
}

int solve(int n, int m, vector<int> u, vector<int> v) {
  int **edges = new int *[n + 1];
  for (int i = 0; i <= n; i++) {
    edges[i] = new int[n + 1];
    for (int j = 0; j < n; j++) {
      edges[i][j] = 0;
    }
  }

  for (int i = 0; i < m; i++) {
    edges[u[i]][v[i]] = 1;
    edges[v[i]][u[i]] = 1;
  }

  int *visited = new int[n + 1];
  for (int i = 0; i <= n; i++)
    visited[i] = 0;

  int count = 0;

  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      count++;
      DFS(edges, n, i, visited);
    }
  }

  for (int i = 0; i < n; i++) {
    delete[] edges[i];
  }
  delete[] edges;
  delete[] visited;
  return count;
}

int main() {
  int n, m;
  vector<int> u;
  vector<int> v;

  int ui, vi;

  for (int i = 0; i < m; i++) {
    cin >> ui;
    u.push_back(ui);
  }

  for (int i = 0; i < m; i++) {
    cin >> vi;
    v.push_back(vi);
  }

  int ans = solve(n, m, u, v);
  cout << ans;

  return 0;
}