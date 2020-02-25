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
    int s, w1, w2, w3;
    cin >> s >> w1 >> w2 >> w3;
    if (w1 + w2 + w3 <= s)
      cout << 1;
    else if (w1 + w2 <= s)
      cout << 2;
    else if (w2 + w3 <= s)
      cout << 2;
    else
      cout << 3;
    cout << '\n';
  }

  return 0;
}