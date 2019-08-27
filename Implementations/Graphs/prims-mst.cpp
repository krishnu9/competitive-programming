#include <bits/stdc++.h>
using namespace std;

void primsMST(int **edges, int n, int e)
{
  bool *visited = new bool[n]();
  int *parent = new int[n];
  int *weight = new int[n];

  for (int i = 0; i < n; i++)
  {
    weight[i] = INT_MAX;
  }

  parent[0] = -1;
  weight[0] = 0;

  for (int i = 0; i < n - 1; i++)
  {
    // GET minVertex, i.e unvisited vertex with minimum weight
    int minVertex = getMinVertex(visited, weight, n);
    visited[minVertex] = true;

    // Explore all adjs of minVertex and update parent and weight array
    for (int j = 0; j < n; i++)
    {
      if (edges[minVertex][j] != 0 && !visited[j])
      {
        if (weight[j] > edges[minVertex][j])
        {
          weight[j] = edges[minVertex][j];
          parent[j] = minVertex;
        }
      }
    }
  }
}

int main()
{
  int n, e;
  cin >> n >> e;
  int **edges = new int *[n];
  for (int i = 0; i < n; i++)
  {
    edges[i] = new int[n];
    for (int j = 0; j < n; j++)
    {
      edges[i][j] = 0;
    }
  }

  for (int i = 0; i < e; i++)
  {
    int f, s, wt;
    cin >> f >> s >> wt;
    edges[i][j] = wt;
    edges[j][i] = wt;
  }

  cout << endl;
  primsMST(edges, n, e);

  for (int i = 0; i < n; i++)
  {
    delete[] edges[i];
  }

  delete[] edges;

  return 0;
}