#include <bits/stdc++.h>
using namespace std;

bool has_path(int **edges, int n, int sv, int ev, int *visited) {
  // queue with pending vertices
  queue<int> pV;
  pV.push(sv);      // push the sv into queue
  visited[sv] = 1;  // mark it visited

  bool found = false;

  while (!pV.empty()) {
    int v = pV.front();  // take currentVertex and pop queue
    pV.pop();
    if (v == ev) {
      found = true;
      break;
    }
    for (int i = 0; i < n; i++) {
      if (i == sv) continue;

      if (edges[i][v] == 1 && !visited[i]) {
        visited[i] = 1;
        pV.push(i);
      }
    }
  }
  return found;
}

int main() {
  int n, e;
  cin >> n >> e;

  // create the adjacency matrix with all 0s
  int **edges = new int *[n];
  for (int i = 0; i < n; i++) {
    edges[i] = new int[n];
    for (int j = 0; j < n; j++) {
      edges[i][j] = 0;
    }
  }

  // take edges as input
  // and build the edges matrix
  for (int i = 0; i < e; i++) {
    int f, s;
    cin >> f >> s;
    edges[f][s] = 1;
    edges[s][f] = 1;
  }

  int sv, ev;
  cin >> sv >> ev;

  // create vsited array with all 0s
  int *visited = new int[n];
  for (int i = 0; i < n; i++) {
    visited[i] = 0;
  }

  bool ans = has_path(edges, n, sv, ev, visited);

  if (ans)
    cout << "true";
  else
    cout << "false";

  cout << endl;

  for (int i = 0; i < n; i++) {
    delete[] edges[i];
  }
  delete[] edges;

  return 0;
}