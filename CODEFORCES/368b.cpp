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

int a[100005];
int suf[100005];
int tkn[100005];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i++)
    cin >> a[i];

  for (int i = n; i >= 1; i--) {
    suf[i] = suf[i + 1];
    if (tkn[a[i]] == 0) {
      suf[i]++;
    }
    tkn[a[i]] = 1;
  }

  int q;
  rep(i, m) {
    cin >> q;
    cout << suf[q] << endl;
  }

  return 0;
}