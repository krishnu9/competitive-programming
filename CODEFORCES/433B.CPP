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

  int n;
  cin >> n;

  ull a[n], sa[n];

  rep(i, n) {
    cin >> a[i];
    sa[i] = a[i];
  }

  sort(sa, sa + n);

  ull sufa[n], sufsa[n];
  sufa[0] = a[0];
  for (int i = 1; i < n; i++) {
    sufa[i] = a[i] + sufa[i - 1];
  }

  //   rep(i, n) cerr << a[i] << ' ';
  //   cerr << endl;
  //   rep(i, n) cerr << sufa[i] << ' ';
  //   cerr << endl;
  //   rep(i, n) cerr << sa[i] << ' ';
  //   cerr << endl;
  //   rep(i, n) cerr << sufsa[i] << ' ';
  //   cerr << endl;

  sufsa[0] = sa[0];
  for (int i = 1; i < n; i++) {
    sufsa[i] = sa[i] + sufsa[i - 1];
  }

  int m;
  cin >> m;
  while (m--) {
    int type, l, r;
    cin >> type >> l >> r;
    l--;
    r--;
    if (type == 1) {
      if (l == 0)
        cout << sufa[r];
      else
        cout << sufa[r] - sufa[l - 1];
    } else {
      if (l == 0)
        cout << sufsa[r];
      else
        cout << sufsa[r] - sufsa[l - 1];
    }
    cout << endl;
  }

  return 0;
}