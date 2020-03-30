#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define int long long
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define mod 1000000007
#define inf 100000000000000
#define MM(a, x) memset(a, x, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define sz(x) x.size()

int visited[100001];
int n_comps = 0;
int n_v_comp[100001];
int comp_v[100001];
int c[100001];

void DFS(vector<vector<int>> &adj, int s) {
  int n = adj.size();
  n_v_comp[n_comps]++;
  comp_v[s] = n_comps;
  visited[s] = 1;
  for (auto i : adj[s]) {
    if (!visited[i])
      DFS(adj, i);
  }
}

int32_t main() {

  int n, p;
  cin >> n >> p;              // Number of nodes
  vector<vector<int>> adj(n); // Adjacency lists.

  for (int i = 0; i < p; i++) {
    int f, s;
    cin >> f >> s;
    adj[f].push_back(s);
    adj[s].push_back(f);
  }

  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      DFS(adj, i);
      n_comps++;
    }
  }

  for (int i = 2; i <= n; i++) {
    c[i] = c[i - 1] + i - 1;
  }

  int ways = c[n];

  for (int i = 0; i < n_comps; i++) {
    ways -= c[n_v_comp[i]];
  }

  cout << ways << '\n';

  return 0;
}

// Input: 5 1 2 -1 4 -1 1 3 -1 4 -1 -1
// Output: 0 1 4 2 3