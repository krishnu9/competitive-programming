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

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        char c;
        cin >> c;
        if (c == '0' or i == j)
          continue;
        if (abs(i - j) <= k)
          adj[i].push_back(j);
      }
    }
    vector<int> dist(n, -1);
    dist[0] = 0;
    queue<int> q;
    q.push(0);

    while (!q.empty()) {
      int u = q.front();
      q.pop();
      for (auto i : adj[u]) {
        if (dist[i] != -1)
          continue;
        dist[i] = dist[u] + 1;
        q.push(i);
      }
    }
    cout << dist[n - 1] << ' ';
    cout << '\n';
  }
  return 0;
}