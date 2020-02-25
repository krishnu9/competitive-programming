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
    int r, g, b;
    cin >> r >> g >> b;
    int flag = 1;

    if (r + g + 1 >= b && g + b + 1 >= r && b + r + 1 >= g) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }

    // if (flag == 1)
    //   cout << "Yes";
    // else
    //   cout << "No";
    // cout << endl;
  }

  return 0;
}