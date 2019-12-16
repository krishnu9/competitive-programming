#include <bits/stdc++.h>
using namespace std;

void getBFSPath(int **graph, int n, int sv, int ev, int *visited) {

  map<int, int> reachMap;
  queue<int> pV;
  pV.push(sv);
  visited[sv] = 1;
  bool found = 0;

  while (!pV.empty()) {
    int v = pV.front();
    pV.pop();
    if (v == ev) {
      found = 1;
      break;
    }
    for (int i = 0; i < n; i++) {
      if (i == sv) {
        continue;
      }
      if (graph[i][v] && !visited[i]) {
        visited[i] = 1;
        pV.push(i);
        reachMap[i] = v;
      }
    }
  }
  if (found) {
    int v = ev;
    while (v != sv) {
      cout << v << " ";
      v = reachMap[v];
    }
    cout << sv;
  }
}


int main() {
  int n, e;
  cin >> n >> e;

  int **graph = new int *[n];
  for (int i = 0; i < n; i++) {
    graph[i] = new int[n];
    for (int j = 0; j < n; j++)
      graph[i][j] = 0;
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

  if (start == end)
    cout << end << " ";

  else {
    getBFSPath(graph, n, start, end, visited);
  }

  return 0;
}