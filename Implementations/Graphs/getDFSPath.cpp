#include <bits/stdc++.h>
using namespace std;

vector<int> path;

void getDFSPath(int **graph, int n, int sv, int ev, int *visited) {
  visited[sv] = true;
  if (sv == ev) {
    path.push_back(ev);
    return;
  }
  for (int i = 0; i < n; i++) {
    if (i == sv) continue;
    if (graph[i][sv] == 1 && !visited[i]) {
      getDFSPath(graph, n, i, ev, visited);
      if (!path.empty()) {
        path.push_back(sv);
        return;
      }
    }
  }
}

int main() {
  int n, e;
  cin >> n >> e;
  int **graph = new int *[n];
  for (int i = 0; i < n; i++) {
    graph[i] = new int[n];
    for (int j = 0; j < n; j++) {
      graph[i][j] = 0;
    }
  }
  for (int i = 0; i < e; i++) {
    int f, s;
    cin >> f >> s;
    graph[f][s] = 1;
    graph[s][f] = 1;
  }

  int start, end;
  cin >> start >> end;

  int *visited = new int[n];
  for (int i = 0; i < n; i++) {
    visited[i] = 0;
  }

  getDFSPath(graph, n, start, end, visited);

  for (int i = 0; i < path.size(); i++) {
    cout << path[i] << ' ';
  }

  for (int i = 0; i < n; i++) {
    delete[] graph[i];
  }
  delete[] graph;
  delete[] visited;

  return 0;
}