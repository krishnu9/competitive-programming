#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define mod 1000000007
#define inf 100000000000000
#define MM(a, x) memset(a, x, sizeof(a))
#define ALL(x) (x).begin(), (x).end()
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define sz(x) x.size()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int s[n], p[n], v[n];
    int prof = 0;
    rep(i, n) {
      cin >> s[i] >> p[i] >> v[i];
      s[i]++;
      int vis = p[i] / s[i];
      prof = max(vis * v[i], prof);
    }
    cout << prof << endl;
  }

  return 0;
}