#include <bits/stdc++.h>
using namespace std;

void primsMST(int** edges, int n, int e) {
  bool* visited = new bool[n]();
  int* parent = new int[n];
  int* weight = new int[n];

    for (int i = 0; i < n; i++)
    {
        weight[i] = INT_MAX;
    }

    
    

}

int main() {
  int n, e;
  cin >> n >> e;
  int** edges = new int*[n];
  for (int i = 0; i < n; i++) {
    edges[i] = new int[n];
    for (int j = 0; j < n; j++) {
      edges[i][j] = 0;
    }
  }

  for (int i = 0; i < e; i++) {
    int f, s, wt;
    cin >> f >> s >> wt;
    edges[f][s] = wt;
    edges[s][f] = wt;
  }

  cout << endl;
  primsMST(edges, n, e);

  for (int i = 0; i < n; i++) {
    delete[] edges[i];
  }

  delete[] edges;

  return 0;
}