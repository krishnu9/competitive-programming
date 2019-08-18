#include <bits/stdc++.h>
using namespace std;

void DFS(int **graph, int n, int sv, int *visited) {
    visited[sv] = 1;
    for(int i=0;i<n;i++){
        if(i==sv)
        continue;
        if(graph[i][sv]==1){
            if(visited[i]==1){
                continue;
            }
            else{
                DFS(graph,n,i,visited);
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

  int *visited = new int[n];
  for (int i = 0; i < n; i++) {
    visited[i] = 0;
  }

  DFS(graph, n, 0, visited);

  bool dc = false;
  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      dc = true;
      break;
    }
  }

  if (dc)
    cout << "false" << endl;
  else
    cout << "true" << endl;

  for (int i = 0; i < n; i++) {
    delete[] graph[i];
  }
  delete[] graph;
  delete[] visited;

  return 0;
}