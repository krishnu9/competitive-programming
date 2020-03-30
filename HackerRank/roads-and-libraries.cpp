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

int n, m, c_road, c_lib;
vector<int> adj[1000001];
bool visited[1000001];
int c = 0;

void DFS(int s) {
  visited[s] = true;
  c++;
  for (int i = 0; i < adj[s].size(); i++) {
    int u = adj[s][i];
    if (!visited[u]) {
      DFS(u);
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    cin >> n >> m >> c_lib >> c_road;
    for (int i = 0; i < n; i++) {
      visited[i] = false;
      adj[i].clear();
    }
    for (int i = 0; i < m; i++) {
      int f, s;
      cin >> f >> s;
      f--;
      s--;
      adj[f].push_back(s);
      adj[s].push_back(f);
    }
    int cost = 0;
    for (int i = 0; i < n; i++) {
      if (!visited[i]) {
        c = 0;
        DFS(i);
        cost += (c - 1) * c_road;
        cost += c_lib;
        ;
      }
    }
    cout << min(cost, n * c_lib) << '\n';
  }

  return 0;
}