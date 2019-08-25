#include <bits/stdc++.h>
using namespace std;

struct Edge {
  int src;
  int dst;
  int weight;
};

bool compare(Edge a, Edge b) { return a.weight < b.weight; }

int getParent(int v, int* parent) {
  if (parent[v] == v) {
    return parent[v];
  }
  return getParent(parent[v], parent);
}

Edge* kruskalMST(Edge* edges, int n, int E) {
  sort(edges, edges + E, compare);
  Edge* MST = new Edge[n - 1];
  int* parent = new int[n];
  for (int i = 0; i < n; i++) {
    parent[i] = i;
  }
  int cnt = 0;
  int i = 0;
  while (cnt < (n - 1)) {
    int srcParent = getParent(edges[i].src, parent);
    int dstParent = getParent(edges[i].dst, parent);
    if (srcParent != dstParent) {
      MST[cnt] = edges[i];
      cnt++;
      parent[srcParent] = dstParent;
    }
    i++;
  }
  return MST;
}

int main() {
  int n, E;
  cin >> n >> E;

  Edge* edges = new Edge[E];

  for (int i = 0; i < E; i++) {
    int s, d, w;
    cin >> s >> d >> w;
    edges[i].src = s;
    edges[i].dst = d;
    edges[i].weight = w;
  }

  Edge* MST = kruskalMST(edges, n, E);

  for (int i = 0; i < n - 1; i++) {
    cout << min(MST[i].src, MST[i].dst) << " " << max(MST[i].src, MST[i].dst)
         << " " << MST[i].weight << endl;
  }

  return 0;
}