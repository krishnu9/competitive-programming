#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int

int main() {
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;
  while (t--) {
    lli n, m, q, x, y;
    cin >> n >> m >> q;

    // To Store frequencies of rows and cols
    lli row[n + 1] = {0}, col[m + 1] = {0};
    lli r = 0, c = 0;

    // Taking Input
    for (int i = 0; i < q; i++) {
      cin >> x >> y;
      row[x]++;
      col[y]++;
      row[x] = row[x] % 2;
      col[y] = col[y] % 2;
    }
    for (int i = 1; i < n + 1; i++) {
      if (row[i] & 1) r++;
    }
    for (int i = 1; i < m + 1; i++) {
      if (col[i] & 1) c++;
    }

    // Count Odds
    ulli c_odd = 0;

    c_odd = r * m + c * n - 2 * r * c;

    cout << c_odd << endl;
  }

  return 0;
}