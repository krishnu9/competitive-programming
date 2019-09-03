#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int

int main() {
  ios_base::sync_with_stdio(0);

  int t, n, k;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (a[0] == -1 && a[1] != 1) a[0] = 1;
    bool ans = true;
    for (int i = 1; i < n - 1; i++) {
      if (a[i] != -1) continue;

      if ((a[i - 1] == 1 && a[i + 1] == 2) ||
          (a[i - 1] == 2 && a[i + 1] == 1)) {
        ans = false;
        break;
      }

      if (a[i - 1] == 1 && (a[i + 1] == 1 || a[i + 1] == -1)) a[i] = 2;
      if (a[i - 1] == 2 && (a[i + 1] == 2 || a[i + 1] == -1)) a[i] = 1;
    }
    if (a[n - 1] == -1 && a[n - 2] != 1) a[n - 1] = 1;
    if (ans) {
      cout << "YES\n";
      for (int i = 0; i < n; i++) cout << a[i] << ' ';
      cout << endl;
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}