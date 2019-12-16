#include <bits/stdc++.h>
using namespace std;

struct Edge {
  int src;
  int dest;
  int weight;
};

bool compare(Edge a, Edge b) { return a.weight < b.weight; }

// function to return parent of a vertex
int getParent(int v, int* parent) {
  if (parent[v] == v) {
    return v;
  }
  return getParent(parent[v], parent);
}

Edge* kruskals(Edge* edges, int n, int E) {
  // Sorted the edges array in increasing order
  sort(edges, edges + E, compare);

  Edge* output = new Edge[n - 1];  // For storing the output edges
  int* parent = new int[n];        // For maintaining parent of vertices
  for (int i = 0; i < n; i++) {
    parent[i] = i;
  }

  int count = 0;  // How many edges are added till now in MST
  int i = 0;      // for Iterating through the sortes Edges array
  while (count < (n - 1)) {
    Edge currentEdge = edges[i];
    int srcParent = getParent(currentEdge.src, parent);
    int dstParent = getParent(currentEdge.dest, parent);

    if (srcParent != dstParent) {
      output[count] = currentEdge;
      count += 1;
      parent[srcParent] = dstParent;
    }
    i += 1;
  }
  return output;
}

int main() {
  int n, E;
  cin >> n >> E;

  Edge* edges = new Edge[E];

  for (int i = 0; i < E; i++) {
    int s, d, w;
    cin >> s >> d >> w;
    edges[i].src = s;
    edges[i].dest = d;
    edges[i].weight = w;
  }

  Edge* output = kruskals(edges, n, E);
  for (int i = 0; i < n - 1; i++) {
    if (output[i].src < output[i].dest) {
      cout << output[i].src << " " << output[i].dest << " " << output[i].weight
           << endl;
    } else {
      cout << output[i].dest << " " << output[i].src << " " << output[i].weight
           << endl;
      /* code */
    }
  }

  return 0;
}