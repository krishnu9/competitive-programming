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
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k;
  cin >> n >> k;

  string x;
  cin >> x;

  string y = x.substr(0, k);

  for (int i = k; i < n; i++) {
    y += y[i - k];
    // cout << y << endl;
  }

  if (y >= x) {
    cout << n << endl << y << endl;
  } else {
    for (int i = k - 1; i >= 0; i--) {
      if (y[i] == '9')
        y[i] = '0';
      else {
        y[i]++;
        break;
      }
    }
    for (int i = k; i < n; i++) {
      y[i] = y[i - k];
    }
    cout << n << endl << y << endl;
  }

  return 0;
}