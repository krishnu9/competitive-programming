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

int n, m;

ll distance(int a, int b) {
  if (b >= a) {
    return b - a;
  } else {
    return n - a + b;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> n >> m;

  ll ans = 0;
  int cur = 1;

  rep(i, m) {
    int next;
    cin >> next;
    ans += distance(cur, next);
    cur = next;
  }
  cout << ans << endl;

  return 0;
}