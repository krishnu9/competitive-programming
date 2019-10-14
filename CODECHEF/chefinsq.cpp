#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int

int max_k;

int fact(int n) {
  int res = 1;
  for (int i = 2; i <= n; i++) res = res * i;
  return res;
}

int nCr(int n, int r) { return fact(n) / (fact(r) * fact(n - r)); }

bool compare(int n) { return (n == max_k); }

int main() {
  ios_base::sync_with_stdio(0);

  int t;
  int n, k;
  while (t--) {
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
    max_k = a[k - 1];

    int cnt = count_if(a, a + n, compare);
    int n_k = count_if(a, a + k, compare);

    int ans = nCr(cnt, n_k);

    cout << ans << endl;
  }

  return 0;
}